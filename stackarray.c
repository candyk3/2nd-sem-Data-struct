//Stack operations using arrays 4.1L
//Rinsha Kharbanda

#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int top=-1;
int stack[MAX];

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

int peek()
{
    if(top==-1)
    {
        printf("UNDERFLOW\n");
    }
    return stack[top];

}

int main()
{
    int item, ch;
    while(1)
    {
        printf("\t1. Push\n\t2. Pop\n\t3. Peek\n\t4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("\nEnter value to be inserted: ");
                    scanf("%d",&item);
                    push(item);
                    break;
            case 2: item=pop();
                    printf("The deleted element is: %d",item);
                    break;
            case 3: 
                    item =peek();
                    printf("The top element of the stack is: %d",item);
                    break;
            case 4: 
                    exit(0);
          
        }
    }
}


