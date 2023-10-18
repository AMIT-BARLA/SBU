#include <stdio.h>

int countbits(int n)
{
    int count=0;
    while (n>0)
    {
        count++;
        n&=(n-1);
    }
    return count;
}

int flipcount(int a,int b)
{
    return countbits(a^b);
}
int main()
{
    int i = 0;
    int a = -2;
    int b = -1;
    int count = 0;
    for (i = 0; i < 16; i++)
    {
        a++;
        b++;
        printf("%d\n",flipcount(a,b));
        count = flipcount(a,b) + count;
    }
    printf("Total number of times bit flipped = %d",count);
    return 0;
}
