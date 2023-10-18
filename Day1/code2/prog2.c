#include<stdio.h>

void main(){
    int arr[10];
    printf("Enter the 10 elements for an array\n");
    for(int i = 0; i < 10; i++){
        scanf("%d",&arr[i]);
    }
    printf("Printing the 10 elements of an array\n");
    for(int i = 0; i < 10; i++){
        printf("%d ",arr[i]);
    }
}