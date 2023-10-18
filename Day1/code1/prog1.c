#include<stdio.h>

void main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10}; // assigning the 10 numbers in an array
    printf("Printing the assigned 10 numbers in an Array\n");
    for(int i = 0; i < 10; i++){
        printf("%d ",arr[i]);
    }
}