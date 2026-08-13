// Code by Harsh Deshmukh SY-CSE B
// Sort strings without using strcmp()

#include <stdio.h>
#include <string.h>

int compare(char a[], char b[])
{
    int i = 0;

    while(a[i] != '\0' && b[i] != '\0')
    {
        if(a[i] != b[i])
            return a[i] - b[i];

        i++;
    }

    return a[i] - b[i];
}

int main()
{
    char a[100][50], temp[50];
    int n, i, j;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter strings:\n");
    for(i = 0; i < n; i++)
        scanf("%s", a[i]);

  
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(compare(a[i], a[j]) > 0)
            {
                strcpy(temp, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], temp);
            }
        }
    }

    printf("Strings after sorting in ascending order:\n");
    for(i = 0; i < n; i++)
        printf("%s ", a[i]);

    return 0;
}
