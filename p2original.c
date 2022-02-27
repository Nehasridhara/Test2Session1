#include <stdio.h>
#include <math.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("enter trinangle 1");
  scanf("%f",x1);
  scanf("%f",y1);

  printf("enter trinangle 2");
  scanf("%f",x2);
  scanf("%f",y2);

  printf("enter trinangle 3");
  scanf("%f",x3);
  scanf("%f",y3);
}

int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  int x;
  int s=x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);

  if(s==0)
  {
    x=1;
  }
  else
  {
    x=0;
  }
  return x;
}

void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle)
{
  if(istriangle==0)
  {
    printf("not tringle");
  }
  else
  {
    printf(" triangle");
  }
}

int main()
{
  float  x1,  y1,  x2,  y2, x3,  y3;
  int istriangle;
  input_triangle( &x1, &y1, &x2, &y2, &x3, &y3);
  istriangle=is_triangle(x1,y1,x2,y2,x3,y3);
  output( x1,  y1,  x2,  y2, x3,  y3,  istriangle);
}