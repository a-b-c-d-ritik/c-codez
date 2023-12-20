// string swapping using string fn
#include <stdio.h>
#include <string.h>
int main() {
    char a[10],b[10],c[10];
    int i;
    printf("enter first string:");
    gets(a);
    printf("enter second string:");
    gets(b);
    strcpy(c,a);
    strcpy(a,b);
    strcpy(b,c);
    puts(a);
    puts(b);
    return 0;
}
