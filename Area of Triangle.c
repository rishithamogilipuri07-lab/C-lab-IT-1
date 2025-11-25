#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define PI 3.14
int main()
{
   // Declare variables
    float b, h, area;
     // Take inputs
    printf("Enter base and height (in cm):");
    scanf("%f %f", &b, &h);
    // Calculate area 
    area = 0.5 * b * h;
    // Display result
    printf("Area of triangle=%.2f cm\n", area);
    return 0;

}