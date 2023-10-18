#include<stdio.h>
#include<stdlib.h>
int length = 0;

void countLength(char *str)
{
    
    int i = 0;

    while( str[i] != '\0')
    {
        ++length;
        i++;
    }
    str[length-1] = '\0';
    printf("Length of the entered string is %d.",--length);

}

void reverseString(char *str)
{
    int temp = length;
    printf("\nReversed String is ");
    while(temp >= 0)
    {
        printf("%c",str[temp--]);
    }
}

void convertCase(char *str)
{
    int temp = length;
    printf("\nBefore converting string is %s",str);
    while (temp != -1)
    {
        if(str[temp] >= 'a' && str[temp] <= 'z')
        {
            str[temp--] -=32;
        }
        else
        {
            if(str[temp] == ' ')
            {
                temp--;
                continue;
            }
            str[temp--] += 32;
        }
    }
    printf("\nConverted String is %s",str);
}

void countVowels(char *str)
{
    char vowels[128] = {0}; 
    vowels['a'] = 1;
    vowels['e'] = 1;
    vowels['i'] = 1;
    vowels['o'] = 1;
    vowels['u'] = 1;
    vowels['A'] = 1;
    vowels['E'] = 1;
    vowels['I'] = 1;
    vowels['O'] = 1;
    vowels['U'] = 1;

    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (vowels[(unsigned char)str[i]]) {
            ++count;
        }
    }
    printf("\nThe total number of vowels in the string is %d",count);
}
int main()
{
    char str[30];
    printf("Enter the string: ");
    fgets(str,30,stdin);
    countLength(str);
    reverseString(str);
    convertCase(str);
    countVowels(str);
    printf("\nPrinting the ASCII value:\n");
    printf("a to z:\n");
    char a='a';
    char z ='z';
    while (a<=z){
        printf("%c - %d, ",a,a);
        ++a;
    }
    a='A';
    z='Z';
    printf("\nA to Z:\n");
    while(a<=z)
    {
       printf("%c - %d, ",a,a);
       ++a;
    }
    return 0;
}