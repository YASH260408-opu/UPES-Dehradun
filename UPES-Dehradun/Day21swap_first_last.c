//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>
int main() {
    int num, firstDigit, lastDigit, numDigits = 0, tempNum, swappedNum;

    printf("Enter an integer: ");
    scanf("%d", &num);

    tempNum = num;
    lastDigit = tempNum % 10;

    while (tempNum != 0) {
        firstDigit = tempNum % 10;
        tempNum /= 10;
        numDigits++;
    }

    swappedNum = lastDigit * pow(10, numDigits - 1) + (num % (int)pow(10, numDigits - 1)) / 10 * 10 + firstDigit;

    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}