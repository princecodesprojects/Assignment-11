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

int comb(int n,int r)
{
    int com=fact(n);
    int nr=fact(r)*fact(n-r);
    int combination=com/nr;
    return combination;;
}

void pascal(int n)
{
    int i,j;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d ",comb(i,j));
        }
        printf("\n");
    }
}

int main()
{
   pascal(5);
    return 0;
}