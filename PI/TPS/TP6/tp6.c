#include <stdio.h>
#include <math.h>



int main(){
    int a[10];
    a[15] = 0;
    return 0;
}


/* Fucking strings
char* eliminaEspacios(char msg[]){
    int esEspacio = 0, i=0, p2=0;
    while(msg[i] != '\0'){
        if(msg[i] == ' '){
            if(esEspacio==1){
                printf("aaaa\n");
                msg[p2] = msg[i];
                i++;
            }
            else{
                printf("bbbbbb\n");
                esEspacio=1;
                i++;
                p2++;
            }
        }
        else{
            i++;
            p2++;
            esEspacio=0;
        }
    }
    return msg;
}

int main(){
    int i;
    char abc[] = "hol   a";
    *abc = eliminaEspacios(abc);
    printf("%s", abc);
}
*/
/* Ej 22.
void secuenciaAsc(int arr[], size_t dim, int * comienzo, int * longitud){
    int max = 0, maxStart, i;
    for(i=0; i<dim-1; i++){
        max=1, maxStart=i;
        while((arr[i]<arr[i+1]) && (arr[i]<dim-1)){
            max++;
            i++;
        }
        if(max>*longitud){
            *longitud=max;
            *comienzo=maxStart;
        }
    }
}
*/
/* Ej 20. Falta
int correcto(int arr[ROWS][COLS]){
    int sigue=1;
    int suma[27];
    for(i=0; j<9 && sigue; i++){
        for(j=0; j<9 && sigue; j++){
            if(((i+1)%3==0) && ((i+1)%3==0)){
                sigue=checkSquares(suma, i, j);
            }
            suma[j]+=pow(2, arr[i][j]);
            suma[9+i]+=pow(2, arr[i][j]);
            suma[18+((i/3)*3)+j/3]+=pow(2, arr[i][j]);
        }
        sigue=checkRows(suma, i)*sigue;
    }
    if(sigue==1){
        sigue=checkCols(suma);
    }
    return sigue;
}
*/
/* Ej 17.
int armaFilas(int arr[ROWS][COLS], int vec[]){
    int i, count=0, j, sigue;
    for(i=0; i<ROWS; i++){
        sigue=1;
        vec[count] = 0;
        for(j=0; j<COLS && sigue; j++){
            if((arr[i][j] < 0) || (arr[i][j] > 9)){
                sigue=0;
                count--;
            }
            else{
                vec[count] += arr[i][j]*pow(10, COLS-j-1);
            }
        }
        count++;
    }
    return count;
}
*/
/* Ej 16.
int ascendenteODescendente(int arr[FILS][COLS]){
    int cant=FILS*COLS, i;
    int tendencia=arr[0][0]-arr[0][1], tendencia2 = 0;
    for(i=1; i<cant-1; i++){
        if(arr[0][i] != arr[0][i+1]){
            tendencia2=ceil(tendencia/((arr[0][i]*1.0) - arr[0][i+1]*1.0));
            if(tendencia2 < 0){
                return 0;
            }
        }
        
    }
    return (-(tendencia/abs(tendencia)));
}
*/
/* Ej 13.
#include <stdio.h>
#define DIMMAX 4

int llenar(int arr1[DIMMAX][DIMMAX], int arr2[DIMMAX][DIMMAX], int row, int col){
    int i, respuesta=0;
    for(i=0; i<DIMMAX; i++){
        respuesta+=(arr1[row][i]*arr2[i][col]);
    }
    return respuesta;
}

void productoMat(int arr1[DIMMAX][DIMMAX], int arr2[DIMMAX][DIMMAX], int arr3[DIMMAX][DIMMAX], int a){
    int i, j;
    for(i=0; i<DIMMAX; i++){
        for(j=0; j<DIMMAX; j++){
            arr3[i][j] = llenar(arr1, arr2, i, j);
        }
    }
}
*/
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
