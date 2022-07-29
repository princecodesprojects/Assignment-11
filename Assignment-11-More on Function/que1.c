#include<stdio.h>
#include<conio.h>
int lcmOf2Number(int x,int y);
int main()
{
    int a,b;
    printf("Enter two number\n");
    scanf("%d%d",&a,&b);
    printf("LCM of %d and %d is %d",a,b,lcmOf2Number(a,b));
     return 0;
}

int lcmOf2Number(int x,int y)
{
    for(int i=x;i<=50;i++)
    {
        if(x%i==0 && y%i==0)
        {
          return i;
        }
    }
}