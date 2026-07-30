#include<stdio.h>

int main() {
    int size;
    printf("Enter Size : ");
    scanf("%d", &size);

    int arr[size];
    int pos=0, neg=0;

    for(int i=0; i<size; i++) {
        printf("Enter element-%d : ", i+1);
        scanf("%d", &arr[i]);
        if(arr[i]<0) neg++;
        else pos++;
    }

    int posArr[pos], negArr[neg];
    int p=0, n=0;

    for(int i=0; i<size; i++) {
        if(arr[i]>0) posArr[p++]=arr[i];
        else negArr[n++]=arr[i];
    }

    p=0,n=0;
    for(int i=0; i<size; ) {
        if(p<pos && n<neg) {
            arr[i++]=posArr[p++];
            arr[i++]=negArr[n++];
        }
        else if(p>=pos){
            arr[i++]=negArr[n++];
        }
        else {
            arr[i++]=posArr[p++];
        }
    }

    for(int i=0; i<size; i++) {
        printf("%d, ", arr[i]);
    }

    return 0;
}