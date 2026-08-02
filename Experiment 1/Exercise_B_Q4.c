// Code by Harsh Deshmukh SY CSE-B 15
// Write a program to find frequency of characters in a string

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j, len, count;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        if (str[i] == ' ')
            continue;

        count = 1;

        for (j = i + 1; j < len; j++)
        {
            if (str[i] == str[j])
            {
                count++;
                str[j] = '0';
            }
        }

        if (str[i] != '0')
            printf("%c = %d\n", str[i], count);
    }

    return 0;
}
