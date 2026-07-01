#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZEA 1000
#define SIZEB 10000
#define SIZEC 100000

// 1K
// Best Case for 1000 = 0.000000 
// Avg Case for 1000 = 0.003000 
// Worst Case for 1000 = 0.002000 

// 10K
// Array Sorted 
// Best Case for 10000 = 0.001000 
// Avg Case for 10000 = 0.359000 
// Worst Case for 10000 = 0.225000 

// 100K
// Array Sorted 
// Best Case for 100000 = 0.001000 
// Avg Case for 100000 = 32.239000 
// Worst Case for 100000 = 22.814000 

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

    start = clock();
    BubbleSort(arrA, SIZEA);
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
    BubbleSort(arrA, SIZEA);
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
    BubbleSort(arrA, SIZEA);
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

    start = clock();
    BubbleSort(arrB, SIZEB);
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
    BubbleSort(arrB, SIZEB);
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
    BubbleSort(arrB, SIZEB);
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

    start = clock();
    BubbleSort(arrC, SIZEC);
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
    BubbleSort(arrC, SIZEC);
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
    BubbleSort(arrC, SIZEC);
    end = clock();
    time = (double)(end-start)/CLOCKS_PER_SEC;
    printf("Worst Case for %d = %lf \n", SIZEC, time);
    


    return 0;
}