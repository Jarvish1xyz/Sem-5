#include<stdio.h>
#include<time.h>

int factorialRecursive(int num) {
    if(num==0) {
        return 1;
    }
    else {
        return num*factorialRecursive(num-1);
    }
}

int factorial(int num) {
    int ans=1;

    while(num>0) {
        ans*=num;
        num--;
    }

    return ans;
}

int main() {
    int num;
    clock_t start, end;
    int Ans, AnsOfRecursive;
    double time;
    printf("Enter number : ");
    scanf("%d", &num);

    start = clock();
    Ans=factorial(num);
    end = clock();
    time = ((double)(end-start))/CLOCKS_PER_SEC;
    printf("Ans = %d, time=%f\n", Ans, time);

    start = clock();
    AnsOfRecursive=factorialRecursive(num);
    end = clock();

    time = ((double)(end-start))/CLOCKS_PER_SEC;
    
    printf("Ans = %d, time=%f", AnsOfRecursive, time);

    return 0;
}