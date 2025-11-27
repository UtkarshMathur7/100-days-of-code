#include <stdio.h>

int main(){
  // Getting the number
  int n;
  printf("Enter a number: \n");
  scanf("%d", &n);
  
  if (n == 1){
    printf("The pivot is 1\n");
    return 0;
  }
  // Getting the pivot

  int totSum = 0;
  for (int i = 0; i<=n;i++){
    totSum += i;
  }

  int oTx = 0, xTn = 0, pivot = -1, flag = 0;
  for (int i = 0; i < n; i++){
    oTx += i;
    xTn = totSum - (oTx - i);
    if (oTx == xTn){
      pivot = i;
      flag = 1;
      break;
    } 
  }
  if (flag == 1){
  printf("The pivot is %d\n", pivot);
  }
  else if (flag == 0){
    printf("The pivot does not exist. -1");
  }
  return 0;
}