#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int item[10];
    int top;
};

void initialize(struct Stack *stack)
{
    for (int i = 0; i < 10; i++)
    {
        stack->item[i] = 0;
    }
    stack->top = 10;
}
int isFull(struct Stack *stack)
{
    if (stack->top == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty(struct Stack *stack)
{
    if (stack->top == 10)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct Stack *stack, int key)
{
    if (isFull(stack))
    {
        printf("\nStack overflow!,Elements can't be pushed.\n\n");
        return;
    }
    else
    {
        stack->item[--stack->top] = key;
        printf("\nElement pushed: %d.\n\n", stack->item[stack->top]);
    }
}
void print(struct Stack *stack)
{
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", stack->item[i]);
    }
    printf("\n\n");
}
void pop(struct Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("\nStack underflow!,Elements cannot be popped.\n\n");
        return;
    }
    else
    {
        int value = stack->item[stack->top];
        printf("\nPopped: %d\n\n", stack->item[stack->top]);
        stack->item[stack->top] = 0;
        ++stack->top;
    }
}
int main(void)
{
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
    printf("\n");
    initialize(stack);

    while (1)
    {
        int value;
        int key;
        printf("****Menu****\npress 1 for push\npress 2 for pop\npress 3 for print\npress 4 for exit\nEnter Value: ");
        scanf("%d", &value);

        if (value == 1)
        {
            printf("\nEnter the value to be pushed: ");
            scanf("%d", &key);
            push(stack, key);
        }
        else if (value == 2)
        {
            pop(stack);
        }
        else if (value == 3)
        {
            print(stack);
        }
        else if (value == 4)
        {
            break;
        }
        else
        {
            printf("Wrong input.\n");
        }
    }

    return 0;
}