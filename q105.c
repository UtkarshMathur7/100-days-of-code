#include <stdio.h>

int main(){
  // Making the array
  int len;
  printf("Enter the length of array: \n");
  scanf("%d", &len);
  int nums[len];
  for (int i = 0; i < len; i++){
    printf("Enter element %d: \n", i+1);
    scanf("%d", &nums[i]);
  }

  int try = 0;
  int count = 0;
  for (int i = 0; i<len; i++){
    if (count == 0){
      try = nums[i];
      count+=1;
    }
    else if (nums[i] == try){
      count++;
    }
    else{
      count--;
    }
  }

  count = 0;
  for (int i = 0; i < len; i++){
      if (nums[i] == try){
        count++;
      }
  }

  if (count > len/2){
    printf("Majority Element is: %d",try);
  }
  else{
    printf("No element in Majority. -1");
  }
    return 0;
}