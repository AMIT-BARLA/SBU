// program to print row major and colum major
#include <stdio.h>

void main()
{
    int arr[3][4] = {{1, 2, 3, 10}, {4, 5, 6, 20}, {7, 8, 9, 30}};
    printf("Elements of 2D-Array\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("printing the row major.\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("printing the column major.\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
}