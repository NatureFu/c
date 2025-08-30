#include<stdio.h>
int main()
{ 
    int i,j;
int row=0,colum=0;
int a[][4]={{11,9,33,4},{23,42,53,7},{15,6,37,8}};
int max=a[0][0];
printf("数组:\n");
for(i=0;i<3;i++)
{ for(j=0;j<4;j++)
     printf("%-4d",a[i][j]);
      printf("\n");
}
for(i=0;i<3;i++)
{ for(j=0;j<4;j++)
 if(a[i][j]>max)
 {max=a[i][j];
row=i;
colum=j;
 }
 }
printf("最大元素为：%d,行号:%d,列号:%d\n",max,row,colum);
return 0;

}