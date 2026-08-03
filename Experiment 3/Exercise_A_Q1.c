// Code by Harsh Deshmukh SY-CSE B
// Search multiple occurrences of an element

#include <stdio.h>

int main() {
    int n, i, key, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    printf("Element found at position(s): ");

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("%d ", i + 1);
            count++;
        }
    }

    if (count == 0)
        printf("Not Found");

    printf("\nTotal occurrences = %d\n", count);

    return 0;
}
