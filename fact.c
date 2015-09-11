//Factorial calculation by iteration and recursion

#include <stdio.h>

//function declarations
void factIter(int);
int factRec(int);

//function definitions
void factIter(int n)
{
int i=1,ans=1;
for (;i<=n;i++)
    {
    ans=ans*i;
    }
printf("Factorial of %d is %d.\n",n,ans);
}

int factRec(int n)
{
    if (n==0 || n==1)
    return 1;
else
    return n*(factRec(n-1));
}

//main
int main()
{
int n;
char ch;
printf("Enter number\n");
scanf("%d",&n);
printf("Recursive or Iterative?(r/i)\n");
scanf(" %c",&ch); //note that the space before %c is to make it ignore whitespaces
if (ch=='i')
    factIter(n);
else if (ch=='r')
    printf("Factorial of %d is %d.\n",n,factRec(n));
}
