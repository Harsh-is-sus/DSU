// Code by Harsh Deshmukh SY-CSE B
// Find longest string after sorting

#include <stdio.h>
#include <string.h>

int main()
{
    char a[100][50], temp[50];
    int n, i, j, min, longest;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter strings:\n");
    for(i = 0; i < n; i++)
        scanf("%s", a[i]);

   
    for(i = 0; i < n - 1; i++)
    {
        min = i;

        for(j = i + 1; j < n; j++)
        {
            if(strcmp(a[j], a[min]) < 0)
                min = j;
        }

        strcpy(temp, a[i]);
        strcpy(a[i], a[min]);
        strcpy(a[min], temp);
    }

    longest = 0;

    for(i = 1; i < n; i++)
    {
        if(strlen(a[i]) > strlen(a[longest]))
            longest = i;
    }

    printf("Strings after sorting:\n");
    for(i = 0; i < n; i++)
        printf("%s ", a[i]);

    printf("\nLongest string: %s", a[longest]);
    printf("\nLength: %d", (int)strlen(a[longest]));

    return 0;
}
