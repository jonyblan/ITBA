#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define FILES 3
#define COLUMNS 3
#define CANT_BOMBS 2

int checkPoints(int board[FILES][COLUMNS], int previousPoints){
    int i, j, points = 0, win = -2;
    for(i=0; i<FILES; i++){
        for(j=0; j<COLUMNS; j++){
            if(board[i][j] == 9){
                return -1;
            }
            if((board[i][j]>10) && (board[i][j]%10 != 9)){
                if(board[i][j] < 0){
                    printf("ERROR");
                }
                win = 0;
            }
        }
    }
    return win;
}