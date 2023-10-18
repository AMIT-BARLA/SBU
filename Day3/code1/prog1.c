#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    printf("Elements in the Array and their addresses:\n");
    
    for (int i = 0; i < 5; i++) {
        printf("index: %d Element: %d -> Address: %p.\n", i, arr[i], (void *)&arr[i]);
    }
    
    printf("\n");
    
    int wordSize = sizeof(arr[0]);
    int *ptr = &arr[0];
    printf("wordSize = %lu, baseAddress = %p.\n", (unsigned long)wordSize, (void *)ptr);
    
    printf("Enter the index to find the address of the element: ");
    int key;
    scanf("%d", &key);
    
    if (key >= 0 && key < 5) {
        int *add = ptr + key;
        printf("Address of index %d is %p.\n", key, (void *)add);
    } else {
        printf("Invalid index entered.\n");
    }
    
    return 0;
}
