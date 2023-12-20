//sq a no using functions without arguments without returns values// takes nothing,returns nothing
#include<stdio.h>
void sq(void);
int main()
{
sq();
return 0;
}

void sq(void)
{ int n,v;
printf("enter a no:");
scanf("%d",&n);
v=n*n;
printf(" square of %d = %d",n,v);
}
