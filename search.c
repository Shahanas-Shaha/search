#include<stdio.h>
int main()
{
int a[10],i,n,m,c=0;
printf("enter the size of the array:");
scanf("%d",&n);
printf("enter the element of the array:");
for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
printf("enter the element to search:");
scanf("%d",&m);
for(i=0;i<n;i++)
 {
   if(a[i]==m)
     {
       c=1;
       break;
     }
}
if(c==0)
  printf("not found");
else
  printf("found");
}
