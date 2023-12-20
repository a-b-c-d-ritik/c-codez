// swapping using function(call by reference)
#include <stdio.h>
void swap(int*,int*);
int main() {
    int a=45,b=80;
    printf("Before swapping a=%d\tb=%d",a,b);
    swap(&a,&b);
    printf("\nAfter swapping a=%d\tb=%d",a,b);
    return 0;
}
void swap(int *a,int *b)
{
int c;
c=*a;
*a=*b;
*b=c;
}
