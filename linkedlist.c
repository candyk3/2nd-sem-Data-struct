#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node * create_node()
{
    return (struct node *)malloc(sizeof(struct node));
}

void display (struct node **start){
    struct node *ptr;
    ptr=*start;
    while (ptr!=NULL)
    {
        printf("%d,",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");

}

void insert_begin(struct node **start, int item)
{
    struct node *new = create_node();
    new->data=item;
    new->next=*start;
    *start=new;

}

void insert_end(struct node **start, int item)
{
    struct node *new = create_node();
    struct node *temp =*start;
    new->data=item;
    new->next=NULL;
    while (temp->next!=NULL)
        temp=temp->next;
    temp->next=new;
}

void insert_pos(struct node **start, int item, int pos )
{
 struct node *new= create_node();
 int count=1;
 struct node *ptr = *start;
 new->data=item;
 if (pos==1)
 {
     insert_begin(start,item);

 }
 else
 {
     ptr=*start;
     while(count<=pos-2)
     {
         ptr=ptr->next;
         count++;
     }
     if(ptr==NULL)
     {
         printf("Position does not exist");
     }
     else
     {
     new->next=ptr->next;
     ptr->next=new;
     }
 }

}

void delete_begin(struct node **start)
{
    int item;
    if(start=NULL)
    printf("Underflow");
    struct node * temp;
    temp=*start;
    *start=(*start)->next;  
    item=temp-> data;
    free(temp);

}

void delete_end(struct node **start)
{
    struct node *pptr=NULL;
    struct node *ptr=*start;
    if(*start=NULL)
    {
        printf("Underflow");
    }
    while(ptr->next!=NULL)
    {
        pptr=ptr;
        ptr=ptr->next;
    }  
    pptr->next=NULL;
    free(ptr);
}

void delete_pos(struct node **start, int pos)
{
    struct node *ptr = *start;
    struct node *pptr=NULL;
    int count=1;
    if(pos==1)
    {
        delete_begin(start);
    }
    else
    {
     while(count<pos)
     {
        pptr=ptr;
        ptr=ptr->next;
        count++;
     }
     pptr->next=ptr->next;
     free(ptr);
}   }

int main(){
    struct node *start=NULL;
    int ch,x,p;
    while(1)
    {
        printf("1.Insert a node at beginning.\n2.Insert a node at the end.\n3.Insert a node at a given position.\n4.Delete a node at the beginning.\n5.Delete a node at the end.\n6.Delete node at a given position\n7.Display the given Linked list.\n8.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("Enter the data to insert\n");
            scanf("%d",&x);
            insert_begin(&start,x);
            break;
            
            case 2:
            printf("Enter the data to insert\n");
            scanf("%d",&x);
            insert_end(&start,x);
            break;

        

            case 3:
            printf("Enter the data to insert\n");
            scanf("%d",&x);
            printf("Enter the position for insertion\n");
            scanf("%d",&p);
            insert_pos(&start,x,p);
            break;

            case 4:
            delete_begin(&start);
            break;

            case 5:
            delete_end(&start);
            break;

            case 6:
            printf("Enter the position of the node that you want to delete\n");
            scanf("%d",&p);
            delete_pos(&start,p);
            break;

            case 7:
            display(&start);
            break;

            case 8:
            exit(0);
            


        }
        

    }
    return 0;
}