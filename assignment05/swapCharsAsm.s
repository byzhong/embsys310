/*******************************************************************************
File name       : swapCharsAsm.s
Description     : Assembly language function for swapping chars
*******************************************************************************/   

    EXTERN PrintString  // PrintString is defined outside this file.
    EXTERN myCstr       // myCstr defined outside this file.
    
    PUBLIC swapCharsAsm // Exports symbols to other modules
                        // Making swapCharsAsm available to other modules.
    
// Code is split into logical sections using the SECTION directive.
// Source: http://ftp.iar.se/WWWfiles/arm/webic/doc/EWARM_AssemblerReference.ENU.pdf
// SECTION  section  :type [:flag] [(align)]
//      The data section is used for declaring initialized data or constants. This data does not change at runtime
//      The bss section is used for declaring variables. The syntax for declaring bss section is -
//      The text section is used for keeping the actual code.

// CODE: Interprets subsequent instructions as Arm or Thumb instructions, 
// depending on the setting of related assembler options.

// NOREORDER (the default mode) starts a new fragment in the section
// with the given name, or a new section if no such section exists.
// REORDER starts a new section with the given name.

// NOROOT means that the section fragment is discarded by the linker if
// no symbols in this section fragment are referred to. Normally, all
// section fragments except startup code and interrupt vectors should
// set this flag.

// The (2) is for the (align)
// The power of two to which the address should be aligned.
// The permitted range is 0 to 8. 
// Code aligned at 4 Bytes.

    SECTION .text:CODE:REORDER:NOROOT(2)
    
    THUMB               // Indicates THUMB code is used
                        // Subsequent instructions are assembled as THUMB instructions
    
/*******************************************************************************
Function Name   : swapCharsAsm
Description     : Calls C code to print a string; 
                  swaps the values of two char inputs
C Prototype     : int swapCharsAsm(char letter1, char letter2)
                : Where letter1 is the first char input and letter2 is the second char input
Parameters      : R0: char letter1
                  R1: char letter2
Return value    : void
*******************************************************************************/  
  
swapCharsAsm
    PUSH {R0, R1, LR}   // save the 2 input arguments and return address
    LDR R0,=myCstr      // load (global) address of address of string into R0
    LDR R0,[R0]         // load address of string into R0
    BL  PrintString     // call PrintString to print the string
    POP {R0, R1, LR}         // Restore R0, R1, and LR
    
    // LDR = Load Byte
    LDRB R2, [R0]       // letter1 Copy value from address in R0 into R2
    LDRB R3, [R1]       // letter2 Copy value from address in R1 into R3
    
    // STRB = Store Byte
    STRB R2, [R1]       // Copy value from address in R2 into address stored in R1
    STRB R3, [R0]       // Copy value from address in R3 into address stored in R0
    BX LR               // return

    END
