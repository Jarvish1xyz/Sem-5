#include <stdio.h>
#define Size 10

int stack[Size];
int top = -1;

// dfs(star){
//     if visit[start]==0
//         vis++;

        
// loop
//         if adj[start][i]==1 && visited[i]==0
//         dfs(i)
//         true

// }

// in()
// {
//     int V = 5;
//     adj[]
//     int visited[V];
//     str=0

//     dfs(str);
    

//     return 0;
// }


void push(int n) {
    stack[++top]=n;
}

int pop() {
    return stack[top--];
}

int main() {
    int V=5;
    int adj[5][5] = {{0,1,1,0,0},{1,0,1,0,0},{1,1,0,1,1},{0,1,0,0,0},{0,1,0,0,0}};
    int visited[V];

    for(int i=0; i<V; i++) {
        visited[i]=0;
    }

    int start = 0;

    push(start);
    visited[start]=1;

    while(top>=0) {
        int k = pop();
        printf("%d, ", k);

        for(int i=0; i<V; i++) {
            // printf("%d, ", i);
            if(adj[k][i]==1 && visited[i]==0) {
                push(i);
                visited[i]=1;
                
            }
        }
    }

    return 0;
}