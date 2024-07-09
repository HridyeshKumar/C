//DFS & BFS Graph Traversals
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int adj[MAX][MAX];
int visited[MAX];
int n; // number of vertices
void create_graph() {
int i, max_edges, origin, destin;
printf("Enter number of vertices : ");
scanf("%d", &n);
max_edges = n * (n - 1);
for(i = 1; i <= max_edges; i++) {
printf("Enter edge %d(-1 -1 to quit): ", i);
scanf("%d %d", &origin, &destin);
if((origin == -1) && (destin == -1))
break;
if(origin >= n || destin >= n || origin < 0 || destin < 0) {
printf("Invalid edge!\n");
i--;
} else {
adj[origin][destin] = 1;
}
}
}
void bfs(int v) {
int i, front = 0, rear = 0;
int queue[MAX];
visited[v] = 1;
queue[rear] = v; // enqueue
while(front <= rear) {
v = queue[front]; // dequeue
printf("%d ", v);
front++;
for(i = 0; i < n; i++) {
if(adj[v][i] == 1 && visited[i] == 0) {
queue[++rear] = i;
visited[i] = 1;
}
}
}
}
void dfs(int v) {
int i;
visited[v] = 1;
printf("%d ", v);
for(i = 0; i < n; i++) {
if(adj[v][i] == 1 && visited[i] == 0)
dfs(i);
}
}
int main() {
int i, v, choice;
create_graph();
while(1) {
printf("\n1.BFS\n2.DFS\n3.Exit\n");
printf("Enter your choice : ");
scanf("%d", &choice);
switch(choice) {
case 1:
printf("Enter starting vertex for BFS: ");
scanf("%d", &v);
for(i = 0; i < n; i++)
visited[i] = 0;
printf("BFS starting from vertex %d is: ", v);
bfs(v);
break;
case 2:
printf("Enter starting vertex for DFS: ");
scanf("%d", &v);
for(i = 0; i < n; i++)
visited[i] = 0;
printf("DFS starting from vertex %d is: ", v);
dfs(v);
break;
case 3:
exit(0);
default:
printf("Wrong choice\n");
break;
}
}
return 0;
}
