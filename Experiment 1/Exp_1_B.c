// Code by Harsh Deshmukh SY CSE-B 15
// Write a 'C' Program to implement various string functions like strcmp, strlen, strcpy,
// strrev, strcat, strupr, strlwr, strchr

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    printf("\nLength of first string = %lu\n", strlen(str1));
    printf("Length of second string = %lu\n", strlen(str2));

    if (strcmp(str1, str2) == 0)
        printf("Both strings are equal.\n");
    else
        printf("Strings are not equal.\n");

    strcpy(str2, str1);
    printf("After strcpy, second string = %s\n", str2);

    printf("Reverse of first string = %s\n", strrev(str1));

    strcat(str1, " ");
    strcat(str1, str2);
    printf("After strcat = %s\n", str1);

    printf("Uppercase = %s\n", strupr(str1));
    printf("Lowercase = %s\n", strlwr(str1));

    if (strchr(str1, 'a') != NULL)
        printf("Character 'a' found.\n");
    else
        printf("Character 'a' not found.\n");

    return 0;
}
