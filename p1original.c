#include <stdio.h>
#include <math.h>
void input(float *x1, float *y1, float *x2, float *y2)
{
  printf("enter the value:\n");
  scanf("%f%f%f%f",x1,y1,x2,y2);
}

void distance(float x1, float y1, float x2, float y2, float *area)
{
  *area=((x2-x1)*(x2-x1)-(y2-y1)*(y2-y1));
}

void output(float x1, float y1,float x2, float y2, float area)
{
  printf("The distance betwwen two points (%f%f) and (%f%f) is %f:\n",x1,y1,x2,y2,area);
}

int main()
{
  float a1,b1,a2,b2,area;
  input(&a1,&b1,&a2,&b2);
  distance(a1,b1,a2,b2,&area);
  output(a1,b1,a2,b2,area);
  return 0;
}
