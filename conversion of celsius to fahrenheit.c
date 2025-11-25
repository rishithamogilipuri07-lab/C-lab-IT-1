#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    float celsius,fahrenheit;
    printf("Enter Temp in Celsius:");
    scanf("%f",&celsius);
    fahrenheit=(1.8*celsius)+32;
    printf("Temperature in fahrenheit=%.2f",fahrenheit);
    return 0;
}