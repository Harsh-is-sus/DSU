// Code by Harsh Deshmukh SY-CSE B
// Count even numbers in an array

#include <stdio.h>

int main() {
    int n, i, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if ((arr[i] & 1) == 0)
            count++;
    }

    printf("Number of even elements = %d\n", count);

    return 0;
}
