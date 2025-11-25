#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    float celsius,fahrenheit;
    printf("Enter Temp in Celsius:");
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit-32)/1.8;
    printf("Temperature in celsius=%.2f",celsius);
    return 0;
}