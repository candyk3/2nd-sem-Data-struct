//Reverse a string using stack
//Rinsha Kharbanda
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int stack[MAX];
int top;

void push(int item)
{
    if(top==MAX-1)
    {
        printf("Overflow\n");
    }
    

    top++;
    stack[top]=item;
}

int pop()
{
    int data;
    if(top==-1)
    {
        printf("Underflow\n");
    }
    data=stack[top];
    top--;
    return data;

}

int main()
{
  char str[] = "Rinsha";
    int n = strlen(str);
    for(int i=0;i<n;i++)
    {
        push(str[i]);
    }
    for(int i=0;i<n;i++)
    {
        str[i]=pop(str[i]);
    }
    printf("Reversed string is %s\n", str);


}


