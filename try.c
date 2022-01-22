#include <stdio.h>
int main()
{
int a[10][10];
int i,j,m,n,sum;
printf("enter the order of the matrix\n");
scanf("%d%d",&m,&n);
printf("enter the elements of the first matrix\n");
for (i=0;i<m;i++)
{
 for (j=0;j<n;j++)
 {
  scanf("%d",&a[i][j]);
  }
 printf("\n");
}
for (i=0;i<m;i++)
{
 sum=0;
 for (j=0;j<n;j++)
 { 
  sum=sum+a[i][j];
 }
 printf("the sum of %d row  is %d\n",(i+1),sum);
}
for (j=0;j<n;j++)
 {
  sum=0;
  for (i=0;i<m;i++)
  {
   sum=sum+a[i][j];
  }
  printf("the sum of %d column is %d\n",(j+1),sum);

}
return 0;
}
  
