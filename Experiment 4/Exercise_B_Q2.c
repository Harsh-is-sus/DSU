// Code by Harsh Deshmukh SY-CSE B
// Implement Recursive Binary Search for strings

#include <stdio.h>
#include <string.h>

int binarySearch(char a[][50], int low, int high, char key[])
{
    if(low > high)
        return -1;

    int mid = (low + high) / 2;

    if(strcmp(a[mid], key) == 0)
        return mid;
    else if(strcmp(a[mid], key) < 0)
        return binarySearch(a, mid + 1, high, key);
    else
        return binarySearch(a, low, mid - 1, key);
}

int main()
{
    char a[100][50], key[50], temp[50];
    int n, i, j, result;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter strings:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%s", a[i]);
    }

    
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(strcmp(a[i], a[j]) > 0)
            {
                strcpy(temp, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], temp);
            }
        }
    }

    printf("Strings in ascending order:\n");
    for(i = 0; i < n; i++)
    {
        printf("%s ", a[i]);
    }

    printf("\nEnter string to search: ");
    scanf("%s", key);

    result = binarySearch(a, 0, n - 1, key);

    if(result != -1)
        printf("String \"%s\" found at position %d.\n", key, result + 1);
    else
        printf("String \"%s\" not found in the array.\n", key);

    return 0;
}
