// Code by Harsh Deshmukh SY-CSE B
// Find maximum OR value

#include <stdio.h>

int main() {
    int n, i, j;
    int maxOr = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            int orValue = arr[i] | arr[j];
            if (orValue > maxOr) {
                maxOr = orValue;
            }
        }
    }

    printf("Maximum OR value = %d\n", maxOr);

    return 0;
}
