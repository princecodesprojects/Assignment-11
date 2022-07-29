#include<stdio.h>
#include<conio.h>
int HCFOf2Number(int x,int y);
int main()
{
    int a,b;
    printf("Enter two number\n");
    scanf("%d%d",&a,&b);
    int lcm=HCFOf2Number(a,b);
    printf("HCF of %d and %d is %d",a,b,a*b/lcm);
     return 0;
}

int HCFOf2Number(int x,int y)
{
    int i,lcm;
    for( i=x;i<=50;i++)
    {
        if(x%i==0 && y%i==0)
        {
        return i;
        }
    }
    printf("%d ",lcm);

}