#include<stdio.h>
void input(int a[],int n);
void choose(int a[],int n);
void print(int a[],int n);
int main(void)
{ int n,a[10];
 printf("输入变量n的值:(n<=10):");
scanf("%d",&n);
printf("输入%d个数组元素:",n);
print(a,n);
printf("\n");
return 0;
}
void input(int a[],int n)
{ int i;
for(i=0;i<n;i++)
scanf("%d",&a[i]);
}
void choose(int a[],int n)
{  int i,j,k,t; 
for(i=0;i<n-1;i++)
   {  k=i;
for(j=i+1;j<n-1;j++)
    if(a[j]<a[k])k=j;
 t=a[i],a[i]=a[k],a[k]=t;
   }
}
void print(int a[],int n)
{  int i;
  for(i=0;i<n;i++)
  printf("%3d",a[i]);
}