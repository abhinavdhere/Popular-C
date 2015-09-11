//Program to reverse a number

#include <stdio.h>

int main()
{
int num,k,res=0;
printf ("Enter number\n");
scanf("%d",&num);
while (num!=0)
{
k=num%10;
res=res*10+k;
num=num/10;
}
printf("Reversed num is %d\n",res);
}
