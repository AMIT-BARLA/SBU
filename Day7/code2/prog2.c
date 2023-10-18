#include<stdio.h>
#include<stdlib.h>

int fibonacciSeries(int number)
{
    if (number <= 1)
    {
        return number;
    }

    return fibonacciSeries(number-1) + fibonacciSeries(number-2);
}

int main(void)
{
    int number;
    printf("Enter the number for Fibonacci Series: ");
    scanf("%d",&number);
    printf("\n");
    printf("****Fibonacci Series with index****\n");
    for(int i =1; i <= number; i++)
    {
        printf("\t%.2d  =  %.2d\n",i,fibonacciSeries(i));
    }
    return 0;
}
