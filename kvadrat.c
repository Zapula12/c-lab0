#include <stdio.h>
#include <math.h>
#include <stdlib.h>



float f(int a, int b, int c)  
{
  double d,x1,x2;
  d =(b*b)-4*a*c;
  if (d>0)
  {
    x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);
    printf("x1=%f",x1);
    printf("x2=%f",x2);
  }
  if(d<0)
  {
    printf("net korney");
  }
  if(d==0)
  {
    x1=(-b)/(2*a);
    printf("x1=%f",x1);
  }
}

int main()
{
  int a,b,c;
  scan (&a,&b,&c);
  f(a,b,c);
  return 0;
}