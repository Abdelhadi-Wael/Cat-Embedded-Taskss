#include "SearchingAlgos.h"

int LinearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int BinarySearch(int arr[], int n, int target) {
    int l = 0 , r = n-1;
    while (l <= r) {
            int mid = l + (r-l)/2;
            if (arr[mid] == target) {
                return mid;
            } else if (arr[mid] < target) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
    }
        return -1;
}