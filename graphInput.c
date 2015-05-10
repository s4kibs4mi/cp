#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int nodes,edges,i,j;
    printf("Enter Nodes : ");
    scanf("%d", &nodes);
    
    int graph[nodes][nodes];
    memset(graph,0,sizeof(graph));
    
    printf("Enter Edges : ");
    scanf("%d", &edges);
    
    for (i = 0; i < edges; i++) {
        int x,y;
        scanf("%d %d", &x, &y);
        graph[x - 1][y - 1] = 1;
        graph[y - 1][x - 1] = 1;
    }
    
    for (i = 0 ; i < nodes; i++) {
        for (j = 0; j < nodes; j++) {
            printf("%d", graph[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
