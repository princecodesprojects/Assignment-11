#include<stdio.h>
#include<conio.h>
void fibonacciTerm(int n);
int main()
{
    int n;
    printf("How many terms of fibonacci series you want to print\n");
    scanf("%d",&n);
    fibonacciTerm(n);
    return 0;
}

void fibonacciTerm(int n)
{
    int a=-1,b=1,sum=0;
    while(n)
    {
      sum=a+b;
      printf("%d ",sum);
      a=b;
      b=sum;
      n--;
    }
}