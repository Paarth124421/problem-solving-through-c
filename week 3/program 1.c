#include <stdio.h>
#define PI 3.14
void main(){
    float radius;
    float area;
    scanf("%f",&radius);
    area=PI*radius*radius;
    printf("area of a circle = %5.2f",area);

}