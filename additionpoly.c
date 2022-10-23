#include <stdio.h>
#include <stdlib.h>

typedef struct poly
{
    int coeff,pow;
    poly *next;
}poly;

void create_poly(poly **head)
{
    int *temp=*head, *new;
    int ch;
    int coeff,pow;
    
    
    do
    {
        new= (poly*)malloc(sizeof(struct poly));
        printf("Enter the coefficient: ");
        scanf("%d",&coeff);
        printf("Enter the power: ");
        scanf("%d",&pow);

        new->coeff=coeff;
        new->pow=pow;
        new->next=NULL;

        if(temp==NULL)
        {
            *head=new;
        }
        else
        {
            temp->next=new;
        }
        temp=new;

        printf("enter '1' to continue or '0' to exit\n"); 
        scanf("%d",&ch); 

    }while(ch==1);
    
}

void display_poly(poly **head)
{
    poly *temp=*head;
    while(temp->next!=NULL)
    {
        printf("%dx^%d",temp->coeff,temp->pow);

    } 
    temp = temp->next; 
    if (temp->coeff>= 0) 
    { 
     
        printf(" + "); 
    } 
    printf("%dx^%d",temp->coeff,temp->pow); 

}


void add_poly(poly *pol1,poly *pol2, poly **pol3)
{
    
}