#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define V 6

int minDist(int dist[], int visited[])
{
    int min = INT_MAX;
    int minIndex = -1;

    for (int i = 0; i < V; i++)
    {
        if (!visited[i] && dist[i] < min)
        {
            min = dist[i];
            minIndex = i;
        }
    }

    return minIndex;
}

void dijkstra(int graph[V][V])
{
    int dist[V];
    int visited[V];
    int totalDist = 0;

    for (int i = 0; i < V; i++)
    {
        dist[i] = INT_MAX;
        visited[i] = 0;
    }

    dist[0] = 0;

    for (int i = 0; i < V; i++)
    {
        int u = minDist(dist, visited);
        visited[u] = 1;
        totalDist += dist[u];

        for (int v = 0; v < V; v++)
        {
            if (graph[u][v] != 0 && !visited[v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v])
            {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    printf("Total Dist = %d\n", totalDist);
}

int main()
{

    int graph[V][V] = {
        {0, 4, 0, 0, 0, 8},
        {4, 0, 8, 0, 0, 11},
        {0, 8, 0, 7, 0, 4},
        {0, 0, 7, 0, 9, 14},
        {0, 0, 0, 9, 0, 10},
        {8, 11, 4, 14, 10, 0}};

    dijkstra(graph);

    return 0;
}