#include <stdio.h>
#include "SortingAlgos.h"

void swap(int *a , int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void BubbleSort(int arr[], int n) {
    int swapped = 1;
    while (swapped){
        swapped = 0;
        for (int i = 0; i < n-1; ++i) {
            if(arr[i] > arr[i+1]){
                swapped = 1;
                swap(arr + i , arr + i + 1);
            }
        }
        n--;
    }
}

void SelectionSort(int arr[] , int n){
    for (int i = 0; i < n; ++i) {
        int min_idx = i;
        for (int j = i + 1 ; j < n; ++j) {
            if (arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        swap(arr + i , arr + min_idx);
    }
}
