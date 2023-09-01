#include <stdio.h>
#include <string.h>
#define MAX_NUM 20

int main(){
    int i;
    char out[] = "";
    for(i=1;i<=MAX_NUM;i++){
        strcpy(out, "");
        if(i%3==0 || i%10 == 3 || (i/10)%10 == 3){
            strcat(out, "fizz");
        }
        if(i%5==0 || i%5 == 5 || (i/10)%10 == 5){
            strcat(out, "buzz");
        }
        if(out[0] == '\0'){
            printf("%d\n", i);
        }
        else{
            printf("%s\n", out);
        }
    }
}