// structure
#include <stdio.h>
struct student 
{
char name[50];
int roll;
float per;
};
struct student s[50];
int main() 
{
    int i,n;
    printf("enter no of students:");
    scanf("%d",&n);
    fflush(stdin);
    for(i=0;i<n;i++)
    {
    printf("%d.enter name:",i+1);
    scanf("%s",&s[i].name);
    printf("\nenter roll:");
    scanf("%d",&s[i].roll);
    printf("\nenter percentage:");
    scanf("%f",&s[i].per);
    }
    printf("s.No\tName\tRoll No\tPercentage\n");
    
    for(i=0;i<n;i++)
    {
    printf("%d\t\t%s",i+1,s[i].name);
    printf("\t\t%d",s[i].roll);
    printf("\t\t%f\n",s[i].per);
    }
    return 0;
}

