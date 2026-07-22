#include <stdio.h>
#define Size 10

int stack[Size];
int top = -1;

void push(int n)
{
    stack[++top] = n;
}

int pop()
{
    return stack[top--];
}

int findNotVisited(int visited[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == 0)
            return i;
    }

    return -1;
}

int main()
{
    int V = 5;
    int adj[5][5] = {
        {0, 1, 1, 0, 0},
        {1, 0, 1, 0, 0},
        {1, 1, 0, 1, 1},
        {0, 1, 0, 0, 0},
        {0, 1, 0, 0, 0}
    };
    int visited[V];

    for (int i = 0; i < V; i++)
    {
        visited[i] = 0;
    }

    int E=0;
    for(int i=0; i<V; i++) {
        for(int j=0; j<V; j++) {
            if(adj[i][j]==1) E++;
        }
    }

    int ans = 0;

    
    int start = 0;

    push(start);
    visited[start] = 1;
    int Branch[V-1][2];
    int Chord[E-V+1][2];

    while (top >= 0)
    {
        int k = pop();

        for (int i = 0; i < V; i++)
        {
            // printf("%d, ", i);
            if (adj[k][i] == 1 && visited[i] == 0)
            {
                push(i);
                visited[i] = 1;
                Branch[i][0]=k;
                Branch[i][1]=i;
            }
        }
    }

    for(int i=0; i<V; i++) {
        for(int j=0; i<V; j++) {
            fi(adj[i][j]==1) {
                for(int k=0; k<V-1; k++) {
                    if(Branch[k][0]==i && Branch[k][1]==j)
                }
            }
        }
    }

    return 0;
}