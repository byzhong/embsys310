#include<assert.h>
#include"stack.h"

void stackInit(void);
int stackPush(int data);
int stackPop();

int main()
{
    int result1;
    int result2;
    
    // *******************************************************************
    // Test1: Retrieve item from an empty stack
    // *******************************************************************
    // Arrange:
    result1 = 42;
    stackInit();
    
    // Act:
    result1 = stackPop();
    
    // Assert:
    assert(1 == result1);
    
    
    // *******************************************************************
    // Test2: Successfully retrieve an item from the stack
    // *******************************************************************
    // Arrange:
    result1 = 42;
    result2 = 42;
    stackInit();
    
    // Act:
    result1 = stackPush(24);
    result2 = stackPop();
    
    // Assert:
    assert(0 == result1);
    assert(24 == result2);
    
    // *******************************************************************
    // Test3: Fill stack, then get all items.
    // *******************************************************************
    // Arrange:
    stackInit();
    
    // Act:
    stackPush(2);
    stackPush(4);
    stackPush(6);                                    
    
    // Assert:
    assert(6 == stackPop());
    
    assert(4 == stackPop());
    
    assert(2 == stackPop());
    
    // *******************************************************************
    // Test4: Fill stack, then put one more item, should fail
    // *******************************************************************
    // Arrange:
    stackInit();
    
    // Act:
    stackPush(2);
    stackPush(4);
    stackPush(6);
    
    // Assert:
    assert(1 == stackPush(8));
    
    
    // ***********************************************************************
    // Test5: Fill stack, retrieve one item, then add item, then retrieve all
    // ***********************************************************************
    // Arrange:
    stackInit();
    
    // Act:
    stackPush(2);
    stackPush(4);
    stackPush(6);
    stackPop();
    stackPush(8);
    
    // Assert:
    assert(8 == stackPop());
    assert(4 == stackPop());
    assert(2 == stackPop());
    
    
    
    
    // ***********************************************************************
    // Test6: Fill queue and retrieve all items. Do it twice in a row.
    // ***********************************************************************
    // Arrange:
    stackInit();
    
    // Act:
    stackPush(2);
    stackPush(4);
    stackPush(6);
    
    // Assert:
    assert(6 == stackPop());
    assert(4 == stackPop());
    assert(2 == stackPop());
    
    assert(0 == stackPush(1));
    assert(0 == stackPush(3));
    assert(0 == stackPush(5));
    
    assert(1 == stackPush(7));
    
    assert(5 == stackPop());   
    assert(3 == stackPop());
    assert(1 == stackPop());
    return 0;
}
