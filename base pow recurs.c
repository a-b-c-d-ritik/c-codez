//base^power using recursion
#include <stdio.h>
#include <math.h>
int main() {
    int fn(int,int);
    int b,p,res;
    printf("base=");
    scanf("%d",&b);
    printf("power=");
    scanf("%d",&p);
    res=fn(b,p);
    printf("%d^%d=%d",b,p,res);
    return 0;
}
int fn(int b,int p)
{
if(p==1)
return b;
else
return (b*fn(b,p-1));
}
