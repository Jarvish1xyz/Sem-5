#include <stdio.h>
#define Size 10

int stack[Size];
int top = -1;

int adj[6][6] = {
    {0, 1, 1, 0, 0, 0},
    {1, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 0},
    {0, 1, 0, 0, 1, 1},
    {0, 0, 1, 1, 0, 1},
    {0, 0, 0, 1, 1, 0},
};

void push(int n)
{
    stack[++top] = n;
}

int pop()
{
    return stack[top--];
}



int main() {
    

    return 0;
}