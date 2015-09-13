//Implement linear search recursively and iteratively

#include <stdio.h>

//function declarations
int lsIter(int*,int,int);
int lsRecur(int*,int,int);

//function definitions
int lsRecur(int* list,int res, int n) //recursive linear search
{
static int i=1;                       //static variable is not lost after control goes out of function
//printf("%p %d %d\n",list,*list,res); //for debugging, shows the flow of the function
if (res==(*list))                       //match found
    return 1;
if (i>n)                                //indicates end of array
    return 0;
else
    {
    i++;                                //increment count for index of array
    return lsRecur(list+1,res,n);       //call function for next value in array
    }
}

int lsIter(int* list, int res, int n)   //iterative linear search
{
int i,flag=0;                           //flag indicates whether term found. 0 if not found.
for (i=0;i<n;i++)
    {
    if (list[i]==res)
        {        
        flag=1;                         //flag=1 indicates that term found
        break;
        }
    }
return flag;
}
  
main()
{
int i,n,res;
printf("Length of list?");
scanf("%d",&n);
int list[n];
for (i=0;i<n;i++)
    scanf("%d",&list[i]);
printf("What would you like to search?\n");
scanf("%d",&res);

if (lsIter(&list[0],res,n))             //call iterative search
printf("Iterative: Number is in list\n");
else
printf("Iterative: Number is not in list\n");

if (lsRecur(&list[0],res,n))            //call recursive search
    printf("Recursive: Number is in list\n");
else
    printf("Recursive: Number is not in list\n");
}

