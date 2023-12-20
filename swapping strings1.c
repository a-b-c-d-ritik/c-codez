// string swapping without string fn
#include <stdio.h>

int main() {
    char a[10],b[10],c[10];
    int i;
    
    printf("enter first string:");
    gets(a);
    printf("enter second string:");
    gets(b);
    
    for(i=0;b[i]!='\0';i++)
    {
    c[i]=a[i];
    a[i]=b[i];
    b[i]=c[i];
    }
    puts(a);
    puts(b);
    return 0;
}
