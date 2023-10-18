#include<stdio.h>

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void main(){
    int a = 10,b = 20;
    printf("Initial value of a = %d, b = %d.\n",a,b);
    swap(&a,&b);
    printf("Swapped value of a = %d, b = %d.\n",a,b);
}