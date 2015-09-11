// Program to check if a string is a pallindrome 

#include <stdio.h>
#include <string.h>

int main()
{
int a,b,n,flag=1;
char s1[100],s2[100],s3[100];
gets(s1);
n=strlen(s1);
gets(s2);
for (a=n-1,b=0;a>=0;a--,b++)
{
if (s2[b]!=s1[a])
    {
    flag=0;
    break;
    }
}
if (flag)
    printf("Pallindrome");
else
    printf("Not a pallindrome");
}
