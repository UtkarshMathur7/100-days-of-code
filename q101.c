#include <stdio.h>

int main(){
    // Making the sorted array
    int len;
    printf("Enter the length of array: \n");
    scanf("%d", &len);
    int nums[len];
    for (int i = 0; i < len; i++){
        printf("Enter element %d: \n", i+1);
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < len; i++){
        for (int j = 0; j < len - 1; j++){
            if (nums[j] > nums[j+1]){
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
    printf("Your array is: \n");
    for (int i = 0; i<len; i++){
        printf("%d ", nums[i]);
    }
    printf("\n");

    // Getting the target
    printf("Enter your target: \n");
    int target;
    scanf("%d", &target);

    // Finding the target
    int first = -1,last = -1;
    for (int i = 0; i < len; i++){
            if (nums[i] == target){
                if (first == -1){
                    first = i;
            }
                last = i;
        }
            else{
                continue;
            }
        }
    if (first != -1 && last != -1){
        printf("The first and last occurance of %d are indexes %d and %d respectively.", target,first,last);
    }
    else if (first == -1 && last == -1){
        printf("The target is not present in the array. -1 -1");
    }
    return 0;
}