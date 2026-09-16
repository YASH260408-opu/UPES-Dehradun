/*Write a program to print the following pattern:
*****
 ****
  ***
   **
    **/
#include <stdio.h>
int main() {
    int i, j,n,spaces;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (spaces = 0; spaces < i - 1; spaces++) {
            printf(" ");
        }
        for (j = 1; j <= (n - i + 1); j++) {
            printf("*\n ");
        }
        
    }

    return 0;
}