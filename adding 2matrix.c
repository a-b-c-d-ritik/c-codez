// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int a[2][2],b[2][2],sum[2][2],i,j;
   printf("enter elements in first matrix:");
    for(i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
    scanf("%d",&a[i][j]);
    }
    
    printf("enter elements in second matrix:");
    for(i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
    scanf("%d",&b[i][j]);
    }
    //first matrix printing
    printf("\nfirst matrix\n");
    for(i=0;i<2;i++)
    {
        printf("[");
    for(j=0;j<2;j++)
    {
    printf(" %d ",a[i][j]);
    }
    printf("]");
    printf("\n");
    }
    //second matrix printing
    printf("\nsecond matrix\n");
    for(i=0;i<2;i++)
    {
        printf("[");
    for(j=0;j<2;j++)
    {
    printf(" %d ",a[i][j]);
    }
    printf("]");
    printf("\n");
    }
    
    //sum
    for(i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
    sum[i][j]=a[i][j]+b[i][j];
    }
    
    //printing sum
    
    printf("\nsum matrix");
    for(i=0;i<2;i++)
    {
        printf("[");
    for(j=0;j<2;j++)
    {
    printf(" %d ",sum[i][j]);
    }
    printf("]");
    printf("\n");
    }

    return 0;
}
