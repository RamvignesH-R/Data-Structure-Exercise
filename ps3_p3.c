#include <stdio.h>

int findMissingTerm(int arr[], int n) {
    int low = 0, high = n - 1, mid;

    // Calculate the common difference
    int commonDiff = (arr[high] - arr[low]) / n;

    while (low < high) {
        mid = low + (high - low) / 2;

        // If the mid element is not in its correct position
        if (arr[mid] != arr[low] + mid * commonDiff) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }

    // The missing term is at index low
    return arr[low] - commonDiff;
}

int main() {
    int n;

    // Input the size of the sequence
    printf("Enter the size of the sequence: ");
    scanf("%d", &n);

    int arr[n];

    // Input the sequence elements
    printf("Enter the sequence elements (including first and last): ");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    // Find and print the missing term
    int missingTerm = findMissingTerm(arr, n);
    printf("The missing term is: %d\n", missingTerm);

    return 0;
}
