// Code by Harsh Deshmukh SY CSE-B 15
// Write a 'C' Program to Perform Array Operations: Create, Insert, Delete, Display

#include <stdio.h>

int main()
{
    int arr[100], n, i, choice, pos, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\n1. Display\n");
        printf("2. Insert\n");
        printf("3. Delete\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Array: ");
            for (i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;

        case 2:
            printf("Enter position (1 to %d): ", n + 1);
            scanf("%d", &pos);
            printf("Enter value: ");
            scanf("%d", &value);

            if (pos < 1 || pos > n + 1)
            {
                printf("Invalid position\n");
            }
            else
            {
                for (i = n; i >= pos; i--)
                {
                    arr[i] = arr[i - 1];
                }
                arr[pos - 1] = value;
                n++;
                printf("Element inserted.\n");
            }
            break;

        case 3:
            printf("Enter position (1 to %d): ", n);
            scanf("%d", &pos);

            if (pos < 1 || pos > n)
            {
                printf("Invalid position\n");
            }
            else
            {
                for (i = pos - 1; i < n - 1; i++)
                {
                    arr[i] = arr[i + 1];
                }
                n--;
                printf("Element deleted.\n");
            }
            break;

        case 4:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice\n");
        }

    } while (choice != 4);

    return 0;
}
