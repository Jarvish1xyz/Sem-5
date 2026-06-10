#include<stdio.h>
#include<time.h>

//Time = 0.001
int check(int num) {
    for(int i=2; i<num; i++) {
        if(num%i==0) {
            return 0;
        }
    }
    return 1;
}

void primeRecursive(int num, int i) {
    int c;
    if(num==1) {
        return ;
    }
    else {
        if(num%i==0) {
            if (check(i)) {
                printf("%d ", i);
                num/=i;
            }
        }
        else {
            i++;
        }
        primeRecursive(num, i);
    }
}


void prime(int num) {
    int i=2;

    while(num>1) {
        if(num%i==0) {
            if (check(i)) {
                printf("%d ", i);
                num/=i;
            }
        }
        else {
            i++;
        }
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
    prime(num);
    end = clock();

    time = ((double)(end-start))/CLOCKS_PER_SEC;
    printf("Time=%lf\n", time);

    start = clock();
    primeRecursive(num,2);
    end = clock();

    time = ((double)(end-start))/CLOCKS_PER_SEC;
    
    printf("Time=%lf", time);

    return 0;
}