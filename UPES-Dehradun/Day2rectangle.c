//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>
int main(){
    int a,b,area,perimeter;
    printf("Enter Lengthe and breath: ");
    scanf("%d %d",&a,&b);
    area=a*b;
    perimeter=2*(a+b);
    printf("Area=%d , Perimeter=%d\n",area,perimeter);
    return 0;
}