#include<stdio.h>

int main() {

    int V = 5;
    int adj[5][5] = {{0,1,1,0,0},{1,0,1,0,0},{1,1,0,1,1},{0,1,0,0,0},{0,1,0,0,0}};
    int degree[V];


    for(int i=0; i<V; i++) {
        degree[i] = 0;
        for(int j=0; j<V; j++) {
            degree[i] +=adj[i][j];
        }
    }

    printf("1. Identify all pendent (leaf) vertices.\n");
    for(int i=0; i<V; i++) {
        if(degree[i]==1) {
            printf("%d, ", i+1);
        }
    }
    printf("\n\n");
    

    printf("2. Find the degree of each vertex.\n");
    for(int i=0; i<V; i++) {
        printf("Degree of vertex %d is %d\n", i, degree[i]);
    }

    return 0;
}