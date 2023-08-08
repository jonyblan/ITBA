#include <stdio.h>
int main(){
    int side, i, a;
    printf("choose the lenght of the square side\n");
    scanf("%d", &side);
    printf(" ");
    for(i=0;i<side;i++){
        printf("_");
    }
    printf("\n");
    for(i=0;i<side/2;i++){
        printf("|");
        for(a=0;a<side;a++){
            printf(" ");
        }
        printf("|\n");
    }
    printf(" ");
    for(i=0;i<side;i++){
        printf("_");
    }
    printf("\n");
}