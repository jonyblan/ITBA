#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <malloc.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <unistd.h>


/* Ej 1.
int suma(int arr[], int size, int sumatoria){ // sumatoria = 0
    if(size==1){
        return arr[0];
    }
    else{
        sumatoria+=suma(arr, size-1, sumatoria);
        return (sumatoria+arr[size-1]);
    }
}
*/
/* Ej 2
int sumaDigitos(int num, int rta){ // rta = 0
    if(num/10==0){
        return num;
    }
    else{
        rta+=sumaDigitos(num/10, rta);
        return rta+num%10;
    }
}
*/
/* Ej 3
int productoEscalar(int vec1[], int vec2[], int size, int rta){ //rta = 0
    if(size==1){
        return vec1[0]*vec2[0];
    }
    else{
        rta+=productoEscalar(vec1, vec2, size-1, rta);
        return rta+vec1[size-1]*vec2[size-1];
    }
}
*/
/* Ej 6
int palindromo(char str[], char rta, int p1, int p2, int size){ //p1 = 0, p2+1 = size = [cant elements]
    if(p2<=((int)(size/2))){
        return (str[p1]-str[p2]==0);
    }
    else{
        rta*=palindromo(str, rta, p1+1, p2-1, size);
        return rta*(str[p1]-str[p2]==0);
    }
}
*/
/* Ej 7
int binarySearch(int vec[], int min, int max, int objective){ // min = 0, max = [last index]
    if((vec[(max+min)/2] == objective) || (max-min<=1)){
        return ((vec[min]-objective==0) || (vec[max]-objective==0) || vec[(max+min)/2]==objective);
    }
    else{
        if(vec[(max+min)/2]>objective){
            return binarySearch(vec, min, (max+min)/2-1, objective);
        }
        else if(vec[(max+min)/2]<objective){
            return binarySearch(vec, (max+min)/2+1, max, objective);
        }
    }
}
*/
/* Ej 8
int ack(int m, int n){
    if(m==0){
        return n+1;
    }
    else if(n==0){
        return ack(m-1, 1);
    }
    else{
        return ack(m-1, ack(m, n-1));
    }
}
*/
/* Ej 9
float quick_sqRoot(float num, float before, int it){ // before = num/2
    if(it==2){
        return ((before+(num/before))/2);
    }
    else{
        return quick_sqRoot(num, ((before+(num/before))/2), it-1);
    }
}
*/
/* Ej 10
void alReves(char str1[], char str2[], int p1, int size){ // size = p1 = [index of last letter]
    if(p1==0){
        str2[size] = str1[0]; 
        str2[size+1] = '\0';
    }
    else{
        printf("%c - %d\n", str1[p1], p1);
        str2[size-p1] = str1[p1];
        alReves(str1, str2, p1-1, size);
    }
}
*/
/* Ej 11
void changeDiagonal(int size, int arr[][size], int row, int col, int x, int y){
    if(row+x!=-1 && col+y!=-1 && row+x!=size && col+y!=size){
        arr[row][col]=!arr[row][col];
        changeDiagonal(size, arr, row+x, col+y, x, y);
    }
    else{
        arr[row][col]=!arr[row][col];
    }
}

void changeDiagonals(int size, int arr[][size], int row, int col){
    arr[row][col]=!arr[row][col];
    changeDiagonal(size, arr, row, col, 1, 1);
    changeDiagonal(size, arr, row, col, 1, -1);
    changeDiagonal(size, arr, row, col, -1, 1);
    changeDiagonal(size, arr, row, col, -1, -1);
}
*/
/* Ej 12
int balance(const char *texto){
    if(*texto == 0)
        return 0;
    
    if(*texto == ')'){
        return (balance(texto+1)-1);
    }
    else if(*texto == '('){
        return (balance(texto+1)+1);
    }
    else{
        return (balance(texto+1));
    }
}
*/
/* Ej 14
int apareados(const char *texto){
    if(*texto == 0)
        return 0;
    
    if(*texto == ')'){
        int var = apareados(texto+1);
        if(var>0){
            return var+1;
        }
        else{
            return var-1;
        }
    }
    else if(*texto == '('){
        return (apareados(texto+1)+1);
    }
}
*/
/* Ej 15
void piramide(int *latas, int *altura){ // altura = 0
    if(*latas>=(((*altura)+1)*((*altura)+1))){
        (*altura)++;
        *latas-=(*altura)*(*altura);
        piramide(latas, altura);
    }
}
*/
/* Ej 16
int getOrden(int num1, int num2){ // esta funcion esta para que el codigo sea mas claro, se puede hacer sin
    return (-((abs(num1-num2))/(num1-num2)));
}

int orden(int vec[]){
    if((*(vec) == -1) || (*(vec+1) == 1)){
        return 0;
    }
    else if(*(vec+2) == -1){
        return getOrden(*(vec), *(vec+1));
    }
    else{
        if(*(vec)==*(vec+1)){
            return 0;
        }
        else if((orden(vec+1)==0) || (getOrden(*(vec), *(vec+1))*orden(vec+1)) == -1){
            return 0;
        }
        else{
            return getOrden(*(vec), *(vec+1));
        }
    }
}
*/
/* Ej 17
int bienFormado(char *str){
    if(*str=='\0'){
        return 0;
    }
    else{
        if(isalpha(*str)){
            return (bienFormado(str+1)-1);
        }
        else if(isdigit(*str)){
            int var = bienFormado(str+1);
            if(var<0){
                return var-1;
            }
            else{
                return var+(*str-'0');
            }
        }
        else{
            return -10000;
        }
    }
}
*/
/* Ej 18
int sumMatch(const int v[]){
    if(*v==-1){
        return 0;
    }
    else{
        int var = sumMatch(v+1);
        if(var==0){
            return *v;
        }
        else{
            return var-(*v);
        }
    }
}
*/



int main(){
    int rta;
    char msg[] = "@@2";
    rta = bienFormado(msg, 1);
    printf("%d\n", rta);
}