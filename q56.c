#include <stdio.h>

int main(){
    int len;
    printf("Enter the length of the array: ");
    scanf("%d", &len);

    int arr[len];

    printf("Enter elements: ");
    for (int i=0; i<len; i++){    
        scanf("%d", &arr[i]);
    }

    printf("The elements in the array are: ");
    for (int i=0; i<len; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}