#include <stdio.h>
#include <time.h>

int powerRecursive(int base, int power)
{
    if (power == 0)
    {
        return 1;
    }
    else
    {
        return base * powerRecursive(base, power - 1);
    }
}

int power(int base, int power)
{
    int ans = 1;

    while (power > 0)
    {
        ans *= base;
        power--;
    }

    return ans;
}

int main()
{
    int b, p;
    clock_t start, end;
    int Ans, AnsOfRecursive;
    double time;
    printf("Enter Base : ");
    scanf("%d", &b);
    printf("Enter Power : ");
    scanf("%d", &p);

    start = clock();
    Ans = power(b, p);
    end = clock();

    time = ((double)(end - start)) / CLOCKS_PER_SEC*1000000;
    printf("Ans = %d, time=%lf\n", Ans, time);

    start = clock();
    AnsOfRecursive = powerRecursive(b, p);
    end = clock();

    time = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Ans = %d, time=%f", AnsOfRecursive, time);

    return 0;
}