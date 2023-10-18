#include <stdio.h>

struct Stack
{
    int arr[10];
    int top;
};

void initialize(struct Stack *stack)
{
    for (int i = 0; i < 10; i++)
    {
        stack->arr[i] = 0;
    }
    stack->top = 9;
}

int main(void)
{
    struct Stack *stack;
    stack = (struct Stack *)malloc(sizeof(struct Stack *));
    int number;
    printf("Enter the decimal number to be converted to binary: ");
    scanf("%d", &number);
    initialize(stack);
    while (number != 0)
    {
        stack->arr[stack->top--] = number % 2;
        number /= 2;
    }
    printf("The Binary number is ");
    for (int i = stack->top + 1; i < 10; i++)
    {
        printf("%d ", stack->arr[i]);
    }
    return 0;
}