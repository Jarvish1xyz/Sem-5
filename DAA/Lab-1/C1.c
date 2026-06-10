#include<stdio.h>
#include<time.h>

//Time = 0.001

int maxAbs(int n, int m) {
    int s=1;
    if (n<0) {
        s*=-1;
        n*=-1;
    }

    int left, right;

    for(int i=0; i<(n+m); i++) {
        if(i%m==0) {
            if(i<n) left=i;
            else right=i;
        }
    }

    return (n-left<right-n) ? left*s : right*s;
}

int maxAbsO1(int n, int m) {
    int s=-1;
    if (n<0) {
        s=1;
    }

    
    return (n+((n%m)*s));

}

int main() {
    int n,m;
    clock_t start, end;
    int Ans, AnsOfRecursive;
    double time;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("Enter m : ");
    scanf("%d", &m);

    start = clock();
    Ans =maxAbs(n,m);
    end = clock();

    time = ((double)(end-start))/CLOCKS_PER_SEC;
    printf("Ans=%d Time=%lf\n", Ans, time);

    start = clock();
    AnsOfRecursive = maxAbsO1(n,m);
    end = clock();

    time = ((double)(end-start))/CLOCKS_PER_SEC;
    printf("Ans=%d Time=%lf\n", AnsOfRecursive, time);

    return 0;
}