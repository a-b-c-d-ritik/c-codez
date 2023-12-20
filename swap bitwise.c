// swapping using bitwise operator
#include <stdio.h>

int main() {
    int a,b;
    printf("enter frst no:");
    scanf("%d",&a);
    printf("enter second no:");
    scanf("%d",&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("a=%d\tb=%d",a,b);
    return 0;
}

