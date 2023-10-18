#include <stdio.h>

int fibonacciSeries(int number)
{
    if (number <= 1)
    {
        return number;
    }
    return fibonacciSeries(number - 1) + fibonacciSeries(number - 2);
}

int main(void)
{
    int number;
    printf("Enter the number to find the Fibonacci series: ");
    scanf("%d", &number);
    printf("Printing the Fibonacci Series.\n");
    for (int i = 0; i <= number; i++)
    {
        printf("%d ", fibonacciSeries(i));
    }
    printf("\nFibonacci series of f(%d) is %d", number, fibonacciSeries(number));

    return 0;
}