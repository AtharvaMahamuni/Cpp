#include <stdio.h>

// Including the string.h to use its various features
#include <string.h>

int main()
{
    char str1[] = "I am string";
    char str2[] = "I am second string";

    // strlen() returns the length of the string
    printf("Length of str1 = %d\n", strlen(str1));

    // strcpy() copies the string pointed to by src into the array pointed to by dest
    strcpy(str1, str2);
    printf("str1 after strcpy = %s\n", str1);

    // strchr() returns a pointer to the first occurrence of the character c in the string pointed to by s
    printf("strchr(str2, 'n') = %s\n", strchr(str1, 'n'));

    return 0;
}