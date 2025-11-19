#include <stdio.h>

int main(){
    float PI = 3.14159;
    int radius;
    float area, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    printf("Area of the circle: %.2f cm^2c\n", area);
    printf("Circumference of the circle: %.2f cm\n", circumference);
    return 0;
}