#include <stdio.h>

int main(){
  // Making the array
  int len;
  printf("Enter the length of array: \n");
  scanf("%d", &len);
  int nums[len], greaternums[len];
  for (int i = 0; i < len; i++){
    printf("Enter element %d: \n", i+1);
    scanf("%d", &nums[i]);
  }

  for (int i = 0; i < len; i++){
    int found = 0;
    for (int j = i+1; j < len; j++){
    if (nums[j] > nums[i]){
      greaternums[i] = nums[j];
      found = 1;
      break;
      }
    }
    if (!found){
      greaternums[i] = -1;
    }
  }
  
  for (int i = 0; i<len; i++){
    printf("%d, ", greaternums[i]);
  }
    return 0;

}