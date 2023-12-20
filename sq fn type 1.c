// sq program using function with arguments and with return values// takes something , returns something
#include <stdio.h>
#include <math.h>
int main() {
    int sq(int);
    int n,res;
    printf("enter a no:");
    scanf("%d",&n);
    res=sq(n);
printf("square of %d = %d",n,res);
    return 0;
}

int sq(int n)
{
int z;
z=pow(n,2);
return z;
}
