//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main(){
    int a,b,sum,difference,product,quotient;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    sum=a+b;
    difference=a-b;
    product=a*b;
    if(b!=0){
        quotient=a/b;
    }
    else{
        printf("not defined");
    }
    printf("The sum, difference, product, and quotient of %d and %d is:\n Sum=%d\n Difference=%d\n Product=%d\n Quotient=%d\n ",a,b,sum,difference,product,quotient);
    return 0;
}