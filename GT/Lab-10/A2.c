#include <stdio.h>

#define E 5
#define V 6

int edges[E][2] = {
    {0, 3},
    {0, 4},
    {1, 4},
    {1, 5},
    {2, 5}
};

int combinations[32][E] = {
    {-1,-1,-1,-1,-1},

    {0,-1,-1,-1,-1},
    {1,-1,-1,-1,-1},
    {2,-1,-1,-1,-1},
    {3,-1,-1,-1,-1},
    {4,-1,-1,-1,-1},

    {0,1,-1,-1,-1},
    {0,2,-1,-1,-1},
    {0,3,-1,-1,-1},
    {0,4,-1,-1,-1},
    {1,2,-1,-1,-1},
    {1,3,-1,-1,-1},
    {1,4,-1,-1,-1},
    {2,3,-1,-1,-1},
    {2,4,-1,-1,-1},
    {3,4,-1,-1,-1},

    {0,1,2,-1,-1},
    {0,1,3,-1,-1},
    {0,1,4,-1,-1},
    {0,2,3,-1,-1},
    {0,2,4,-1,-1},
    {0,3,4,-1,-1},
    {1,2,3,-1,-1},
    {1,2,4,-1,-1},
    {1,3,4,-1,-1},
    {2,3,4,-1,-1},

    {0,1,2,3,-1},
    {0,1,2,4,-1},
    {0,1,3,4,-1},
    {0,2,3,4,-1},
    {1,2,3,4,-1},

    {0,1,2,3,4}
};

int arr[32];
int p = 0;

void printMatching(int index)
{
    int j;

    printf("{ ");

    for(j = 0; j < E; j++)
    {
        if(combinations[index][j] != -1)
        {
            printf("%d ", combinations[index][j]);
        }
    }

    printf("}");
}

void findMatching()
{
    int i, j, k;
    int x, start, end;
    int flag=0;
    int freq[V];

    //code for Find Matching
    for(i=0; i<32; i++) {
        flag=0;
        for(k=0; k<V; k++) {
            freq[k]=0;
        }
        for(j=0; j<E; j++) {
            if(combinations[i][j]!=-1) {
                start = edges[combinations[i][j]][0];
                end = edges[combinations[i][j]][1];

                freq[start]++;
                freq[end]++;
            }
        }
        for(k=0; k<V; k++) {
            if(freq[k]>1) {
                flag=1;
                break;
            }
        }
        if(!flag) {
            arr[p++]=i;
            printMatching(i);
        }
    }
}

void findMaximalMatching()
{
    int i, j, e;
    int index;
    int edgeIndex;
    int start, end;
    int freq[V];
    int maximal;

    //code for Find Maximal Matching
    //0,3 1,4
    for(i=0; i<p; i++) {
        maximal=1;
        for(e=0; e<V; e++) {
            freq[e]=0;
        }
        for(j=0; j<E;j++) {
            if(combinations[arr[i]][j]!=-1) {
                start = edges[combinations[arr[i]][j]][0];
                end = edges[combinations[arr[i]][j]][1];
                
                freq[start]++;
                freq[end]++;
            }
        }
        for(int k=0; k<E; k++) {
            start = edges[k][0];
            end = edges[k][1];

            if(freq[start]==0 && freq[end]==0) {
                maximal=0;
                break;
            }
        }
        if(maximal) {
            printMatching(arr[i]);
        }
    }
}

void findMaximumMatching()
{
    int i, j, e;
    int index;
    int edgeIndex;
    int start, end;
    int freq[V];
    int maximal;
    int count=0;

    for(i=0; i<p; i++) {
        maximal=1;
        int c=0;
        for(e=0; e<V; e++) {
            freq[e]=0;
        }
        for(j=0; j<E;j++) {
            if(combinations[arr[i]][j]!=-1) {
                start = edges[combinations[arr[i]][j]][0];
                end = edges[combinations[arr[i]][j]][1];
                
                freq[start]++;
                freq[end]++;
                c++;
            }
        }
        if(c>count) count=c;
        for(int k=0; k<E; k++) {
            start = edges[k][0];
            end = edges[k][1];

            if(freq[start]==0 && freq[end]==0) {
                maximal=0;
                break;
            }
        }
    }
    for(int i=0; i<p; i++) {
        int tempc=0;
        for(int j=0; j<E; j++) {
            if(combinations[arr[i]][j]!=-1) {
                tempc++;
            }
        }
        if(tempc==count) {
            printMatching(arr[i]);
        }
    }
}

void findPerfectMatching() {
    int i, j, e;
    int index;
    int edgeIndex;
    int start, end;
    int freq[V];
    int maximal;
    int count=0;

    for(i=0; i<p; i++) {
        maximal=1;
        int c=0;
        for(e=0; e<V; e++) {
            freq[e]=0;
        }
        for(j=0; j<E;j++) {
            if(combinations[arr[i]][j]!=-1) {
                start = edges[combinations[arr[i]][j]][0];
                end = edges[combinations[arr[i]][j]][1];
                
                freq[start]++;
                freq[end]++;
                c++;
            }
        }
        if(c>count) count=c;
        for(int k=0; k<E; k++) {
            start = edges[k][0];
            end = edges[k][1];

            if(freq[start]==0 && freq[end]==0) {
                maximal=0;
                break;
            }
        }
    }
    for(int i=0; i<p; i++) {
        int tempc=0;
        for(e=0; e<V; e++) {
            freq[e]=0;
        }
        for(int j=0; j<E; j++) {
            if(combinations[arr[i]][j]!=-1) {
                start = edges[combinations[arr[i]][j]][0];
                end = edges[combinations[arr[i]][j]][1];
                
                freq[start]++;
                freq[end]++;
                tempc++;
            }
        }
        if(tempc==count) {
            tempc=0;
            for(int i=0; i<V; i++) {
                if(freq[i]>0) {
                    tempc++;
                }
            }
            if(tempc==V) printMatching(arr[i]);
        }
    }
}

void main()
{
    findMatching();
    printf("\n");
    printf("\n");
    findMaximalMatching();
    printf("\n");
    printf("\n");
    findMaximumMatching();
    printf("\n");
    printf("\n");
    findPerfectMatching();
}