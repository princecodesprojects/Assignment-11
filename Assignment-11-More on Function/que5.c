#include<stdio.h>
#include<conio.h>
void primeNumbers(int n);
int main()
{
    int n;
    printf("How many prime numbers you want to printf\n");
    scanf("%d",&n);
    primeNumbers(n);
    return 0;
}

void primeNumbers(int n)
{
    int i,x=2;
    while(n)
    {
        for(i=2;i<x;i++)
        {
            if(x%i==0)
            {
                break;
            }

        }
        if(i==x)
        {
            printf("%d\n",x);
        }
        else{
            n=n+1;
        }
        n--;
        x++;
        i=2;
    }
}