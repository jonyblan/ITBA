#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "getnum.h"





/* Ej 10.
#define FILES 34
#define COLS 148
#define LIGHT 20

void generarCielo(int cielo[FILES][COLS]){
    int i, j;
    for(i=0; i<FILES; i++){
        for(j=0; j<COLS; j++){
            cielo[i][j] = rand()%LIGHT;
        }
    }
}

void iniEstrellas(int estrellas[FILES][COLS]){
    int i, j;
    for(i=0; i<FILES; i++){
        for(j=0; j<COLS; j++){
            estrellas[i][j] = 0;
        }
    }
}

void evaluarEstrellas(int cielo[FILES][COLS], int estrellas[FILES][COLS]){
    int i, j, k, m, suma;
    for(i=1; i<FILES-1; i++){
        for(j=1; j<COLS-1; j++){
            suma = 0;
            for(k=i-1; k<i+2; k++){
                for(m=j-1; m<j+2; m++){
                    suma+=cielo[k][m];
                }
            }
            if(suma/10>=LIGHT*0.55){
                estrellas[i][j] = 1;
            }
        }
    }
}

void mostrarEstrellas(int estrellas[FILES][COLS]){
    int i, j;
    for(i=0; i<FILES; i++){
        for(j=0; j<COLS; j++){
            if(estrellas[i][j] == 1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}


int main(){
    srand(time(NULL));
    int cielo[FILES][COLS], estrellas[FILES][COLS];
    generarCielo(cielo);
    iniEstrellas(estrellas);
    evaluarEstrellas(cielo, estrellas);
    mostrarEstrellas(estrellas);
}
*/
/* Ej 9.
float standartDeviation(int arr[], int len){
    int i;
    float sumMedian = 0, median = 0;
    for(i=0; i<len; i++){
        median+=arr[i];
    }
    median/=len;
    for(i=0; i<len; i++){
        sumMedian += ((arr[i]-median)*(arr[i]-median));
    }
    sumMedian/=len;
    sumMedian = sqrt(sumMedian);
    return sumMedian;
}

void hexaToDecimal(unsigned char arrChar[], int arr[], int len){
    int i, count=0;
    for(i=0; i<len; i++){
        arr[count] = arrChar[i]%16;
        count++;
        arrChar[i]/=16;
        arr[count] = arrChar[i];
        count++;
    }
}
*/
/* Ej 7.
void arrayUnion(int arr1[], int arr2[], int size1, int size2, int newArr[]){
    int i, j, iguales, count = 0;
    for(i=0; i<size1 && arr1[i] != -1; i++){
        newArr[count] = arr1[i];
        count++;
    }
    for(i=0; i<size2; i++){
        iguales = 0;
        for(j=0; j<size1 && iguales == 0; j++){
            if(arr1[j] == arr2[i]){
                iguales = 1;
            }
        }
        if(iguales == 0){
            newArr[count] = arr2[i];
            count++;
        }
    }
    newArr[count] = -1;
}
*/
/* Ej 4.
void noRepeats(int num[], int newArr[], int len){
    int i, j, counter = 0, check;
    for(i=0; i<len, num[i] != 0; i++){  // goes through every element in num[]
        check = 1;                      // num[i] isnt in newArr[]
        for(j=0; j<counter; j++){       // goes through every element in newArr[] until k 
            if(num[i] == newArr[j]){   
                check = 0;              // num[i] is in newArr[]
                break;
            }
        }
        if(check == 1){
            newArr[counter] = num[i];
            counter++;
        }
    }
    newArr[counter] = 0;
}
*/
/* Ej 6.
void shuffle(int arr[], int size){
    srand(time(0));
    for (int i = 0; i < size; i++) {
        int j = rand() % size;
        int t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
    }
}
*/
