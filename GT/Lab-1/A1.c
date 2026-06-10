#include <stdio.h>

int main()
{
    int V=5,E=0;
    printf("Enter the Vertices (V): ");
    scanf("%d", &V);
    printf("Enter the count of Edges (E): ");
    scanf("%d", &E);

    int edges[E][2];

    for(int i=0; i<E; i++) {
        printf("Enter vertices pair of edge %d ( u, v ): ", i+1);
        scanf("%d %d", &edges[i][0], &edges[i][1]);
    }
    // [
    //     [0,1],
    //     [1,2],
    //     [2,0]
    // ]

    for(int i=0; i<V; i++) {
        printf("%d -> ", i);
        for(int j=0; j<E; j++) {
            if(edges[j][0]==i) {
                printf("%d ", edges[j][1]);
            }
        }
        printf("\n");
    }

    return 0;
}