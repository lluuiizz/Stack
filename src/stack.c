#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//  STACK OPERATIONS    
void push (long long);
void pop ();
long long peek ();

//  ARITHMETIC OPERATIONS
void add ();
void sub ();
void multy ();
void divi ();

// BOLEANS OPERATIONS
bool isEmpty();

long long stack[512];
int top = -1;


int main (void)
{
    push(3265);
    push(4127);
    push(2987);
    add();
    add();
    printf("O total de produção foi: %lld\n", peek());
    pop();
    push(4127);
    push(2987);
    sub();
    printf("A queda de produção foi: %lld\n", peek());
    pop();
    peek();
}

//  STACK OPERATIONS IMPLEMENTATION
void push (long long n) 
{
    top++;
    stack[top] = n;
}

void pop() 
{
    if (!isEmpty())
    {
        stack[top] = 0;
       top--;
    }
    else {
        printf("CAN NOT POP:  Stack empty!\n");
        exit(1);
    }
}

long long peek ()
{ 
    if(isEmpty()) 
    {     
        printf("CAN NOT PEEK: Stack empty!\n");
        exit(1);
    }
    
    return stack[top];
}

//  ARITHMETIC IMPLEMENTATION
void add ()
{
    if (!isEmpty())
    {
        if (top > 0)
        {
            stack[top - 1] = stack[top] + stack[top - 1];
            pop();
        }
        else {
            printf("CAN NOT ADD: Qantity of values less than 2\n");
            exit(1);
        }
    }

}

void sub ()
{
    if (!isEmpty())
    {
        if (top > 0)
        {
            stack[top - 1] = stack[top - 1] - stack[top];
            pop();
        }
        else {
            printf("CAN NOT SUB: Qantity of values less than 2\n");
            exit(1);
        }
    }
}

void multy ()
{
    if (!isEmpty())
    {
        if (top > 0)
        {
            stack[top - 1] = stack[top - 1] * stack[top];
            pop();
        }
        else {
            printf("CAN NOT MULTY: Qantity of values less than 2\n");
            exit(1);
        }
    }
}

void divi ()
{
    if (!isEmpty())
    {
        if (top > 0)
        {
            stack[top - 1] = stack[top - 1] / stack[top];
            pop();
        }
        else {
            printf("CAN NOT DIV: Qantity of values less than 2\n");
            exit(1);
        }
    }
}



bool isEmpty()
{
    if (top < 0)
    {
        return true;
    }
    
    return false;    
}


