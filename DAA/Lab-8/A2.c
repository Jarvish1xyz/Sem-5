#include<stdio.h>

void sortByValue(int weight[], int value[], int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++){
            if(value[j]<value[j+1]) {
                int temp = value[j];
                value[j]=value[j+1];
                value[j+1]=temp;

                temp=weight[j];
                weight[j]=weight[j+1];
                weight[j+1]=temp;
            }
        }
    }
}

void sortByWeight(int weight[], int value[], int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++){
            if(weight[j]>weight[j+1]) {
                int temp = value[j];
                value[j]=value[j+1];
                value[j+1]=temp;

                temp=weight[j];
                weight[j]=weight[j+1];
                weight[j+1]=temp;
            }
        }
    }
}

void sortByRatio(int weight[], int value[], float ratio[], int n) {
    for(int i=0; i<n; i++) {
        ratio[i]=value[i]*1.0/weight[i];
    }
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++){
            if(ratio[j]<ratio[j+1]) {
                int temp = value[j];
                value[j]=value[j+1];
                value[j+1]=temp;

                temp=weight[j];
                weight[j]=weight[j+1];
                weight[j+1]=temp;
                
                temp=ratio[j];
                ratio[j]=ratio[j+1];
                ratio[j+1]=temp;
            }
        }
    }
}

void coumput(int weight[], int value[], float x[], int n, int w, float* ans) {
    
    int currentWeight=0;
    for(int i=0; i<n; i++) {
        x[i]=0;
    }
    float result = 0.0;

    for(int i=0; i<n; i++) {
        if(currentWeight + weight[i] <=w) {
            x[i]=1.0;
            currentWeight+=weight[i];
            result+=value[i]*x[i];
        }
        else {
            x[i]=(w-currentWeight)*1.0/weight[i];
            currentWeight=w;
            result+=value[i]*x[i];
            break;
        }
    }

    printf("Result = %.2f\n", result);

    *ans=result;
}

int main() {

    int n=5;
    int value[5]={40,70,90,60,50};
    int weight[5]={5,10,15,8,6};
    int w=20;
    float ratio[5];
    float ansForRatio;

    float x[5];

    //By Value
    sortByValue(weight, value, n);
    coumput(weight, value, x, n, w, &ansForRatio);
    int resultByValue = (int)ansForRatio;
    printf("ResultByValue = %d\n", resultByValue);
    
    sortByWeight(weight, value, n);
    coumput(weight, value, x, n, w, &ansForRatio);
    int resultByWeight = (int)ansForRatio;
    printf("ResultByWeight = %d\n", resultByWeight);
    
    
    sortByRatio(weight, value, ratio, n);
    coumput(weight, value, x, n, w, &ansForRatio);
    float resultByRatio = ansForRatio;
    printf("ResultByRatio = %.2f\n", resultByRatio);
}