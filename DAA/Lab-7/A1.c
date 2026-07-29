#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define V 4

int minWeight(int weight[], int visited[]) {
    int min = INT_MAX;
    int minIndex=-1;

    for(int i=0; i<V; i++) {
        if(!visited[i] && weight[i]<min) {
            min=weight[i];
            minIndex=i;
        }
    }

    return minIndex;
}

void printMST(int graph[V][V]) {
    int weight[V];
    int visited[V];
    int totalWeight=0;

    for(int i=0; i<V; i++) {
        weight[i]=INT_MAX;
        visited[i]=0;
    }

    weight[0]=0;

    for(int i=0; i<V; i++) {
        int u=minWeight(weight, visited);
        visited[u]=1;
        totalWeight+=weight[u];

        for(int v=0; v<V; v++) {
            if(graph[u][v]!=0 && !visited[v] && graph[u][v]<weight[v]) {
                weight[v]=graph[u][v];
            }
        }
    }

    printf("Total Weight = %d\n", totalWeight);
}

int main() {

    int graph[V][V] = {
        {0,3,4,0},
        {3,0,5,7},
        {4,5,0,9},
        {0,7,9,0}
    };

    printMST(graph);

    return 0;
}