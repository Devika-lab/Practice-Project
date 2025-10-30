#include<stdio.h>
#include"main.h"

int main()
{
  int a , b , c,d ,e;
  a = add(2,3);
  printf("The output of Add is %d\n",a);
  b = sub(10,3);
  printf("The output of Sub is %d\n",b);
  c = mul(10,3);
  printf("The output of Mul is %d\n",c);
  d = div(10,2);
  printf("The output of div is %d\n",d);
  e = div(10,2);
  printf("The output of mod is %d\n",e);
}
