#include<stdio.h>
struct st{
    int a;
    char c;
};
int main(){
    // Declare an array of 3 structure objects 
    struct st st_arr[3];
    // first structure object 
    struct st st_obj0;
    st_obj0.a=0;
    st_obj0.c='a';
    // Second structure object
    struct st st_obj1;
    st_obj1.a=1;
    st_obj1.c='b';
    // Third structure object 
    struct st st_obj2;
    st_obj2.a=2;
    st_obj2.c='c';
    // Initializing first element of array with first structure object 
    st_arr[0]=st_obj0;
    // Initializing second element of array with second structure object 
    st_arr[1]=st_obj1;
    // Initializing third element of array with third structure object 
    st_arr[2]=st_obj2;
    printf("\n First element of array has values of a=[%d] and c=[%c]\n",
    st_arr[0].a,st_arr[0].c);
    printf("\n Second element of array has values of a=[%d] and c=[%c]\n",
    st_arr[1].a,st_arr[1].c);
    printf("\n Third element of array has values of a=[%d] and c=[%c]\n",
    st_arr[2].a,st_arr[2].c);
    return 0;
}