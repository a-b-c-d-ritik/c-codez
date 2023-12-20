//descending order by bubble sort

#include <stdio.h>

int main() {
    int a[20],n,i,z;
    printf("enter no:");
    scanf("%d",&n);
    printf("enter elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    for(z=0;z<n;z++)
    {
    for(i=0;i<n;i++)
    {
    if(a[i]<a[i+1])
    {
    a[i]=a[i]+a[i+1];
    a[i+1]=a[i]-a[i+1];//swapping logic
    a[i]=a[i]-a[i+1];
    }
    }
    }
    printf("\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    
    return 0;
}
