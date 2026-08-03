// Code by Harsh Deshmukh SY-CSE B
// Search a Particular Data from the Given Array of Strings Using Linear Search Method

#include <stdio.h>
#include <string.h>

int main() {
    int n, i, found = 0;
    char str[100][100], key[100];

    printf("Enter the number of strings: ");
    scanf("%d", &n);

    printf("Enter the strings:\n");
    for (i = 0; i < n; i++) {
        scanf("%s", str[i]);
    }

    printf("Enter the string to search: ");
    scanf("%s", key);

    for (i = 0; i < n; i++) {
        if (strcmp(str[i], key) == 0) {
            found = 1;
            printf("String found at position %d\n", i + 1);
            break;
        }
    }

    if (found == 0)
        printf("String not found.\n");

    return 0;
}
