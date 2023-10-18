#include <stdio.h>
#include <stdlib.h>

void concatString(char *s1, char *s2)
{
    int len = 0;
    char *s1_ptr = s1;
    while (*s1_ptr != '\0')
    {
        ++len;
        s1_ptr++;
    }
    while (*s2 != '\0')
    {
        s1[len++] = *s2++;
    }
    s1[len] = '\0';
}

void encrypt(char *s1)
{
  while (*s1 != '\0')
    {
        *s1++ = *s1 + 3;
    }  
}
int main(void)
{
    char s1[20] = "Amit ";
    char *s2 = "Barla";
    printf("Before Concat:\ns1: %s\ns2: %s\n",s1,s2);
    concatString(s1, s2);
    printf("After Concat: ");
    printf("%s\n", s1);
     printf("Before Encrypting: %s\n", s1);
    encrypt(s1);
    printf("After Encrypting: %s\n", s1);

    return 0;
}