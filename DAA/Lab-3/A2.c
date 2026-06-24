#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZEA 1000
#define SIZEB 10000
#define SIZEC 100000

//1K
// Best Case for 1000 = 0.000000 
// Avg Case for 1000 = 0.001000 
// Worst Case for 1000 = 0.001000 

//10K
// Best Case for 10000 = 0.000000 
// Avg Case for 10000 = 0.071000 
// Worst Case for 10000 = 0.144000 

//100K
// Best Case for 100000 = 0.001000 
// Avg Case for 100000 = 7.184000 
// Worst Case for 100000 = 13.820000

void InsertionSort(int arr[], int n) {
    for(int i=1; i<n; i++) {
        int j=i-1;
        int x=arr[i];

        while(x<arr[j] && j>=0) {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=x;
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
    InsertionSort(arrA, SIZEA);
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
    InsertionSort(arrA, SIZEA);
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
    InsertionSort(arrA, SIZEA);
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
    InsertionSort(arrB, SIZEB);
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
    InsertionSort(arrB, SIZEB);
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
    InsertionSort(arrB, SIZEB);
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
    InsertionSort(arrC, SIZEC);
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
    InsertionSort(arrC, SIZEC);
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
    InsertionSort(arrC, SIZEC);
    end = clock();
    time = (double)(end-start)/CLOCKS_PER_SEC;
    printf("Worst Case for %d = %lf \n\n", SIZEC, time);
    


    return 0;
}