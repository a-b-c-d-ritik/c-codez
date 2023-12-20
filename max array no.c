// find max no in an array
#include <stdio.h>
int fn(int[],int);
int main() {
    int n,max,i,a[20];
    printf("enter no of elements intake");
    scanf("%d",&n);
    printf("\nenter elements ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    max=fn(a,n);
    printf("\nmax no in array=%d",max);
    return 0;
}

int fn(int a[],int n)
{
    int j=1,maxno;
    maxno=a[0];
    while(j<n)
    {
    if(a[j]>maxno)
    maxno=a[j];
    j++;
    }
    return maxno;
}


