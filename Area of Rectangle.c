#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define PI 3.14
int main()
{
    //declare variables
    float  len,wid,area;
    //take inputs
    printf("Enter length & width of Rectangle(in cm):");
    scanf("%f %f",&len,&wid);
    //calculate area
    area=len*wid;
    //display result
    printf("Area of Rectangle=%.3f cm\n",area);
    return 0;
}