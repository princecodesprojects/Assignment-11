#include<stdio.h>
#include<conio.h>
void primeBetween(int a,int b);
int main()
{
    int a,b;
    printf("Enter the number between which you want to print prime numbers\n");
    scanf("%d%d",&a,&b);
    primeBetween(a, b);
    return 0;
}

void primeBetween(int a,int b)
{
    int i;
    a++;
    while(a<b)
    {
    for(i=2;i<=a-1;i++)
    {
        if(a%i==0)
       {
        break;
       }
    }
    if(i==a)
    printf("%d ",a);
    a++;
    }
    
}