//decimal to binary conversion using function
#include<stdio.h>
int main()
{ 
int z,dno;
printf("enter a decimal no:");
scanf("%d",&dno);
z=bin(dno);
printf("binary of %d = %d",dno,z);
return 0;
}
int bin(int d) //d=dno pass hoga
{
int bno=0,r,f=1;
while(d!=0)
{
    r=d%2;
    bno=bno+r*f;
    f=f*10;
    d=d/2;
}
return bno;
}


