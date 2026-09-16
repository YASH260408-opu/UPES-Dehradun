//Write a program to find the product of odd digits of a number.
#include<stdio.h>
int main() {
    int num, product = 1, foundOdd = 0, digit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        if (digit % 2 != 0) {
            product *= digit;
            foundOdd = 1;
        }
        num /= 10;
    }

    if (foundOdd) {
        printf("Product of odd digits: %d\n", product);
    } else {
        printf("No odd digits found.\n");
    }

    return 0;
}
