#include <stdio.h>
#include <stdlib.h>
#define MAX 30

void swap(int *x, int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}

void read(int A[])
{
    FILE *fp = fopen("somenumbers.txt","r");
    int i;
    if(fp==NULL)
    i=0;
    while(!feof(fp))
    {
        fscanf(fp,"%d,",&A[i]);
        
        i++;
    }

    fclose(fp);
}

int partition(int A[], int l, int r)
{
    int pivot= A[r];
    int i=l-1;
    int j;


    for(j=l;j<r;j++)
    {
        if (A[j]<pivot)
        {
            i++;
            swap(&A[i],&A[j]);
        }
    }

    swap(&A[i+1],&A[r]);

    return(i+1);
}



void quicksort(int A[], int l, int r)
{
    int i;
    if(l<r)
    {
        i=partition(A,l,r);

        quicksort(A,l,i-1);

        quicksort(A,i+1,r);
    }

}

void display(int A[], int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d\t",A[i]);
        printf("\n");
}

int main()
{
     int n=10;
     int A[n];
    
     read(A);
     display(A, n);
     quicksort(A, 0, n-1);
     display(A,n);

}

   


