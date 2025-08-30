#include<stdio.h>
void judge(int b[],int n)
{ int i,j,k,temp;
for(i=0,j=n-1;i<j;)
{   if(b[i]%2!=0) 
{     temp=b[i];
    for(k=i;k<j;k++)
    b[k]=b[k+1];
    b[j]=temp;
    j--;
}
else
    i++;
   }
}
int main()
    { int a[10]={21, 34, 224, 25, 367, 41, 736, 37, 42, 456},i;
for(i=0;i<10;i++)
printf("%d",a[i]);
judge(a,10);
printf(" \n");
for(i=0;i<10;i++)
   printf("%d",a[i]);
return 0;
    }

