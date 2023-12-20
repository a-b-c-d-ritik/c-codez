//sq a no using functions without arguments with returns values// takes nothing,returns something
#include<stdio.h>
#include<math.h>
int sq(void);
int main()
{
int r;
r=sq();
printf("square=%d",r);
return 0;
}

int sq()
{ int n,v;
printf("enter a no:");
scanf("%d",&n);
v=pow(n,2);
return v;
}

