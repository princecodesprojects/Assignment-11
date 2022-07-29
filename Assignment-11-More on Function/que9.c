#include<stdio.h>
#include<conio.h>
void squareOfNumbers(int n);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    squareOfNumbers( n);
    return 0;
}


void squareOfNumbers(int n)
{
    printf("Square of %d is %d",n,n*n);
} 