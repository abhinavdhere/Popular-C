/*Makes the following pyramids:
1.          2.           3.         4. Pascal's triangle:   5. Floyd's triangle:
   1           1           *               1                    1
  2 2         2 3         * *             1 1                   2 3
 3 3 3       4 5 6       * * *           1 2 1                  4 5 6
4 4 4 4     7 8 9 10    * * * *         1 3 3 1                 7 8 9 10        */

#include <stdio.h>

void makePyr1(int);
void makePye2(int);
void makePyr3(int);
void makePascal(int);
void makeFloyd(int);
long fact(int);

void makePyr1(int n)
{
int i=1,j;
while (i<=n)
{
for (j=n-i;j>=0;j--)
    printf(" ");
for (j=1;j<=i;j++)
    printf("%d ",i);
printf("\n");
i++;
}
}

void makePyr2(int n)
{
int i=1,j,k=1;
while(i<=n)
{
for (j=n-i;j>=0;j--)
    printf(" ");
for (j=1;j<=i;j++)
    {
    printf("%d ",k);
    k++;
    }
printf("\n");
i++;
}
}

void makePyr3(int n)
{
int i=1,j;
while (i<=n)
{
for (j=n-i;j>=0;j--)
    printf(" ");
for (j=1;j<=i;j++)
    printf("* ");
printf("\n");
i++;
}
}

void makePascal(int n)
{
int i=0,j;
while (i<n)
{
for (j=n-i;j>=0;j--)
    printf(" ");
for (j=0;j<=i;j++)
    printf("%ld ",fact(i)/(fact(j)*fact(i-j)));
printf("\n");
i++;    
}
}

void makeFloyd(int n)
{
int i=1,j,k=1;
while (i<=n)
{
for (j=0;j<i;j++)
    {
    printf("%d ",k);
    k++;
    }
printf("\n");
i++;
}
}

long fact(n)
{
if (n==0 || n==1)
    return 1;
else
    return n*fact(n-1);
}

int main()
{
int n;
scanf("%d",&n);
makePyr1(n);
makePyr2(n);
makePyr3(n);
makePascal(n);
makeFloyd(n);
return 0;
}
