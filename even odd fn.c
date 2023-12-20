//even odd checker using function
#include<stdio.h>
void eo(int);
int main()
{ int n;
printf("enter a no:");
scanf("%d",&n);
eo(n);
return 0;
}

void eo(int n)
{if (n%2==0)
printf("%d is even",n);
else
printf("%d is odd",n);
}

