#include <stdio.h>

int findTriplet(int arr[], int n, int sum) {
    for (int i = 0; i < n - 2; i++) {
        int currentSum = arr[i];

        for (int j = i + 1; j < n - 1; j++) {
            currentSum += arr[j];

            for (int k = j + 1; k < n; k++) {
                currentSum += arr[k];

                if (currentSum == sum) {
                    printf("Triplet found: %d, %d, %d\n", arr[i], arr[j], arr[k]);
                    return 1;  // True
                }

                currentSum -= arr[k];  // Backtrack for the next combination
            }

            currentSum -= arr[j];  // Backtrack for the next combination
        }
    }

    printf("Triplet not found\n");
    return 0;  // False
}
int main()
 
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum;
    printf("Enter the target sum: ");
    scanf("%d", &sum);

    if (findTriplet(arr, n, sum)) {
        printf("Found a triplet with the given sum.\n");
    } else {
        printf("No triplet found with the given sum.\n");
    }

    return 0;
}