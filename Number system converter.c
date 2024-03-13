#include<stdio.h>

void binary(long int decno)
{
    long int bitarray[32],num;
    long int i=0;
    num=decno;
    while(num!=0)
    {
        bitarray[i]=num%2;
        num=num/2;
        i++;
    }
    printf("\nThe Binary conversion of %ld is:\n",decno);
    for(i=i-1;i>=0;i--)
    {
        printf("%ld",bitarray[i]);
    }
}

void octal(long int decno)
{
    long int octarray[32],num;
    long int i=0;
    num=decno;
    while(num!=0)
    {
        octarray[i]=num%8;
        num=num/8;
        i++;
    }
    printf("\nThe Octal conversion of %ld is:\n",decno);
    for(i=i-1;i>=0;i--)
    {
        printf("%ld",octarray[i]);
    }
}

void hexadecimal(long int decno)
{
    long int hexarray[32],num;
    long int i=0;
    num=decno;

    while(num!=0)
    {
        hexarray[i]=num%16;
        num=num/16;
        i++;
    }
    printf("\nThe Hexadecimal conversion of %ld is:\n",decno);
    for(i=i-1;i>=0;i--)
    {
        printf("%ld",hexarray[i]);
    }
}
int main()
{
    TOP:
    int choice;
    long int decno;
    printf("Enter Decimal No:");
    scanf("%ld",&decno);

    printf("\nType of conversions Available:");
   
    printf("\n1. Decimal To Binary");
    printf("\n2. Decimal To octal");
    printf("\n3. Decimal To Hexadecimal");

    printf("\nEnter Type of Conversion:");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        binary(decno);
        break;
        
        case 2:
        octal(decno);
        break;
        
        case 3:
        hexadecimal(decno);
        break;

        default:
        printf("\n invalid choice");
        goto TOP;
    }
    return 0;
}
