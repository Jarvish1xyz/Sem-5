#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZEA 1000
#define SIZEB 10000
#define SIZEC 100000

// 1K
// Best Case for 1000 = 0.002000 
// Avg Case for 1000 = 0.000000 
// Worst Case for 1000 = 0.001000 

// 10K
// Best Case for 10000 = 0.111000 
// Avg Case for 10000 = 0.001000 
// Worst Case for 10000 = 0.125000

// 100K
// Best Case for 100000 = 5.041938
// Avg Case for 100000 = 0.013174
// Worst Case for 100000 = 4.577217

void quickSort(int arr[], int low, int high) {
    int f = 1;
    int temp;
    int i = low, j = high + 1;
    int key = arr[low];
    if (low < high) {
        while (f) {
            i++;
            while (key > arr[i] && i<high)
            {
                i++;
            }
            j--;
            while (key < arr[j])
            {
                j--;
            }

            if (i < j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            else
            {
                f = 0;
            }
        }
        temp = arr[low];
        arr[low] = arr[j];
        arr[j] = temp;

        quickSort(arr, low, j - 1);
        quickSort(arr, j + 1, high);
    }

}


int main()
{

    FILE *file;
    clock_t start, end;
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
    quickSort(arrA, 0, SIZEA-1);
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
    quickSort(arrA, 0, SIZEA-1);
    end = clock();
    time = (double)(end-start)/CLOCKS_PER_SEC;
    printf("Avg Case for %d = %lf \n", SIZEA, time);


    if (!(file = fopen("../test/worst-1000.txt", "r")))
    {
        printf("ERROR while reading file!!!");
        return 0;
    }
    for (int i = 0; i < SIZEA; i++)
    {
        fscanf(file, "%d", &arrA[i]);
    }
    fclose(file);

    start = clock();
    quickSort(arrA, 0, SIZEA - 1);
    end = clock();
    time = (double)(end - start) / CLOCKS_PER_SEC;
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
    quickSort(arrB, 0, SIZEB-1);
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
    quickSort(arrB, 0, SIZEB-1);
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
    quickSort(arrB, 0, SIZEB-1);
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
    quickSort(arrC, 0, SIZEC-1);
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
    quickSort(arrC, 0, SIZEC-1);
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
    quickSort(arrC, 0, SIZEC-1);
    end = clock();
    time = (double)(end-start)/CLOCKS_PER_SEC;
    printf("Worst Case for %d = %lf \n", SIZEC, time);


    return 0;
}