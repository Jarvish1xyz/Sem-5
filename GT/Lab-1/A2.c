#include <stdio.h>

int main()
{
    int V = 5, E = 0;
    printf("Enter the Vertices (V): ");
    scanf("%d", &V);
    printf("Enter the count of Edges (E): ");
    scanf("%d", &E);

    int edges[E][2];
    int adj[V][V];

    printf("Enter edges array:\n");
    for (int i = 0; i < E; i++)
    {
        printf("Enter vertices pair of edge %d ( u, v ): ", i + 1);
        scanf("%d %d", &edges[i][0], &edges[i][1]);
    }

    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            adj[i][j] = 0;
        }
    }

    for (int i = 0; i < E; i++)
    {
        adj[edges[i][0]][edges[i][1]] = 1;
        adj[edges[i][1]][edges[i][0]] = 1;
    }
    printf("\n");
    printf("1. Adjacency Matrix:\n");

    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            printf("%d ", adj[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("2. Adjacency List:\n");

    for (int i = 0; i < V; i++)
    {
        printf("%d -> ", i);
        for (int j = 0; j < E; j++)
        {
            if (edges[j][0] == i)
            {
                printf("%d ", edges[j][1]);
            }
        }
        printf("\n");
    }
    printf("\n");
    printf("3. Degree of vertices:\n");

    for (int i = 0; i < V; i++)
    {
        int deg = 0;
        for (int j = 0; j < E; j++)
        {
            if (edges[j][0] == i)
                deg++;
            if (edges[j][1] == i)
                deg++;
        }
        printf("Degree of vertices %d is %d\n", i, deg);
    }
    printf("\n");
    printf("4. Type of Graph:\n");
    
    int s = 1, cm = 1;
    for (int i = 0; i < E - 1; i++)
    {
        for (int j = i + 1; j < E; j++)
        {
            if (edges[i][0] == edges[j][0] && edges[i][1] == edges[j][1])
            {
                s = 0;
                break;
            };
        }
    }
    if (s)
    {
        for (int i = 0; i < V; i++)
        {
            int deg = 0;
            for (int j = 0; j < E; j++)
            {
                if (edges[j][0] == i)
                    deg++;
                if (edges[j][1] == i)
                    deg++;
            }
            if(deg!=V-1) {
                cm=0;
                break;
            }
        }
    }

    if(s && cm) {
        printf("The Graph is Simple and Complete\n");
    }
    else if(s) {
        printf("The Graph is Simple\n");
    }
    else {
        printf("The Graph is neither Simple nor Complete\n");
    }
    printf("\n");
    printf("4. Type of Graph:\n");

    printf("Vertices = %d\n", V);
    printf("Edges = %d\n", E);
    return 0;
}