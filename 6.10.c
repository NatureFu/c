#include<stdio.h>
int main()
{  int a[6]={1,3,5,7,9},i,n;
printf("插入前的数组:");
for(i=0;i<5;i++)
   printf("%3d",a[i]);
   printf("\n请插入要插入的数:");
   scanf("%d",&n);
   for(i=4;i>=0;i--)
   if(a[i]<n)
   {  a[i+1]=n;
      break;
   }
   else
       a[i+1]=a[i];
       if(i<0)
       a[0]=n;
   printf("插入以后的数组:");
   for(i=0;i<6;i++)
   printf("%5d",a[i]);
   printf("\n");
   return 0;
}