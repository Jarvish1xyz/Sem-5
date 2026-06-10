#include<stdio.h>
#include<time.h>

int sumRecursive(int num) {
    if(num==0 || num==1) {
        return num;
    }
    else {
        return num+sumRecursive(num-1);
    }
}

int sum(int num) {
    int ans=0;

    while(num>0) {
        ans+=num;
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
    Ans=sum(num);
    end = clock();

    time = ((double)(end-start))/CLOCKS_PER_SEC;
    printf("Ans = %d, time=%f\n", Ans, time);

    start = clock();
    AnsOfRecursive=sumRecursive(num);
    end = clock();

    time = ((double)(end-start))/CLOCKS_PER_SEC;
    
    printf("Ans = %d, time=%f", AnsOfRecursive, time);

    return 0;
}