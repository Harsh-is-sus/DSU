// Code by Harsh Deshmukh SY-CSE B
// Count Occurrences of a Given String Using Linear Search Method

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

    printf("Enter the string to count: ");
    scanf("%s", key);

    for (i = 0; i < n; i++) {
        if (strcmp(str[i], key) == 0) {
            count++;
        }
    }

    printf("Occurrences of \"%s\" = %d\n", key, count);

    return 0;
}
