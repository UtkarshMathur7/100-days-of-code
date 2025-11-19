#include <stdio.h>

int main(){
    int units, bill;
    printf("Enter total number of units consumed: \n");
    scanf("%d", &units);
    if (units <= 100){
        bill = units * 5;
        printf("Electricity Bill: %d Rupees \n", bill);
    }
    else if (units >= 101 && units <= 200){
        bill = (100 * 5) + ((units - 100) * 9);
        printf("Electricity Bill: %d Rupees \n", bill);
    }
    else if (units >= 201){
        bill = (100 * 5) + (100 * 9) + ((units - 200) * 16);
        printf("Electricity Bill: %d Rupees \n", bill);
    }
    return 0;
}