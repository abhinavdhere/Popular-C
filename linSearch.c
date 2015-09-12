//Implement linear search recursively and iteratively

#include <stdio.h>

int lsIter(int*,int,int);

int lsIter(int* list, int res, int n)
{
int i,flag=0;
for (i=0;i<n;i++)
    {
    if (list[i]==res)
        {        
        flag=1;
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
if (lsIter(&list[0],res,n))
    printf("Number is in list\n");
else
    printf("Number is not in list\n");
}
