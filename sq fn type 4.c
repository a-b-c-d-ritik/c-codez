//function with arguments without return values//takes something returns nothing
#include<stdio.h>
void sq(int);
int main()
{
int n;
printf("enter a no:");
scanf("%d",&n);
sq(n);
return 0;
}

void sq(int n)
{ int v;
v=n*n;
printf(" square of %d = %d",n,v);
}
