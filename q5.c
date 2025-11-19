#include <stdio.h>
int main() {
    float celsius, fahrenheit;
    printf("Enter temperature in Degree Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("Temperature in Fahrenheit: %.2f Degree F\n", fahrenheit);
    return 0;
}