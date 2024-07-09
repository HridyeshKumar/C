//Minimum Spanning Tree using Prim's, Kruskal's, and Dijkstra's Algorithm
#include <stdio.h>
#include <limits.h>
#define MAX 100
int n; // Number of vertices in the graph
int adj[MAX][MAX]; // Adjacency matrix
void create_graph() {
int i, max_edges, origin, destin, weight;
printf("Enter number of vertices : ");
scanf("%d", &n);
max_edges = n * (n - 1) / 2;
for(i = 1; i <= max_edges; i++) {
printf("Enter edge %d(-1 -1 to quit): ", i);
scanf("%d %d %d", &origin, &destin, &weight);
if((origin == -1) && (destin == -1))
break;
if(origin >= n || destin >= n || origin < 0 || destin < 0) {
printf("Invalid edge!\n");
i--;
} else {
adj[origin][destin] = weight;
adj[destin][origin] = weight;
}
}
}
int minKey(int key[], int mstSet[]) {
int min = INT_MAX, min_index;
for (int v = 0; v < n; v++)
if (mstSet[v] == 0 && key[v] < min)
min = key[v], min_index = v;
return min_index;
}
void printMST(int parent[], int n, int graph[MAX][MAX]) {
printf("Edge \tWeight\n");
for (int i = 1; i < n; i++)
printf("%d - %d \t%d \n", parent[i], i, graph[i][parent[i]]);
}
void primMST(int graph[MAX][MAX]) {
int parent[MAX];
int key[MAX];
int mstSet[MAX];
for (int i = 0; i < n; i++)
key[i] = INT_MAX, mstSet[i] = 0;
key[0] = 0;
parent[0] = -1;
for (int count = 0; count < n-1; count++) {
int u = minKey(key, mstSet);
mstSet[u] = 1;
for (int v = 0; v < n; v++)
if (graph[u][v] && mstSet[v] == 0 && graph[u][v] < key[v])
parent[v] = u, key[v] = graph[u][v];
}
printMST(parent, n, graph);
}
int main() {
create_graph();
primMST(adj);
return 0;
}
