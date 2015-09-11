//Fibonacci series by iteration and recursion

#include <stdio.h>

//function declarations
void fiboIter(int);
int fiboRec(int);

//function definitions
void fiboIter(int n)
{
int i=0,b=0,c=1,d;
printf("\n0\n1\n");
for (;i<n-2;i++)
    {
    d=c+b;
    printf("%d\n",d);
    b=c;
    c=d;
    }
}

int fiboRec(int n)
{
if (n==0)
    return 0;
if (n==1)
    return 1;
else
    return (fiboRec(n-1)+fiboRec(n-2));
}

//main
int main()
{
int n;
char ch;
printf("Enter number of terms\n");
scanf("%d",&n);
printf("Recursive or Iterative?(r/i)\n");
scanf(" %c",&ch); //note that the space before %c is to make it ignore whitespaces
if (ch=='i')
    fiboIter(n);
else if (ch=='r')
{
int i=0;
for (;i<n;i++)
    printf("\n%d\n",fiboRec(i));
}
}
