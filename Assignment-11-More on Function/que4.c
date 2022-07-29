#include<stdio.h>
#include<conio.h>
int nextPrimeNumber(int n);
int main()
{
    int n;
    printf("Enter any number of which you want next prime number\n");
    scanf("%d",&n);
    printf("Next prime number of %d is %d",n,nextPrimeNumber(n));
    return 0;
}

int nextPrimeNumber(int n)
{
    int s,i;
     s=n+1;
     while(1)
     {
         for(i=2;i<=s-1;i++)
         {
           if(s%i==0)
            {
                break;
            }
          }

        if(i==s)
         {
           return s;
          }
           s++;
     }
}
