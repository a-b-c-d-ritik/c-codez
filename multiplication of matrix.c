// multiplication of 2 matrix
#include <stdio.h>

int main() {
  int a[2][2],b[2][2],sum[2][2],i,j,k;
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
    
    //multiplication logic
    for(i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
    {
    sum[i][j]=0;
    for(k=0;k<2;k++)
    {
    sum[i][j]=sum[i][j]+a[i][k]*b[k][j];
    }
    }
    }
    
    //printing multiplication
    
    printf("\nmatrix multiplication result\n");
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
