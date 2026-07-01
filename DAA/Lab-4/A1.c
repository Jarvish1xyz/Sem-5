#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZEA 1000
#define SIZEB 10000
#define SIZEC 100000

// 1K
// Best Case for 1000 = 0.001000 
// Avg Case for 1000 = 0.000000 
// Worst Case for 1000 = 0.001000 

// 10K
// Best Case for 10000 = 0.002000 
// Avg Case for 10000 = 0.008000 
// Worst Case for 10000 = 0.006000 

// 100K
// Best Case for 100000 = 0.074000 
// Avg Case for 100000 = 0.024000 
// Worst Case for 100000 = 0.032000  

void heapify(int arr[], int i, int n) {
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;

    if(left<n && arr[left] > arr[largest]) {
        largest = left;
    }

    if(right<n && arr[right] > arr[largest]) {
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

    FILE *file;
    clock_t  start, end;
    double time;

    int arrA[SIZEA];
    int arrB[SIZEB];
    int arrC[SIZEC];
    
    if(!(file = fopen("../test/best-1000.txt", "r"))){
        printf("ERROR while reading file!!!");
        return 0;
    }
    for(int i=0; i<SIZEA; i++) {
        fscanf(file, "%d", &arrA[i]);
    }
    fclose(file);

    printf("\n1K\n");
    start = clock();
    HeapSort(arrA, SIZEA);
    end = clock();
    time = (double)(end-start)/CLOCKS_PER_SEC;
    printf("Best Case for %d = %lf \n", SIZEA, time);
    

    
    if(!(file = fopen("../test/avg-1000.txt", "r"))){
        printf("ERROR while reading file!!!");
        return 0;
    }
    for(int i=0; i<SIZEA; i++) {
        fscanf(file, "%d", &arrA[i]);
    }
    fclose(file);

    start = clock();
    HeapSort(arrA, SIZEA);
    end = clock();
    time = (double)(end-start)/CLOCKS_PER_SEC;
    printf("Avg Case for %d = %lf \n", SIZEA, time);
    
    

    if(!(file = fopen("../test/worst-1000.txt", "r"))){
        printf("ERROR while reading file!!!");
        return 0;
    }
    for(int i=0; i<SIZEA; i++) {
        fscanf(file, "%d", &arrA[i]);
    }
    fclose(file);

    start = clock();
    HeapSort(arrA, SIZEA);
    end = clock();
    time = (double)(end-start)/CLOCKS_PER_SEC;
    printf("Worst Case for %d = %lf \n", SIZEA, time);
    



    
    if(!(file = fopen("../test/best-10000.txt", "r"))){
        printf("ERROR while reading file!!!");
        return 0;
    }
    for(int i=0; i<SIZEB; i++) {
        fscanf(file, "%d", &arrB[i]);
    }
    fclose(file);

    printf("\n10K\n");
    start = clock();
    HeapSort(arrB, SIZEB);
    end = clock();
    time = (double)(end-start)/CLOCKS_PER_SEC;
    printf("Best Case for %d = %lf \n", SIZEB, time);
    

    
    if(!(file = fopen("../test/avg-10000.txt", "r"))){
        printf("ERROR while reading file!!!");
        return 0;
    }
    for(int i=0; i<SIZEB; i++) {
        fscanf(file, "%d", &arrB[i]);
    }
    fclose(file);

    start = clock();
    HeapSort(arrB, SIZEB);
    end = clock();
    time = (double)(end-start)/CLOCKS_PER_SEC;
    printf("Avg Case for %d = %lf \n", SIZEB, time);
    
    

    if(!(file = fopen("../test/worst-10000.txt", "r"))){
        printf("ERROR while reading file!!!");
        return 0;
    }
    for(int i=0; i<SIZEB; i++) {
        fscanf(file, "%d", &arrB[i]);
    }
    fclose(file);

    start = clock();
    HeapSort(arrB, SIZEB);
    end = clock();
    time = (double)(end-start)/CLOCKS_PER_SEC;
    printf("Worst Case for %d = %lf \n", SIZEB, time);
    




    if(!(file = fopen("../test/best-100000.txt", "r"))){
        printf("ERROR while reading file!!!");
        return 0;
    }
    for(int i=0; i<SIZEC; i++) {
        fscanf(file, "%d", &arrC[i]);
    }
    fclose(file);

    printf("\n100K\n");
    start = clock();
    HeapSort(arrC, SIZEC);
    end = clock();
    time = (double)(end-start)/CLOCKS_PER_SEC;
    printf("Best Case for %d = %lf \n", SIZEC, time);
    

    
    if(!(file = fopen("../test/avg-100000.txt", "r"))){
        printf("ERROR while reading file!!!");
        return 0;
    }
    for(int i=0; i<SIZEC; i++) {
        fscanf(file, "%d", &arrC[i]);
    }
    fclose(file);

    start = clock();
    HeapSort(arrC, SIZEC);
    end = clock();
    time = (double)(end-start)/CLOCKS_PER_SEC;
    printf("Avg Case for %d = %lf \n", SIZEC, time);
    
    

    if(!(file = fopen("../test/worst-100000.txt", "r"))){
        printf("ERROR while reading file!!!");
        return 0;
    }
    for(int i=0; i<SIZEC; i++) {
        fscanf(file, "%d", &arrC[i]);
    }
    fclose(file);

    start = clock();
    HeapSort(arrC, SIZEC);
    end = clock();
    time = (double)(end-start)/CLOCKS_PER_SEC;
    printf("Worst Case for %d = %lf \n", SIZEC, time);
    


    return 0;
}