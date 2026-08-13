// Code by Harsh Deshmukh SY-CSE B
// Search a Particular Data from the Given Array of Numbers using Binary Search Method

#include <stdio.h>

int main()
{
    int a[100], n, i, j, temp, key;
    int low, high, mid, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

   
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Array in ascending order:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nEnter element to search: ");
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
