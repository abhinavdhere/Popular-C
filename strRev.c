#include <stdio.h>
#include <string.h>
//Program to reverse a given string

int main()
{
char given[100];
int i,n;
gets(given); //note that GCC gives the warning that gets is dangerous as it may cause buffer overflow. However, since here
            // size of string is not known in advance, I have used gets instead of fgets.
n=strlen(given);
for (i=n-1;i>=0;i--)
{
printf("%c",given[i]);
}
printf("\n");
}
