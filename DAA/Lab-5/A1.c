#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZEA 1000
#define SIZEB 10000
#define SIZEC 100000

//val = 9999

// 1K
// Best Case for 1000 = 0.000000, Ans = -1 

// 10K
// Best Case for 10000 = 0.000000, Ans = 9999 

// 100K
// Best Case for 100000 = 0.000000, Ans = 9999 

int BinarySearch(int arr[], int n, int val)
{
    int left = 0, right = n - 1, mid;

    while (left <= right)
    {
        mid = (left + right) / 2;
        if (arr[mid] == val)
        {
            return mid;
        }
        else if (arr[mid] < val)
        {
            left = mid+1;
        }
        else
        {
            right = mid-1;
        }
    }

    return -1;
}

int main()
{

    FILE *file;
    clock_t start, end;
    double time;

    int arrA[SIZEA];
    int arrB[SIZEB];
    int arrC[SIZEC];

    int val, ans;
    printf("Enter the value to search: ");
    scanf("%d", &val);

    if (!(file = fopen("../test/best-1000.txt", "r")))
    {
        printf("ERROR while reading file!!!");
        return 0;
    }
    for (int i = 0; i < SIZEA; i++)
    {
        fscanf(file, "%d", &arrA[i]);
    }
    fclose(file);

    printf("\n1K\n");
    start = clock();
    ans = BinarySearch(arrA, SIZEA, val);
    end = clock();
    time = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Best Case for %d = %lf, Ans = %d \n", SIZEA, time, ans);




    if (!(file = fopen("../test/best-10000.txt", "r")))
    {
        printf("ERROR while reading file!!!");
        return 0;
    }
    for (int i = 0; i < SIZEB; i++)
    {
        fscanf(file, "%d", &arrB[i]);
    }
    fclose(file);

    printf("\n10K\n");
    start = clock();
    ans = BinarySearch(arrB, SIZEB, val);
    end = clock();
    time = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Best Case for %d = %lf, Ans = %d \n", SIZEB, time, ans);




    if (!(file = fopen("../test/best-100000.txt", "r")))
    {
        printf("ERROR while reading file!!!");
        return 0;
    }
    for (int i = 0; i < SIZEC; i++)
    {
        fscanf(file, "%d", &arrC[i]);
    }
    fclose(file);

    printf("\n100K\n");
    start = clock();
    ans = BinarySearch(arrC, SIZEC, val);
    end = clock();
    time = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Best Case for %d = %lf, Ans = %d \n", SIZEC, time, ans);

    return 0;
}