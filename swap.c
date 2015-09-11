//Program to swap 2 numbers using call by value & call by reference

#include <stdio.h>

void swapCBV(int, int);
void swapCBR(int*, int*);

void swapCBV(int a, int b)
{
int temp;
temp=a;
a=b;
b=temp;
printf ("a= %d ; b= %d \n",a,b);
}

void swapCBR(int* a, int* b)
{
*b=*b-*a;
*a=*a+*b;
*b=*a-*b;
}

int main()
{
int a,b,ch;
printf("Enter numbers to be swapped\n");
scanf("%d %d",&a,&b);
printf("1.Call by value\n2.Call by reference\n");
scanf("%d",&ch);
if (ch==1)
    swapCBV(a,b);
if (ch==2)
    {
    swapCBR(&a,&b);
    printf("a=%d ; b=%d\n",a,b);
    }
}
