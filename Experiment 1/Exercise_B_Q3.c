// Code by Harsh Deshmukh SY CSE-B 15
// Write a program to count words in a sentence

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, words = 0;

    printf("Enter a sentence: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if ((i == 0 && str[i] != ' ') || (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0'))
            words++;
    }

    printf("Number of words = %d\n", words);

    return 0;
}
