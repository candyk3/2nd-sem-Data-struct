#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int a1[MAX_SIZE];
    int n,i,x,p,y;
    printf("enter the number of elements in your array\n");
    scanf("%d",&n);
    printf("enter the elements in your array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a1[i]);
    }


    printf("Enter the element which is to be inserted\n");
    scanf("%d",&x);
    printf("Enter at which position the element has to be added\n");
    scanf("%d",&p);


    printf("yor original array is:\n");
    for(i=0;i<n;i++)
    {
    printf("%d",a1[i]);
    printf("\n");
    }

    n++;

    for(i=n-1;i>=p;i--)
    {
        a1[i]=a1[i-1];
    }

    a1[p-1]=x;



    printf("your new array is:\n");
    for(i=0;i<n;i++)
    {
    printf("%d",a1[i]);
    printf("\n");
    }

    printf("enter the position for an element to be deleted:\n");
    scanf("%d",&y);


    for(i=y-1; i<n; i++)
    {
        a1[i]=a1[i+1];
    }


    printf("Your array after deletion is:\n");
    for(i=0;i<n-1;i++)
    {
        printf("%d",a1[i]);
        printf("\n");
    }
}