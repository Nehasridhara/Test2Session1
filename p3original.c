#include <stdio.h>
#include <math.h>

int input_number()
{
  int x;
  printf("enter number");
  scanf("%d",&x);
  return x;
}

int is_prime(int n)
{
 int x=0;
  for(int i=2;i<n/2;i++)
    {
      if(n%i!=0)
      {
        x=1;
        break;
      }
    }
  return x;
}


void output(int n, int isprime)
{
  if(isprime==1)
  {
    printf("composite");
  }
  else
    {
    printf("prime");
  }

}
  
int main()
{
 int n, isprime;
 input_number();
 isprime=is_prime( n);
 output( n, isprime);
}