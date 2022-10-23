//doubly linked list
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev, *next;
};

struct node *create_node()
{
    return(struct node*)malloc(sizeof(struct node));
}


void insert_begin(struct node **start,int item)
{
    struct node *new=create_node();
    new->data=item;
    if (*start==NULL)
    {
        new->prev=NULL;
        new->next=NULL;
        *start=new;
    }
    else
    {
        new->next=*start;
        new->prev=NULL;
        *start->prev=new;
        *start=new;
    }
}

void insert_end(struct node **start, int item)
{
    struct node *new = create_node();
    new->data=item;
    if(*start==NULL)
    {
        new->prev=NULL;
        new->next=NULL;
        *start=new;
    }
    else
    {
        struct node *ptr=*start;
        while (ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=new;
        new->prev=ptr;
        new->next=NULL;

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
        int item;
        struct node *temp=*start;
        *start=(*start)->next;
        item=temp->data;
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
        while(ptr->next!=NULL)
        {
           pptr=ptr;
           ptr=ptr->next;
        }
        pptr->next=NULL;
        free(ptr);

    }

}

void display(struct node **start)
{
    struct node *ptr=*start;
    do
    {
        printf("%d",ptr->data);
        ptr=ptr->next;
    } while (ptr!=*start);
    
    printf("\n");
}

int main()
{
    int ch,x;
    struct node *start=NULL;
    while(1)
    {
        printf("Enter choice:\n");
        printf("1.Insert at beginning.\n2. Insert at end.\n3. delete at beginning.\n4.Delete at end.\n5.Display the current doubly linked list.\n6.Exit.\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
            printf("Enter the data to be inserted.\n");
            scanf("%d",&x);
            insert_begin(&start,x);
            break;

            case 2:
            printf("Enter the data to be inserted.\n");
            scanf("%d",&x);
            insert_end(&start,x);
            break;

            case 3:
            delete_begin(&start);
            break;

            case 4:
            delete_end(&start);
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