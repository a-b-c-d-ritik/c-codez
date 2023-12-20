// armstrong using fn
#include <stdio.h>
#include <math.h>
int fn(int);
int main() {
    int n,res;
    printf("enter no :");
    scanf("%d",&n);
    res=fn(n);
    if(res==1)
    printf("\n%d is an armstrong no",n);
    else
    printf("\n%d is not an armstrong no",n);
    return 0;
}

int fn(int n)
{
    int r,fact,ctr=0,arm=0,temp=n;
    while(n>0)
    {
    r=n%10;
    if(r!=0)
    ctr++;
    n=n/10;
    }
    n=temp;
    while(n>0)
    {
    r=n%10;
    arm=arm+pow(r,ctr);
    n=n/10;
    }
    if(temp==arm)
    return 1;
    else
    return 0;
}


