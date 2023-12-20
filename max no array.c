//max no in array
#include<stdio.h>
int main()
{ 
int a[20],i,z,max=0,n;
printf("enter no :");
scanf("%d",&n);
printf("\nenter no's in array:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);}

for(i=0;i<n;i++)
{
if(max<a[i])
{
max=a[i];
z=i;
}
}
printf("max is a[%d]=%d",z,max);
return 0;
}



