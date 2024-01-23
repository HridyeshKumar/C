#include <stdio.h>
int main(){
  int i=0,min,max,arr[3]={20,40,10};
  int *ptr_arr;
  ptr_arr=&arr[0];
  min = max = arr[0];
  for(i=0;i<3;i++){
    if(max<ptr_arr[i]) {
    max=ptr_arr[i];
   }
    if(min>ptr_arr[i]){
    min=ptr_arr[i];
   }
 }
 printf("The Maximum Number Is %d\n",max);
 printf("The Minimum Number Is %d ",min);
 return 0;
}