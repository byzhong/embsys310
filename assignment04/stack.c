#include "stack.h"
#define STACK_SIZE 3

// Global variables
int stackStore[STACK_SIZE]; //actual stack
int stackTop;               //to index top of stack


// Initialize internals of the stack
void stackInit(void)
{
    stackTop = -1;
    for(int i=0; i<STACK_SIZE; i++)
    {
        stackStore[i] = 0;
    }
}

// If stack is empty return error
int isEmpty()
{
    if (stackTop == -1)
        return 1;
    else
        return 0;
}

// If stack is full return error
int isFull()
{
    if (stackTop == STACK_SIZE)
        return 1;
    else
        return 0;
}

// Add data to stack
int stackPush (int data)
{
    stackTop++;
    if(!isFull())
    {
        stackStore[stackTop] = data;
        return 0;
    }
    else
    {
        stackTop--;
        return 1;
    }
}

// Get data from stack
int stackPop()
{
    if(!isEmpty())
    {
        int data = stackStore[stackTop];
        stackTop--;
        return data;
    }
    else
    {
        return 1;
    }
}
