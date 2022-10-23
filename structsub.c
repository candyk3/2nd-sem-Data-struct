#include<stdio.h>
#include<stdlib.h>

struct subject
{
    char sub[50];
    int code;
};
int main()
{
 struct subject *data;
 int n,i;

 printf("enter number of subjects\n");
 scanf("%d",&n);

 data= (struct subject *)malloc(n*sizeof(struct subject));


 for(i=1;i<=n;++i)
 {
  printf("Enter subject and code:\n");
  scanf("%s %d",(data+i)->sub,&(data+i)->code);
 }

 printf("Your data stored is:\n");
 for (i=1;i<=n;++i)
 {
  printf("%s\t%d\n ",(data+i)->sub, (data+i)->code);
 }
 free(data);
 return 0;
}