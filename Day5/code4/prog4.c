#include <stdio.h>

int sumOfNaturalNumber(int number)
{
    if (number == 1)
    {
        return 1;
    }
    return number + sumOfNaturalNumber(number - 1);
}

int main(void)
{
    int number;
    printf("Enter the number to find the sum of natural numbers: ");
    scanf("%d", &number);
    printf("\nSum of first %d natural numbers is %d.", number, sumOfNaturalNumber(number));
    return 0;
}