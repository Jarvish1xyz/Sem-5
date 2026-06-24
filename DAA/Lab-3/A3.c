#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZEA 1000
#define SIZEB 10000
#define SIZEC 100000

//1K
// Best Case for 1000 = 0.001000 
// Avg Case for 1000 = 0.002000 
// Worst Case for 1000 = 0.001000 

//10K
// Best Case for 10000 = 0.136000 
// Avg Case for 10000 = 0.134000 
// Worst Case for 10000 = 0.139000 

//100K
// Best Case for 100000 = 13.067000 
// Avg Case for 100000 = 13.077000 
// Worst Case for 100000 = 13.713000

void SelectionSort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        int minj=i, minv=arr[i];
        for(int j=i+1; j<n; j++) {
            if(arr[j]<minv) {
                minj=j;
                minv=arr[j];
            }
        }
        arr[minj]=arr[i];
        arr[i]=minv;
    }
}

int main() {

    FILE *file;
    clock_t  start, end;
    double time;

    int arrA[SIZEA];
    int arrB[SIZEB];
    int arrC[SIZEC];
    
    if(!(file = fopen("best-1000.txt", "r"))){
        printf("ERROR while reading file!!!");
        return 0;
    }
    for(int i=0; i<SIZEA; i++) {
        fscanf(file, "%d", &arrA[i]);
    }
    fclose(file);

    start = clock();
    SelectionSort(arrA, SIZEA);
    end = clock();
    time = (double)(end-start)/CLOCKS_PER_SEC;
    printf("Best Case for %d = %lf \n", SIZEA, time);
    

    
    if(!(file = fopen("avg-1000.txt", "r"))){
        printf("ERROR while reading file!!!");
        return 0;
    }
    for(int i=0; i<SIZEA; i++) {
        fscanf(file, "%d", &arrA[i]);
    }
    fclose(file);

    start = clock();
    SelectionSort(arrA, SIZEA);
    end = clock();
    time = (double)(end-start)/CLOCKS_PER_SEC;
    printf("Avg Case for %d = %lf \n", SIZEA, time);
    
    

    if(!(file = fopen("worst-1000.txt", "r"))){
        printf("ERROR while reading file!!!");
        return 0;
    }
    for(int i=0; i<SIZEA; i++) {
        fscanf(file, "%d", &arrA[i]);
    }
    fclose(file);

    start = clock();
    SelectionSort(arrA, SIZEA);
    end = clock();
    time = (double)(end-start)/CLOCKS_PER_SEC;
    printf("Worst Case for %d = %lf \n\n", SIZEA, time);
    



    
    if(!(file = fopen("best-10000.txt", "r"))){
        printf("ERROR while reading file!!!");
        return 0;
    }
    for(int i=0; i<SIZEB; i++) {
        fscanf(file, "%d", &arrB[i]);
    }
    fclose(file);

    start = clock();
    SelectionSort(arrB, SIZEB);
    end = clock();
    time = (double)(end-start)/CLOCKS_PER_SEC;
    printf("Best Case for %d = %lf \n", SIZEB, time);
    

    
    if(!(file = fopen("avg-10000.txt", "r"))){
        printf("ERROR while reading file!!!");
        return 0;
    }
    for(int i=0; i<SIZEB; i++) {
        fscanf(file, "%d", &arrB[i]);
    }
    fclose(file);

    start = clock();
    SelectionSort(arrB, SIZEB);
    end = clock();
    time = (double)(end-start)/CLOCKS_PER_SEC;
    printf("Avg Case for %d = %lf \n", SIZEB, time);
    
    

    if(!(file = fopen("worst-10000.txt", "r"))){
        printf("ERROR while reading file!!!");
        return 0;
    }
    for(int i=0; i<SIZEB; i++) {
        fscanf(file, "%d", &arrB[i]);
    }
    fclose(file);

    start = clock();
    SelectionSort(arrB, SIZEB);
    end = clock();
    time = (double)(end-start)/CLOCKS_PER_SEC;
    printf("Worst Case for %d = %lf \n\n", SIZEB, time);
    




    if(!(file = fopen("best-100000.txt", "r"))){
        printf("ERROR while reading file!!!");
        return 0;
    }
    for(int i=0; i<SIZEC; i++) {
        fscanf(file, "%d", &arrC[i]);
    }
    fclose(file);

    start = clock();
    SelectionSort(arrC, SIZEC);
    end = clock();
    time = (double)(end-start)/CLOCKS_PER_SEC;
    printf("Best Case for %d = %lf \n", SIZEC, time);
    

    
    if(!(file = fopen("avg-100000.txt", "r"))){
        printf("ERROR while reading file!!!");
        return 0;
    }
    for(int i=0; i<SIZEC; i++) {
        fscanf(file, "%d", &arrC[i]);
    }
    fclose(file);

    start = clock();
    SelectionSort(arrC, SIZEC);
    end = clock();
    time = (double)(end-start)/CLOCKS_PER_SEC;
    printf("Avg Case for %d = %lf \n", SIZEC, time);
    
    

    if(!(file = fopen("worst-100000.txt", "r"))){
        printf("ERROR while reading file!!!");
        return 0;
    }
    for(int i=0; i<SIZEC; i++) {
        fscanf(file, "%d", &arrC[i]);
    }
    fclose(file);

    start = clock();
    SelectionSort(arrC, SIZEC);
    end = clock();
    time = (double)(end-start)/CLOCKS_PER_SEC;
    printf("Worst Case for %d = %lf \n\n", SIZEC, time);
    


    return 0;
}