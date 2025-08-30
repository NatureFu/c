#include<stdio.h>
int main()
{  int a[12]={3,5,8,9,14,17,19,21,23,26,28,32};
int x, i,top,bot,mid,find;
scanf("%d",&x);
top=0;
bot=11;
find=0;
do
{   mid=(top+bot)/2;
    if(x==a[mid])
    {  printf("found:%d,it is a[%d].\n",x,mid);
       find=1;
       break;
    }
else if(x<a[mid])
     bot=mid-1;
     else
     top=mid+1;
} while (top<=bot);
if(!find)
   printf("%d not found.\n",x);
   return 0;
}