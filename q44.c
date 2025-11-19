#include <stdio.h>

int main(){
    int n;
    float sum=0;
    printf("Enter the value of n: \n");
    scanf("%d", &n);

    for (int i = 2; i <= n+1; i++){
        float numerator = 2*i - 1;
        float denominator = 2*i;
        float frac = numerator/denominator;
        sum = sum + frac;
    }
    sum++;
    printf("The required sum is: %.2f", sum);
}