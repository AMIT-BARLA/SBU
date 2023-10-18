#include<stdio.h>

void main() {
    int arr[10];
    printf("Enter the 10 elements for Sum\n");
    for(int i = 0; i < 10; i++){
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    for(int i = 0; i < 10; i++){
        sum += arr[i];
    }
    printf("Sum of the entered element is %d.",sum);
}