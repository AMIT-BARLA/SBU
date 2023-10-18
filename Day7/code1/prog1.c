#include <stdio.h>
#include <stdlib.h>

int arr[15] = {0};

struct DtoB
{
    int arr[10];
    int top;
};
void initialize(struct DtoB *obj)
{
    for (int i = 0; i < 10; i++)
    {
        obj->arr[i] = 0;
    }
}
void print(struct DtoB *obj,int index)
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d   ", obj->arr[i]);
    }
    if(index != 0)
    {
        printf("  %d",arr[index-1]);
    }
    printf("\n");
}

int bitsFlipped(struct DtoB *obj,int number)
{
    int count = 0;
    int f=0;

    for(int i =1; i <=number; i++)
    {
        for(int j =9; j >= 6; j--)
        {
            int temp = obj[i].arr[j] ^ obj[i-1].arr[j];
            if(temp)
            {
                count++;
            }
        }
        f +=count;
        arr[i-1]=count;
        count =0;
    }
   return f;
}
int main()
{
    int cost = 2;
    int number;
    printf("Enter the Decimal Number till you want to find the Bits FLipped: ");
    scanf("%d", &number);
    struct DtoB *obj;
    obj = (struct DtoB *)malloc(sizeof(struct DtoB) * (number));
    for (int i = 0; i <= number; i++)
    {
        int temp = i;
        initialize(&obj[i]);
        obj->top = 10;
        while (temp != 0)
        {
            obj[i].arr[--obj->top] = temp % 2;
            temp /= 2;
        }
    }
    int bitsF=bitsFlipped(obj,number);
    printf("\ndec 512 256 128 64  32  16   8   4   2   1  BitsFlipped\n\n");
    for (int i = 0; i <= 15; i++)
    {
        printf("%.2d   ",i);
        print(&obj[i],i);
    }
    printf("\nTotal Bits Flipped from 0 to %d is %d.\n\n",number,bitsF);
    
    return 0;
}