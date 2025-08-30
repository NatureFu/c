#include<stdio.h>
int main()
{   int a[3][4]={2,5,7,9,6,14,20,8,15,0,12,3},b[4][3],i,j;
  printf("数组a:\n");
  for(i=0;i<3;i++)
  {   for(j=0;j<4;j++)
       printf("%-4d",a[i][j]);
     printf("\n");
  }
for(i=0;i<4;i++)
   for(j=0;j<3;j++)
  b[i][j]=a[j][i];
  printf("数组b:\n");
 for(i=0;i<4;i++)
  {   for(j=0;j<3;j++)
       printf("%-4d",b[i][j]);
     printf("\n");
}
    return 0;
}