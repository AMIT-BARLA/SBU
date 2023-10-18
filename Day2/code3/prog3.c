#include <stdio.h>
// demostrating call by vallue and call by reference
void linearSearch(int *arr, int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            printf("Entered element found.\n");
            return;
        }
    }
    printf("Entered element not found!\n");
}
void main()
{
    int ar[5] = {1, 2, 3, 4, 5};
    int key1 = 1;
    int key2 = 10;
    linearSearch(&ar, 5, key1);
    linearSearch(&ar, 5, key2);
}