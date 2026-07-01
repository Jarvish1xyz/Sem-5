#include<stdio.h>


void heapify(int arr[], int i, int n) {
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;

    if(left<n && arr[left] < arr[largest]) {
        largest = left;
    }

    if(right<n && arr[right] < arr[largest]) {
        largest = right;
    }

    if(largest!=i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        
        heapify(arr, largest, n);
    }

}

void HeapSort(int arr[], int n) {

    for(int i=n/2-1; i>=0; i--) {
        heapify(arr, i, n);
    }

    for(int i=n-1; i>0; i--) {
        int temp = arr[0];
        arr[0]=arr[i];
        arr[i]=temp;

        heapify(arr,0,i);
    }
    
}

int main() {
    int sizeA, sizeB;
    printf("Enter Size of Array-A : ");
    scanf("%d", &sizeA);
    printf("Enter Size of Array-B : ");
    scanf("%d", &sizeB);

    int A[sizeA];
    int B[sizeB];

    printf("\nEnter elemt in Array-A\n");
    for(int i=0; i<sizeA; i++) {
        printf("Enter element-%d : ", i+1);
        scanf("%d", &A[i]);
    }

    printf("\nEnter element in Array-B\n");
    for(int i=0; i<sizeB; i++) {
        printf("Enter element-%d : ", i+1);
        scanf("%d", &B[i]);
    }

    int k;
    printf("Enter k : ");
    scanf("%d", &k);
    

    int Ans[sizeA*sizeB],sizeAns=0;
    for(int i=0; i<sizeA; i++) {
        for(int j=0; j<sizeB; j++) {
            Ans[sizeAns]=A[i]+B[j];
            sizeAns++;
        }
    }

    printf("Ans = %d\n", sizeAns);
    for(int i=0; i<sizeAns; i++) {
        printf("%d, ", Ans[i]);
    }
    printf("\n");
    
    HeapSort(Ans, sizeAns);
    
    for(int i=0; i<sizeAns; i++) {
        printf("%d, ", Ans[i]);
    }
    printf("\n");

    int FinalAns[k];
    for(int i=0; i<k; i++) {
        FinalAns[i]=Ans[i];
    }

    for(int i=0; i<k; i++) {
        printf("%d, ", FinalAns[i]);
    }
    

}