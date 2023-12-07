#include <stdio.h>

float shop(float a, float b, float c) {
    float avg  = (a+b+c);
    return avg+(avg*0.18);
}

int main()
{
    float a, b, c, avg;   
    printf("Enter the value of pen :");
    scanf("%f",&a);       
    printf("\nEnter the value of pencil :");
    scanf("%f",&b); 
    printf("\nEnter the value of eraser :");
    scanf("%f",&c);   
  float totalPrice = shop(a, b, c);
  printf("total price of product is %f", totalPrice);
  return 0;
}