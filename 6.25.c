#include<stdio.h>
#include<string.h>
int main()
{
char c1[]="12345",c2[]="12345";
printf("%d\n",strcmp(c1,c2));
printf("%d\n",strcmp("zhang","zhao"));
printf("%d\n",strcmp("zhao","zhang"));
return 0;
}