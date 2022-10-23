
//circular linked list
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *create_node()
{
    return (struct node*)malloc(sizeof(struct node));
}

void insert_begin(struct node **start, int item)
{
    struct node *new = (struct node*)malloc(sizeof(struct node));
    new->data=item;

    if(*start==NULL)
    {
        *start=new;
        new->next=*start;
        //printf("%d\t",(*start)->data);
    }

    else
    {
        struct node *ptr=*start;
        while(ptr->next!=*start)
        {
            //printf("%d\t",ptr->data);
            ptr=ptr->next;
        }
        new->next=*start;
        ptr->next=new;
        *start=new;
        
    }
    printf("Node inserted\n");

}

void insert_end(struct node **start,int item)
{
    struct node *new = (struct node*)malloc(sizeof(struct node));
    new->data=item;

    if(*start==NULL)
    {
        *start=new;
        new->next=*start;
    }
    else
    {
        struct node *ptr=*start;
        while(ptr->next!=*start)
        {
            ptr=ptr->next;
        }
        ptr->next=new;
        new->next=*start;
    }
}

void delete_begin(struct node **start)
{
    if(*start==NULL)
    {
        printf("Underflow\n");
    }
    else
    {
        struct node *ptr=*start,*temp=*start;
        while(ptr->next!=*start)
        {
            ptr=ptr->next;
        }
        *start=temp->next;
        ptr->next=*start;

        free(temp);


    }
}

void delete_end(struct node **start)
{
     if(*start==NULL)
    {
        printf("Underflow\n");
    }
    else
    {
       struct node *ptr=*start,*pptr;
       while(ptr->next=*start)
       {
           pptr=ptr;
           ptr->next=ptr;
       }

       pptr->next=*start;
       free(ptr);
    }
}

void display(struct node **start)
{
    if (*start==NULL)
    {
        printf("List is empty\n");
    }
    else
    {

      struct node *ptr;
      ptr=*start;
      do
      {
          printf("%d\t",ptr->data);
          ptr=ptr->next;
      }
      while(ptr!=*start);
    }
    printf("\n");
    
}



int main()
{
    struct node *start=NULL;
    int ch,x,p;
    while(ch!=6)
    {
        printf("Enter choice:\n");
        printf("1.Insert at the beginning.\n2.Insert at the end.\n3.Delete from beginning\n4.Delete at end.\n5.Display the current linked list.\n6.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("Enter the elements that you want to insert\n");
            scanf("%d",&x);
            insert_begin(&start,x);
            break;

            case 2:
            printf("Enter the elements that you want to insert\n");
            scanf("%d",&x);
            insert_end(&start,x);
            break;

            case 3:
            delete_begin(&start);
            break;

            case 4:
            delete_begin(&start);
            break;

            case 5:
            display(&start);
            break;

            case 6:
            exit(0);
            
        }
        
    }
    return 0;
}