#include <stdio.h>
int add(int x, int my_array[]);

int main()
{
    int my_array[100];
    int n, sum,i;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter the elements in the array\n");
    for(i=0;i<n;i++)
    { 
        scanf("%d",&my_array[i]);
    }
    sum= add(n,my_array);
    printf("the sum of elements in the array is %d",sum);
    return 0;
}
 
int add(int x, int my_array1[])
{
 if(x<0)
 {
   return 0;
 }
 else
 {
     return(my_array1[x-1]+add(x-1,my_array1));
 }

}


 