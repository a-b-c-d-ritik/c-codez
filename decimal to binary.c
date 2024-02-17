#include<stdio.h>

int main()
{
    int bitarray[32];
    int num,i=0;
    printf("enter decimal no:");
    scanf("%d",&num);

    while(num!=0)
    {
        bitarray[i]=num%2;
        num=num/2;
        i++;
    }
    printf("\n");
    for(i=i-1;i>=0;i--)
    {
        printf("%d",bitarray[i]);
    }


    return 0;
}