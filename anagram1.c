#include <stdio.h>
#include <string.h>
int main() {
    char a[10],b[10],ctr=0;
    int l1,l2,i,j;
    printf("enter first string:");
    gets(a);
    printf("enter second string:");
    gets(b);
    
    l1=strlen(a);
    l2=strlen(b);
    
    if(l1==l2)
    {
    for(i=0;a[i]!='\0';i++)
    {for(j=0;a[j]!='\0';j++)
    {
    if(a[j]==a[i])
    ctr++;
    }}
        if(l1==ctr)
    printf("anagram");
    else
    printf("not anagram");
        
    }
    else
    printf("string length is not same");

    return 0;
}
