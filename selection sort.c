//descending order by sort

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
    for(i=z+1;i<n;i++)
    {
    if(a[i]<a[z])
    {
    a[z]=a[z]+a[i];
    a[i]=a[z]-a[i];//swapping logic
    a[z]=a[z]-a[i];
    }
    }
    }
    printf("\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    
    return 0;
}
