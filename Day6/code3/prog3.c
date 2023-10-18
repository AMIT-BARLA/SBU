#include <stdio.h>
#include <stdlib.h>

int compareStrings(const char *str1, const char *str2)
{
    while (*str1 && *str2)
    {
        if (*str1 < *str2)
        {
            return -1;
        }
        else if (*str1 > *str2)
        {
            return 1;
        }
        str1++;
        str2++;
    }
    if (*str1)
    {
        return 1;
    }
    else if (*str2)
    {
        return -1;
    }
    return 0;
}

void bubblesort(char *arr[])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {
            if (compareStrings(arr[j], arr[j + 1]) > 0)
            {
                char *temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\nAfter Sorting:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%s  ", arr[i]);
    }
}

int main()
{
    char *cities[] = {
        "Ranchi",
        "Mumbai",
        "New Delhi",
        "Bangalore",
        "Kolkata",
        "Chennai",
        "Hyderabad",
        "Pune",
        "Ahmedabad",
        "Jaipur",
    };
    printf("Before Sorting:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%s  ", cities[i]);
    }
    bubblesort(cities);
    return 0;
}
