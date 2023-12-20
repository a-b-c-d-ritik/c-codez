// prime no using fn
#include <stdio.h>
int fn(int);
int main() {
    int num,res;
    printf("enter a no:");
    scanf("%d",&num);
    res=fn(num);
    if(res==0)
    printf("%d is prime",num);
    else
    printf("%d is not prime",num);
    return 0;
}
// logic- no 1 or khudse divisible h or n/2 se upr wale se divisible hoga nhi so 2 se leke n/2 m factor check kro//

int fn(int num)
{
int ctr=0,i=2;
while(i<=num/2)
{
if(num%i==0)
ctr++;
i++;
}
return ctr;
}
