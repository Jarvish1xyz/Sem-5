#include<stdio.h>
#include<time.h>

int countRecursive(int num) {
    if(num==0) {
        return 0;
    }
    else {
        return 1+countRecursive(num/10);
    }
}

int count(int num) {
    int ans=0;

    while(num>0) {
        ans++;
        num/=10;
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
    Ans=count(num);
    end = clock();

    time = ((double)(end-start))/CLOCKS_PER_SEC;
    printf("Ans = %d, time=%f\n", Ans, time);

    start = clock();
    AnsOfRecursive=countRecursive(num);
    end = clock();

    time = ((double)(end-start))/CLOCKS_PER_SEC;
    
    printf("Ans = %d, time=%f", AnsOfRecursive, time);

    return 0;
}