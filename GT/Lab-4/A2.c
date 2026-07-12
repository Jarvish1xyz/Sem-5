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

int main()
{

    int V = 5;
    int adj[5][5] = {{0, 1, 1, 0, 0}, {1, 0, 1, 0, 0}, {1, 1, 0, 1, 1}, {0, 1, 0, 0, 0}, {0, 1, 0, 0, 0}};
    int dist[V][V];
    int visited[V];
    int eccentricity[V];
    int center;

    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            dist[i][j] = 0;
        }

    }

    for (int start = 0; start < V; start++)
    {
        for(int i=0; i<V; i++) {
            visited[i]=0;
        }
        push(start);
        visited[start]=1;

        while (top >= 0)
        {
            int current = pop();
            // printf("%d, ", current);

            for (int i = 0; i < V; i++)
            {
                // printf("%d, ", i);
                if (adj[current][i] == 1 && visited[i] == 0)
                {
                    push(i);
                    visited[i] = 1;
                    dist[start][i] = dist[start][current] + 1;
                }
            }
        }
    }


    printf("3. Find distance between vertices.\n");
    for(int i=0; i<V; i++) {
        for(int j=0; j<V; j++) {
            printf("%d ", dist[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    for(int i=0; i<V; i++) {
        int max=dist[i][0];

        for(int j=0; j<V; j++) {
            if(max<dist[i][j]) max=dist[i][j];
        }
        eccentricity[i]=max;
    }

    printf("4. Find eccentricity of each vertex.\n");
    for(int i=0; i<V; i++) {
        printf("%d ", eccentricity[i]);
    }
    printf("\n");
    
    int min = eccentricity[0];
    for(int i=0; i<V; i++) {
        if(min>eccentricity[i]) {
            min=eccentricity[i];
            center=i;
        }
    }
    printf("\n");
    

    printf("5. Find the center of the tree.\n");
    printf("Center = %d", center);


    return 0;
}