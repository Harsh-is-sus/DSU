// Code by Harsh Deshmukh SY-CSE B
// Write a 'C' Program to Find Maximum AND Value Produced by Pairwise Elements of an Array

#include <stdio.h>

int main() {
    int n, i, j;
    int maxAnd = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            int andValue = arr[i] & arr[j];
            if (andValue > maxAnd) {
                maxAnd = andValue;
            }
        }
    }

    printf("Maximum AND value = %d\n", maxAnd);

    return 0;
}
