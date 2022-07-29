#include<stdio.h>
#include<conio.h>

int fact(int n)
{
    int factorial=1,i;
    for(i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    return factorial;
}

int main()
{
    int i,sum=0;
    for(i=1;i<=5;i++)
    {
      sum=sum+fact(i)/i;
    }
    printf("%d",sum);
    return 0;
}