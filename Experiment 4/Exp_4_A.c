// Code by Harsh Deshmukh SY-CSE B
// Search a Particular Data from the Given Array of Numbers using Binary Search Method

#include <stdio.h>

int main()
{
    int a[100], n, i, key;
    int low, high, mid, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements in ascending order:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == key)
        {
            printf("Element %d found at position %d.\n", key, mid + 1);
            found = 1;
            break;
        }
        else if(a[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if(found == 0)
    {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
