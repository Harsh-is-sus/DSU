// Code by Harsh Deshmukh SY-CSE B
// Sort strings in descending order using Selection Sort

#include <stdio.h>
#include <string.h>

int main()
{
    char a[100][50], temp[50];
    int n, i, j, max;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter strings:\n");
    for(i = 0; i < n; i++)
        scanf("%s", a[i]);

   
    for(i = 0; i < n - 1; i++)
    {
        max = i;

        for(j = i + 1; j < n; j++)
        {
            if(strcmp(a[j], a[max]) > 0)
                max = j;
        }

        strcpy(temp, a[i]);
        strcpy(a[i], a[max]);
        strcpy(a[max], temp);
    }

    printf("Strings after sorting in descending order:\n");
    for(i = 0; i < n; i++)
        printf("%s ", a[i]);

    return 0;
}
