#include<stdio.h>
#include<time.h>
#define SIZEC 100000

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function
int partition(int arr[], int low, int high)
{
    int pivot = arr[low]; // Choosing the first element as pivot
    int i = low;
    int j = high;

    while (i < j)
    {
        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }
        while (arr[j] > pivot && j >= low + 1)
        {
            j--;
        }
        if (i < j)
        {
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[low], &arr[j]);
    return j;
}

// QuickSort function
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high); // Partition index
        quickSort(arr, low, pi - 1);        // Recursively sort left sub-array
        quickSort(arr, pi + 1, high);       // Recursively sort right sub-array
    }
}

int main() {

    clock_t start, end;
    double time;
    int arrC[SIZEC];

    for(int i=0; i<SIZEC ; i++) {
        arrC[i]=i;
    }

    printf("\n100K\n");
    start = clock();
    quickSort(arrC, 0, SIZEC-1);
    end = clock();
    time = (double)(end-start)/CLOCKS_PER_SEC;
    printf("Best Case for %d = %lf \n", SIZEC, time);
}