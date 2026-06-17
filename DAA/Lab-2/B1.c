#include<stdio.h>

int main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    int arr[n];
    int pos=0, neg=0;

    for(int i=0; i<n; i++) {
        printf("Enter element-%d", i+1);
        scanf("%d", &arr[i]);
        if(arr[i]<0) neg++;
        else pos++;
    }

    int posArr[pos], negArr[neg];
    int p=0, n=0;

    for(int i=0; i<pos; i++) {
        
    }
}