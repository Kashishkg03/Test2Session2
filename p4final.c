#include<stdio.h>
int input()
{
 int n;
  printf("enter the number\n");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n)
{
  int a,b,k,fibo;
  for(a=0,b=1,k=0;k<n;k++)
    {
      if(n==1)
        fibo=0;
      else if(n==2)
        fibo=1;
      else
      {
        fibo=(a+b);
        a=b;
        b=fibo;
      }
    }
  return fibo;
}
void output(int n,int fibo)
{
  printf("the value of the %dth term in the fibonacci series =%d\n",n,fibo);
}
int main()
{
  int n = input() ;
  int fibo = find_fibo(n);
  output(n,fibo);
  return 0;
}
