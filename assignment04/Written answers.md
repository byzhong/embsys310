# Assignment 04
Follow the same steps as we did in the class to blink LED1 (PA5) at a visible rateusing the bit-band region to enable the clock to Port A, then answer the following:  
  1. What instructions does the compiler produce in assembly for “writing” to the GPIO bit when using bit-band address?  
    **Answer**: The instructions are: store "1" onto R0 to be written to GPIO bit. Load bit band alias address onto R1. Then write R0 value of "1" to the address stored in R1.      
  2. What were the instructions produced when writing to the GPIOx_ODR without using bit-banding?  
    **Answer**: Without using bit banding, the instructions to writing to the GPIO bit are: load the value of address stored by R0 to R1, perform bitwise operator OR between R1 and 0x1 to produce new value for R1, then store the updated value from R1 back into the address stored in R0.

Create a function “func1” with 5 arguments and call “func1” from within another function “func2”. Trace thru the assembler and note:  
  1. How does the calling function “func2” pass the values to the called function “func1”?  
  2. What extra code did the compiler generate before calling the function “func1” with the multiple arguments?  
  3. What extra code did the compiler generate inside the called function “funct1” with the multiple list of arguments?  
  4. Any other observations?

**Answer**: Before calling func1 within func2, the compiler generates extra code to push R7 and LR onto the stack. Additionally, the 5 argument values eventually passed into func1 are first stored on registers R0-R3 and the SP. Once entering func1, extra code inside func1 pushes R4 and R5 onto the stack. The value stored on the SP is loaded onto R5. Values are summed up, R4 and R5 are popped off the stack, and func1 is exited.
