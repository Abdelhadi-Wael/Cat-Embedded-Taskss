#include <stdio.h>
#include "SortingAlgos.h"

int main(void) {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    SelectionSort(arr, n);

    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }

    return 0;
}
