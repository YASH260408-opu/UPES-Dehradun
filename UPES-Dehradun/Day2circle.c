//Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
int main(){
    int r;
    float area,circumference;
    printf("Enter the radius: ");
    scanf("%d",&r);
    area=3.14*r*r;
    circumference=2*3.14*r;
    printf("Area=%.2f , Circumference=%.2f ", area,circumference);
    return 0;
}