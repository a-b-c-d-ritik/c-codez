// fibonacii series using recursion
#include <stdio.h>
void fn(int);
int main() {
    int n;
    printf("n=");
    scanf("%d",&n);
    fn(n);
    return 0;
}
void fn(int n)
{
static int i,a=0,b=1;
if(n>0)
{
a=a+b;
b=a-b;
printf("%d\t",b);
fn(n-1);
}
}
