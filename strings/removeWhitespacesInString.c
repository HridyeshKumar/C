#include <string.h>
#include <stdio.h>

int main(){
    int i = 0, j = 0, len;
    char buff[50];
    printf("Enter String with white space ");
    gets(buff);
    len = (int) strlen(buff);
    while (i != len){
        if (buff[i] != ' ')
            buff[j++] = buff[i];
        i++;
    }
    buff[j] = 0;
    printf("Your String  is %s.", buff);
}
