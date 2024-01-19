#include <stdio.h>

#define MAX_SIZE 100

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

    
    printf("Unique values in the array: ");
    for (int i = 0; i < size; i++) {
        int isUnique = 1;

        
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }

       
        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
