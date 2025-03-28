#include <stdio.h>
#include "SearchingAlgos.h"
int main(void) {
    int n , target , sorted , idx;
    scanf("%d %d",&n,&target);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Sorted ? 1 / 0\n");
    scanf("%d",&sorted);
    if (sorted) {
        idx = BinarySearch(arr,n,target);
    } else {
        idx = LinearSearch(arr,n,target);
    }
    if (idx == -1) {
        printf("Not Found\n");
    } else {
        printf("%d\n",idx);
    }
    return 0;
}