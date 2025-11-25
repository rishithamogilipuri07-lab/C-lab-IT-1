#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define PI 3.14
int main()
{
    //declare variables
    float radius,area;
    printf("Enter the Radius of Circle(in cm):");
    scanf("%f",&radius);
    //Calculate area
    area=PI*radius*radius;
    //display result
    printf("Area of circle+%.2fcm\n",area);
    return 0;
}