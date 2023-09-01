#include <stdio.h>
#include "getnum.h"
#define ARR_LEN 4

/*int shiftArrayRight(int arr, int num, int pivot){ // pivot will be shifted
    int aux, i;
    
}*/

// every element of the arr becomes -1
void iniArray(int arr[], int arrSize){
    int i;
    for(i = 0; i<arrSize; i++){
        arr[i] = -1;
    }
}

// every element of the numbers ends up in an array, in the same order
void numToArray(int arr[], unsigned long num, int arrSize, int base){
    int i;
    for(i=arrSize-1; i>=0, num>0; i--, num /= base){
        arr[i] = num%base;
    }
}

// the arr has to be full
int arrToNum(int arr[], unsigned long num, int arrSize, int base){ 
    int i, exponent;
    for(i=arrSize-1, num=0, exponent=1; i>=0; i--, exponent *= base){
        num += arr[i]*exponent;     
    }
    return num;
}

int long decimalBinario(int decimal){
    long numNum = 0;
    int pasada=1;
    while(decimal>0){
        int num=decimal%2;
        numNum = numNum+num*pasada;
        decimal=decimal-num;
        decimal = decimal/2;
        pasada=pasada*10;
    }
    return numNum;
}

int main(){
    unsigned long ip, auxIp, aux;
    int auxDigits[ARR_LEN], digits[ARR_LEN], i, bitsNet, resta, numByte = -1, potencia, valueByte = 0;
    //printf("ingrese la ip\n");
    //scanf("%lu", &ip);
    //bitsNet = getint("ingrese la cantidad de bits identificadores de la red\n");
    ip = 0xC0A80064; //192.168.0.100
    bitsNet = 7;
    numByte = bitsNet/16;
    long unsigned red = 0xFFFFFFFF;
    long unsigned host = 0;
    iniArray(digits, ARR_LEN);
    numToArray(digits, ip, ARR_LEN, 256);
    printf("%X\n", digits[3]);
    int byte = digits[3-numByte];
    byte = decimalBinario(byte);
    printf("%d\n", byte);
    for(i = 0, potencia = 1; i<bitsNet%16; i++){
        if(byte%2 != 0){
            valueByte+=(256*numByte+potencia);
        }
        red-=(256*numByte+potencia);
        potencia*=2;
        byte/=2;
    }
    host += valueByte;
    printf("red: %lX\n", red);
    printf("host: %lX\n", host);
    return 0;
    auxIp = ip;
    //aux = arrToNum(digits, aux, ARR_LEN, 256);
    printf("%lX\n", aux);
    for(i=0; i<ARR_LEN; i++){
        printf("%d _ ", digits[i]);
    }
    return 0;
}