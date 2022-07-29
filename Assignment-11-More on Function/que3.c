#include<stdio.h>
#include<conio.h>
int primeNumber(int n);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d,&n");
    int x=primeNumber( n);
    printf("%d",x);
    if(x)
    printf("%d is prime number\n");
    else
    printf("%d is not prime number\n");
    return 0;
}

int primeNumber(int n)
{
    int i;
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            break;
        }
    }
    if(i==n)
    {
        return 1;
    }
}