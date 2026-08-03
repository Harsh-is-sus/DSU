// Code by Harsh Deshmukh SY-CSE B
// Count number of comparisons performed

#include <stdio.h>

int main() {
    int n, i, key;
    int comparisons = 0, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        comparisons++;

        if (arr[i] == key) {
            found = 1;
            printf("Element found at position %d\n", i + 1);
            break;
        }
    }

    if (!found)
        printf("Element not found.\n");

    printf("Number of comparisons = %d\n", comparisons);

    return 0;
}
