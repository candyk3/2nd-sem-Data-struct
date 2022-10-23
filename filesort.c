#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

int i;

void read(int A[], int *x)
{
    FILE *fp = fopen("somenumbers.txt","r");
    if(fp==NULL)
    int i=0;
    while(!feof(fp))
    {
        fscanf(fp,"%d,",&A[i]);
        *x=*x+1;
        i++;
    }

    fclose(fp);
}

void display(int A[], int n)
{
    for(i=0;i<n;i++)
        printf("%d\t",A[i]);
        printf("\n");
}

void selection_sort(int A[], int n )
{
    int j,i,minindex;
    for(j=0;j<n;j++)
    {
        minindex=j;
        {
            for(i=j+1;i<n;i++)
            {
                if (A[i]<A[minindex])
                    minindex=i;
            }
            swap(&A[minindex],&A[j]);
        }
    }
}

void swap(int *x, int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}


int main()
{
    int A[MAX];
    int count=0;
    read(A,&count);
    display(A,count);
    selection_sort(A,count);
    display(A,count);

    return 0;
}
