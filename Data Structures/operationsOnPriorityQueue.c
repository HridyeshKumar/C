//Operations on Priority Queue
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
typedef struct {
int data;
int priority;
} Element;
Element pq[MAX];
int size = 0;
void insert(int data, int priority) {
if(size == MAX) {
printf("Priority Queue is full\n");
return;
}
pq[size].data = data;
pq[size].priority = priority;
size++;
}
void delete() {
if(size == 0) {
printf("Priority Queue is empty\n");
return;
}
int i, highestPriorityIndex = 0;
for(i = 1; i < size; i++) {
if(pq[i].priority > pq[highestPriorityIndex].priority)
highestPriorityIndex = i;
}
printf("Deleted element: %d\n", pq[highestPriorityIndex].data);
for(i = highestPriorityIndex; i < size - 1; i++)
pq[i] = pq[i + 1];
size--;
}
void display() {
if(size == 0) {
printf("Priority Queue is empty\n");
return;
}
printf("Priority Queue contains:\n");
for(int i = 0; i < size; i++)
printf("%d - %d\n", pq[i].data, pq[i].priority);
}
int main() {
insert(4, 1);
insert(3, 3);
insert(5, 2);
insert(2, 4);
display();
delete();
display();
return 0;
}
