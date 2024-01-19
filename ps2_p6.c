#include <stdio.h>

int main() {
    int size1, size2, size3;

   
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

   
    int arr1[size1];
    printf("Enter elements of the first array in ascending order:\n");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

   
    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

   
    int arr2[size2];
    printf("Enter elements of the second array in ascending order:\n");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

   
    printf("Enter the size of the third array: ");
    scanf("%d", &size3);

   
    int arr3[size3];
    printf("Enter elements of the third array in ascending order:\n");
    for (int i = 0; i < size3; i++) {
        scanf("%d", &arr3[i]);
    }

   
    int i = 0, j = 0, k = 0;

    printf("Common elements: ");

   
    while (i < size1 && j < size2 && k < size3) {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
            printf("%d ", arr1[i]);
            i++;
            j++;
            k++;
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr2[j] < arr3[k]) {
            j++;
        } else {
            k++;
        }
    }

    return 0;
}
