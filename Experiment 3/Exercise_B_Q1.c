// Code by Harsh Deshmukh SY-CSE B
// Search Multiple Occurrences of a String Using Linear Search Method

#include <stdio.h>
#include <string.h>

int main() {
    int n, i, count = 0;
    char str[100][100], key[100];

    printf("Enter the number of strings: ");
    scanf("%d", &n);

    printf("Enter the strings:\n");
    for (i = 0; i < n; i++) {
        scanf("%s", str[i]);
    }

    printf("Enter the string to search: ");
    scanf("%s", key);

    printf("String found at position(s): ");

    for (i = 0; i < n; i++) {
        if (strcmp(str[i], key) == 0) {
            printf("%d ", i + 1);
            count++;
        }
    }

    if (count == 0)
        printf("Not Found");

    printf("\nTotal occurrences = %d\n", count);

    return 0;
}
