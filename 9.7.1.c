#include<stdio.h>
int main()
{
    union udata{ char c[2];short x;}udd;
    udd.x=0x1234;
   printf("%lu\n",sizeof(udd));
   printf("udd.x=%#x\n",udd.x);
   printf("udd.c[0]=%#x,udd.c[1]=%#x\n",udd.c[0],udd.c[1]);
return 0;
}