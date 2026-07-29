#include <stdio.h>
#define Size 10

int stack[Size];
int top = -1;

int adj[5][5] = {
        {0, 1, 0, 0, 0},
        {1, 0, 1, 1, 0},
        {0, 1, 0, 0, 0},
        {0, 1, 0, 0, 1},
        {0, 0, 0, 1, 0}
    };

void push(int n) {
    stack[++top]=n;
}

int pop() {
    return stack[top--];
}

int checkDFS(int* visited,int V, int start, int vertex) {
    top=-1;
    push(start);
    visited[start]=1;


    // for(int i=0; i<V; i++) {
    //     printf("%d ", visited[i]);
    // }

    while(top>=0) {
        int k = pop();
        
        for(int i=0; i<V; i++) {
            // printf("%d, ", i);
            if(vertex!=i && (adj[k][i]==1 && visited[i]==0)) {
                push(i);
                visited[i]=1;
            }
            // else {
            //     push(k);
            // }
        }
    }

    // for(int i=0; i<V; i++) {
    //     printf("%d ", visited[i]);
    // }
    
    // printf("\n\n");
    for(int i=0; i<V; i++) {
        if(vertex!=i && visited[i]==0) return vertex;
    }

    return -1;
}

int main() {
    int V=5;
    int visited[V];
    int ans;

    for(int i=1; i<V; i++) {
        for(int i=0; i<V; i++) {
            visited[i]=0;
        }
        // visited[i]=-1;
        ans = checkDFS(visited, V, 0, i);
        if(ans!=-1) {
            printf("%d, ", ans);
        }
    }
    
    


    return 0;
}