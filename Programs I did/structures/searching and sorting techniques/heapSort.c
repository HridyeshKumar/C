#include<stdio.h>
#include<limits.h>
int heap[1000000],heapsize;
void Init(){
    heapsize=0;
    heap[0]=-INT_MAX;
}
void Insert(int element){
    heapsize++;
    heap[heapsize]=element;/*Insert in the last place*/
    /*Adjust its position*/
    int now=heapsize;
    while(heap[now/2]>element){
        heap[now]=heap[now/2];
        now/=2;
    }
    heap[now]=element;
}
int DeleteMin(){
    int minElement,lastElement,child,now;
    minElement=heap[1];
    lastElement=heap[heapsize--];
    for(now=1;now*2<=heapsize;now=child){
        child=now*2;
        if(child!=heapsize && heap[child+1]<heap[child]){
            child++;
        }    
        if(lastElement>heap[child]){
            heap[now]=heap[child];
        }
        else{
            break;
        }
    }
    heap[now]=lastElement;
    return minElement;
}
int main(){
    int n,iter,element;
    printf("Enter number of elements:");
    scanf("%d",&n);
    Init();
    printf("Enter %d elements:\n",n);
    for(iter=0;iter<n;iter++){
        scanf("%d",&element);
        Insert(element);
    }
    printf("Heap Sort Array:\n");
    for(iter=0;iter<n;iter++){
        printf("%d",DeleteMin());
    }
    printf("\n");
    return 0;
}