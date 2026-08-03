// Code by Harsh Deshmukh SY-CSE B
// Write a program to toggle a bit

#include <stdio.h>

int main() {
    int num, n;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the bit position to toggle (0-based): ");
    scanf("%d", &n);

    num = num ^ (1 << n);

    printf("Number after toggling bit %d = %d\n", n, num);

    return 0;
}
