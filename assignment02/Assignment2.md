## Assignment 2  
### 1.  
  a. Local Value: -2147483648  
  b. Registers Value: 0x80000000  
  c. both N and V are set to 1. Explain: V set to 1 because of overflow, N set to 1 because value is now negative  

### 2.  
  a. Locals Value: 0  
  b. N & V are both 0. Carry condition flag set to 1 because of unsigned overflow addition. N set to zero since addition result is zero. V stays zero because not a signed overflow of addition.  
  
### 3.  
  a. Local Value: 2147483648  
  b. Registers Value: 0x80000000  
  c. both N and V are set to 1. Explain: V set to 1 because of signed overflow, N set to 1 because value is supposed to be negative, but displayed value in Locals is positive because application recognizes the value range of the original "unsigned int" declaration.  

### 4.  
  a. Locals Value: 0  
  b. Registers Value: 0x80000000  
  c. N & V are both 0. Carry condition flag set to 1 because of unsigned overflow addition. N set to zero since addition result is zero. V stays zero because not a signed overflow of addition.  
 
### 5.  
  a. Scope of "counter" is global  
  b. No longer visible in "Locals" view.  
  c. "counter" still visible in Watch window view.  
  d. Memory address of 0x20000000  

### 6.  
  a. "counter" has value of 4 at the end  
  b. Counter value has changed because value was incremented +3 by pointer commands, then incremented once directly through counter++.  


### 7.  
  a. Memory address of 0x20000000  
  b. ROM  
  c. Value of 4  
