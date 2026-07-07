#include<stdio.h>

void countingSort(int arr[], int max, int n) {
    int C[max];
    for(int i=0; i<max; i++) {
        C[i]=0;
    }

    for(int i=0; i<n; i++) {
        C[arr[i]-1]++;
    }

    int j=0;
    for(int i=0; i<max; i++) {
        if(C[i]!=0) {
            arr[j]=(i+1);
            C[i]--;
            i--;
            j++;
        }
    }
}


int main() {
    int n=5;
    int arr[n];

    arr[0]=53;
    arr[1]=20;
    arr[2]=51;
    arr[3]=43;
    arr[4]=13;

    int max=arr[0];
    for(int i=0; i<n; i++) {
        if(arr[i]>max) {
            max=arr[i];
        }
    }

    countingSort(arr, max, n);

    for(int i=0; i<n; i++) {
        printf("%d, ", arr[i]);
    }
}