#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

void BubbleSort(int arr[], int n) {
    int swap=0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap++;
            }
        }
        if(swap==0) {
            printf("\nArray Sorted \n");
            break;
        }
    }
}

int findMinSum(int n, int arr[]) {

    BubbleSort(arr, n);
    int min=INT_MAX;
    for(int i=1; i<n; i++) {
        int k = abs(arr[i]-arr[i-1]);
        if(k<min) {
            min=k;
        }
    }

    return min;
}

int main() {
    int size;
    printf("Enter Size : ");
    scanf("%d", &size);

    int arr[size];

    for(int i=0; i<size; i++) {
        printf("Enter element-%d : ", i+1);
        scanf("%d", &arr[i]);
    }

    int ans = findMinSum(size,arr);

    printf("%d", ans);

    return 0;
}