// sum of digits using fn
#include <stdio.h>

int main() {
    int fn(int);
    int n,sum;
    printf("n=");
    scanf("%d",&n);
    sum=fn(n);
    printf("sum of digits=%d",sum);
    return 0;
}
int fn(int n)
{
if (n<10)
return n;
else
return (n%10+fn(n/10));
}
