#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0;
    char ch[]="this is a string.",c;
    puts(ch);
printf("请输入一个字符:");
c=getchar();
for(i=0;ch[i]!='\0';i++)
if(ch[i]!=c) ch[j++]=ch[i];
ch[j]='\0';
printf("%s\n",ch);
return 0;
}