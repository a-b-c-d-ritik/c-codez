// no of space,vowel and constant calculator
#include <stdio.h>
#include <string.h>
int main() {
    char a[50];
    int i,ctr=0,v=0,c=0,t=0;
    printf("enter a string:");
    gets(a);
    t=strlen(a);
    for(i=0;a[i]!='\0';i++)
    {
    if(a[i]==' ')
    ctr++;
    if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
    v++;
    }
    printf("\nno of words:%d",ctr+1);
    printf("\nno of spaces used:%d",ctr);
    printf("\nno of vowels:%d",v);
    printf("\nno of consonants:%d",(t-v-ctr));
    return 0;
}
