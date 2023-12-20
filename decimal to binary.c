//decimal to binary conversion
#include<stdio.h>
int main()
{ 
int bno=0,dno,temp,r,f=1;
printf("enter a decimal no:");
scanf("%d",&dno);
temp=dno;
while(dno!=0)
{
    r=dno%2;
    bno=bno+r*f;
    f=f*10;
    dno=dno/2;
}
printf("binary of %d = %d",temp,bno);
return 0;
}


