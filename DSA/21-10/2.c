//WAP to convert an infix into its equivalent postfix notation.
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
char stack[100];
int top = -1;
void push(char x)
{
    stack[++top] = x;
}
char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}
int main()
{
    
}