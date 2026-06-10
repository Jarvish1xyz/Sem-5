#include<stdio.h>
#include<time.h>

//Time = 0.001

void fibonacciRecursive(int num, int a, int b) {
    int c;
    if(num==0) {
        return ;
    }
    else {
        printf("%d ", a);
        c=a+b;
        a=b;
        b=c;
        fibonacciRecursive(num-1, a, b);
    }
}

void fibonacci(int num) {

    int a=0,b,c;

    for(int i=0; i<num; i++) {
        if(i==0) b=1;
        printf("%d ", a);
        c=a+b;
        a=b;
        b=c;
    }

}

int main() {
    int num;
    clock_t start, end;
    int Ans, AnsOfRecursive;
    double time;
    printf("Enter number : ");
    scanf("%d", &num);

    start = clock();
    fibonacci(num);
    end = clock();

    time = ((double)(end-start))/CLOCKS_PER_SEC;
    printf("Time=%lf\n", time);

    start = clock();
    fibonacciRecursive(num,0,1);
    end = clock();

    time = ((double)(end-start))/CLOCKS_PER_SEC;
    
    printf("Time=%lf", time);

    return 0;
}