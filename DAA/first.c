#include<stdio.h>
#include<time.h>

int main() {
    int num;
    clock_t start, end;
    printf("Enter number : ");
    scanf("%d", &num);

    int ans=1;

    start = clock();
    while(num>0) {
        ans*=num;
        num--;
    }
    end = clock();

    double time = ((double)(end-start))/CLOCKS_PER_SEC;
    
    printf("Ans = %d, time=%f", ans, time);

    return 0;
}