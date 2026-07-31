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

int checkDFS(int adjTemp[6][6], int *visited, int V, int start)
{
    top = -1;
    push(start);
    visited[start] = 1;

    while (top >= 0)
    {
        int k = pop();

        for (int i = 0; i < V; i++)
        {
            if (adjTemp[k][i] == 1 && visited[i] == 0)
            {
                push(i);
                visited[i] = 1;
            }
        }
    }

    // printf("Visited \n");
    // for (int i = 0; i < V; i++)
    // {
    //     printf("%d ", visited[i]);
    // }
    // printf("\n");

    for (int i = 0; i < V; i++)
    {
        if (visited[i] == 0)
            return 1;
    }

    return 0;
}

int main()
{
    int visited[6];
    int ans;
    int branch[5][2] = {
        {0, 1},
        {1, 2},
        {2, 4},
        {4, 3},
        {3, 5}};
    int comb[8][3][2] = {
        {{-1, -1}, {-1, -1}, {-1, -1}},
        {{0, 2}, {-1, -1}, {-1, -1}},
        {{1, 3}, {-1, -1}, {-1, -1}},
        {{4, 5}, {-1, -1}, {-1, -1}},
        {{0, 2}, {1, 3}, {-1, -1}},
        {{1, 3}, {4, 5}, {-1, -1}},
        {{4, 5}, {0, 2}, {-1, -1}},
        {{0, 2}, {1, 3}, {4, 5}},
    };

    int sizeOfCord[8] = {0, 1, 1, 1, 2, 2, 2, 3};

    for (int i = 0; i < 5; i++)
    { 
        int x = branch[i][0];
        int y = branch[i][1];
        for (int j = 0; j < 8; j++)
        {
            for (int i = 0; i < 6; i++)
            {
                visited[i] = 0;
            }
            int adjTemp[6][6];
            for (int k = 0; k < 6; k++)
            {
                for (int l = 0; l < 6; l++)
                {
                    adjTemp[k][l] = adj[k][l];
                }
            }

            adjTemp[x][y] = 0;
            adjTemp[y][x] = 0;

            for (int k = 0; k < sizeOfCord[j]; k++)
            {
                adjTemp[comb[j][k][0]][comb[j][k][1]] = 0;
                adjTemp[comb[j][k][1]][comb[j][k][0]] = 0;
            }

            ans = checkDFS(adjTemp, visited, 6, 0);
            if (ans)
            {
                printf("{ %d, %d }", x, y);
                for (int k = 0; k < sizeOfCord[j]; k++)
                {
                    printf(" - { %d, %d }", comb[j][k][0], comb[j][k][1]);
                }
                printf("\n");
                break;
            }
        }
    }

    return 0;
}