#include <stdio.h>

int main() {
    int size;
    printf("enter the size of the array\n");
    scanf("%d",&size);
    int arr[size] ;
  
    printf("enter the array elements\n ");
    for (int i = 0; i < size; i++) {
        scanf("%d ", &arr[i]);
    }
    printf("Original Array: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            
            for (int j = i + 1; j < size; j++) {
                if (arr[j] != 0) {
                    
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                    break; 
                }
            }
        }
    }

    printf("\nArray after moving zeroes to the end: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
