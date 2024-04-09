#include<stdio.h>
#include<string.h>
void shellSort(char*chars,int c){
    register int i,j,space,k;
    char x,a[5];
    a[0]=9;
    a[1]=5;
    a[2]=3;
    a[3]=2;
    a[4]=1;
    for(k=0;k<5;k++){
        space=a[k];
        for(i=space;i<c;++i){
            x=chars[i];
            for(j=i-space;(x<chars[j])&&(j>=0);j=j-space){
                chars[j+space]=chars[j];
            }
            chars[j+space]=x;
        }
    }
}
int main(){
    char string [300];
    printf("Enter a string:");
    gets(string);
    shellSort(string,strlen(string));
    printf("The sorted string is:%s\n",string);
    return 0;
}