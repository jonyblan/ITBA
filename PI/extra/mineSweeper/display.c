#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define FILES 3
#define COLUMNS 3
#define CANT_BOMBS 2

void display(int board[FILES][COLUMNS], int displayValues[FILES][COLUMNS]){
    int i, a;
    for(i=0; i<FILES; i++){
        for(a=0; a<COLUMNS; a++){
            switch (board[i][a])
            {
            case 9:
                printf("* ");
                break;
            case 0 ... 8:
                printf("%d ", board[i][a]);
                break;
            case 10 ... 19:
                printf("- ");
                break;
            case 20 ... 29:
                printf("🏴");
                break;
            default:
                printf("ERROR");
                break;
            }
        }
        printf("\n");
    }
}