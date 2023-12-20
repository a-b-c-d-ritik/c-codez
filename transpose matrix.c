// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int a[2][2],i,j;
   printf("enter elements in matrix:");
    for(i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
    scanf("%d",&a[i][j]);
    }
    
  // matrix printing
    printf("\n entered matrix\n");
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
 
    printf("\ntransposed matrix\n");
    for(j=0;j<2;j++)
    {
        printf("[");
    for(i=0;i<2;i++)
    {
    printf(" %d ",a[i][j]);
    }
    printf("]");
    printf("\n");
    }

    return 0;
}
