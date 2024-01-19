#include <stdio.h>

#define MAX_SIZE 100

void sortEvenOdd(int arr[], int size) {
   
    int even[MAX_SIZE], odd[MAX_SIZE];
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even[evenCount++] = arr[i];
        } else {
            odd[oddCount++] = arr[i];
        }
    }

    
    for (int i = 0; i < evenCount - 1; i++) {
        for (int j = 0; j < evenCount - i - 1; j++) {
            if (even[j] > even[j + 1]) {
                
                int temp = even[j];
                even[j] = even[j + 1];
                even[j + 1] = temp;
            }
        }
    }

    
    for (int i = 0; i < oddCount - 1; i++) {
        for (int j = 0; j < oddCount - i - 1; j++) {
            if (odd[j] > odd[j + 1]) {
               
                int temp = odd[j];
                odd[j] = odd[j + 1];
                odd[j + 1] = temp;
            }
        }
    }

    
    int index = 0;

    for (int i = 0; i < evenCount; i++) {
        arr[index++] = even[i];
    }

    for (int i = 0; i < oddCount; i++) {
        arr[index++] = odd[i];
    }
}

int main() {
    int size;

   
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0 || size > MAX_SIZE) {
        printf("Invalid array size.\n");
        return 1;
    }

    
    int arr[MAX_SIZE];
    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    
    sortEvenOdd(arr, size);

    
    printf("Sorted array (even and odd elements separated): ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
