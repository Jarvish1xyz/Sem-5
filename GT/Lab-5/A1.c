#include <stdio.h>
#define Size 10

int stack[Size];
int top = -1;

void push(int n) {
    stack[++top]=n;
}

int pop() {
    return stack[top--];
}

int findNotVisited (int visited[], int n) {
    for(int i=0; i<n; i++) {
        if(visited[i]==0) return i;
    }

    return -1;
}

int main() {
    int V=7;
    int adj[7][7] = {
        {1,1,0,0,0,0,0},
        {1,1,1,1,0,0,0},
        {0,1,1,0,0,0,0},
        {0,1,0,1,0,0,0},
        {0,0,0,0,1,1,0},
        {0,0,0,0,1,1,0},
        {0,0,0,0,0,0,1}
    };
    int visited[V];

    for(int i=0; i<V; i++) {
        visited[i]=0;
    }

    int ans=0;

    while(1) {
        if(findNotVisited(visited, V)==-1) break;
        int start = findNotVisited(visited, V);

        push(start);
        visited[start]=1;
    
    
        while(top>=0) {
            int k = pop();
    
            for(int i=0; i<V; i++) {
                // printf("%d, ", i);
                if(adj[k][i]==1 && visited[i]==0) {
                    push(i);
                    visited[i]=1;
                    
                }
            }
        }
        ans++;
    }

    printf("Total Friend Groups : %d", ans);


    return 0;
}