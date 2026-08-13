// Code by Harsh Deshmukh SY-CSE B
// Count total comparisons performed in Selection Sort

#include <stdio.h>

int main()
{
    int a[100], n, i, j, min, temp, comparisons = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n - 1; i++)
    {
        min = i;

        for(j = i + 1; j < n; j++)
        {
            comparisons++;

            if(a[j] < a[min])
                min = j;
        }

        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\nTotal comparisons performed: %d", comparisons);

    return 0;
}
