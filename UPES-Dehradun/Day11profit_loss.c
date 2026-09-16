//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profitLoss, percentage;

    printf("Enter the cost price: ");
    scanf("%f", &costPrice);

    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);

    profitLoss = sellingPrice - costPrice;

    if (profitLoss > 0) {
        percentage = (profitLoss / costPrice) * 100;
        printf("Profit percentage: %.2f\n", percentage);
    } else if (profitLoss < 0) {
        percentage = (profitLoss / costPrice) * 100;
        printf("Loss percentage: %.2f\n", percentage);
    } else {
        printf("No profit or loss.\n");
    }

    return 0;
}