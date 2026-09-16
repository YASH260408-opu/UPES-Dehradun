/*Write a program to print the following pattern:
    5
   45
  345
 2345
12345*/
#include <stdio.h>
int main() {
    int i, j, spaces,n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) {
        for (spaces = 0; spaces < i - 1; spaces++) {
            printf(" ");
        }
        for (j = i; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}