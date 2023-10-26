#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <malloc.h>
#include <math.h>
#include <time.h>

/* Ej 2 FALTA
int checkInput(char * input, int * entrada, int * salida){
    int i, hayDigit=0, hayFin=0, hayDigit2=0;
    if(!('<'-input[0])){
        for(i=0; input[i]!='\0'; i++){
            if(isdigit(input[i]) || hayDigit){
                if(!hayDigit)
                    *entrada=input[i]-'0';
                printf("Entrada: %c\n", input[i]);
                hayDigit=1;
                if(!(input[i]-'>') || hayFin){
                    hayFin=1;
                    if(isdigit(input[i])){
                        *salida = input[i]-'0';
                        printf("Salida: %c\n", input[i]);
                        return 0;
                    }
                }
            }
        }
    }
    return 1;
}

void inputBases(int * entrada, int * salida){
    char * input="<5>2";
    int i, seguir=1;
    while(seguir){
        printf("Ingrese <[base entrada]>[base salida]\n");
        //input = getchar();
        seguir = checkInput(input, entrada, salida);
    }
}

int inputNum(){
    int num;
    printf("Ingrese su numero:\n");
    scanf("%d", &num);
    return num;
}

void cambiarNum(int num, int entrada, int salida){
    int exponente = 0, cambiado = 0;
    while(num>0){
        cambiado+=(num%entrada)*pow(entrada, exponente);
        num/entrada;
    }


    printf("Num: %d\tEntrada: %d\tSalida: %d\n", num, entrada, salida);
}

int main(void) {
    int bEntrada, bSalida, num;
    int *pbEntrada = &bEntrada, *pbSalida = &bSalida;
    inputBases(pbEntrada, pbSalida);
    printf("Entrada: %d\tSalida: %d\n", bEntrada, bSalida);
    num = inputNum();
    cambiarNum(num, bEntrada, bSalida);
}
*/
/* Ej 5 FALTA
#define BLOQUE 5

void analize(char **names, char **cursos, char ***cursoG, char ***cursoH){
    int i=0, countG = 0, countH = 0;
    while(names[i][0] != ' '){
        if(cursos[i][0] == 'G'){
            if(countG%BLOQUE == 0){
                *cursoG = realloc(*cursoG, countG+BLOQUE);
            }
            *cursoG[countG] = names[i];
            //countG++;
        }
        else{
            if(countH%BLOQUE == 0){
                *cursoH = realloc(*cursoH, countH+BLOQUE);
            }
            *cursoH[countH] = names[i];
            //countH++;
            *cursoH[1] = "augusto";
        }
        i++;
    }
    printf("%s\n", *cursoG[0]);
}

int main(){
	char *names[] = {"Juan", "Pedro", "Martin", " "};
    char *cursos[] = {"H", "G", "H", 0};
    char **cursoG = NULL;
    char **cursoH = NULL;
    analize(names, cursos, &cursoG, &cursoH);
    printf("%s\n", cursoG[0]);
    printf("%s\n", cursoH[1]);
    free(cursoG);
    free(cursoH);
}
*/
/* Ej 6. Wordle con numeros
#define CANT_NUMS 10
#define CANT_STATES 3

void showArr(int arr[], int size){
    int i;
    for(i=0; i<size-1; i++){
        printf("%d - ", arr[i]);
    }
    printf("%d\n", arr[size-1]);
}

void iniArray(int arr[], int num, int size){
    int i;
    for(i=0; i<size; i++){
        arr[i] = num;
    }
}

void iniArrays(int num[], int guess[], int respuesta[]){
    iniArray(num, -1, CANT_NUMS);
    iniArray(guess, 0, CANT_NUMS);
    iniArray(respuesta, 0, CANT_STATES);
}

void generarNumero(int cantNumeros, int *num){
    int numeros[CANT_NUMS], numRandom, i=CANT_NUMS-1;
    iniArray(numeros, 0, CANT_NUMS);
    while(cantNumeros>0){
        numRandom = rand()%10;
        if(numeros[numRandom] == 0){
            numeros[numRandom] = 1;
            num[i] = numRandom;
            i--;
            cantNumeros--;
        }
    }
}

void conseguirDatos(int *cantRondas, int *cantNumeros){
    *cantRondas=0, *cantNumeros=0;
    while(*cantRondas>20 || *cantRondas<1){
        printf("Bienvenido, ingrese la cantidad de rondas que desea jugar:\n");
        scanf("%d", cantRondas);
    }
    while(*cantNumeros>10 || *cantNumeros<1){
        printf("Y ahora la cantidad de numeros a adivinar:\n");
        scanf("%d", cantNumeros);
    }
}

void startGame(int *cantRondas, int *cantNumeros, int *num){
    conseguirDatos(cantRondas, cantNumeros);
    generarNumero(*cantNumeros, num);
}

void numToArr(int arr[], int num, int arrSize, int base, int cantNumeros){
    int i;
    for(i=arrSize-cantNumeros; i<cantNumeros, num>0; i++, num /= base){
        arr[i]=num%base;
    }
}

int hayRepetidos(int num){
    int i, repetidos[CANT_NUMS];
    iniArray(repetidos, 1, CANT_NUMS);
    while(num>0){
        repetidos[num%10]--;
        num/=10;
    }
    for(i=0; i<CANT_NUMS-1; i++){
        if(repetidos[i]<0){
            return 1;
        }
    }
    return 0;
}

void ingresarNumero(int cantNumeros, int guess[]){
    int numero, correct=1, i;
    long long max=pow(10, cantNumeros)-1;
    while(correct){
        correct=0;
        printf("input your guess: (%lld)\n", max);
        scanf("%d", &numero);
        if(numero>max || numero<0){
            correct=1;
        }
        else{
            correct = hayRepetidos(numero);
        }
    }
    numToArr(guess, numero, CANT_NUMS, 10, cantNumeros);
}

void analizarIgualesLugares(int cantNumeros, int guess[], int num[], int respuesta[]){
    int i;
    for(i=CANT_NUMS-1; cantNumeros>0; i--, cantNumeros--){
        //printf("%d - %d\n", guess[i], num[i]); MOSTRAR RESPUESTAS
        if(guess[i] == num[i]){
            guess[i]=-2;
            respuesta[0]++;
        }
    }
}

void analizarDiferentesLugares(int cantNumeros, int guess[], int num[], int respuesta[]){
    int i, numeros[CANT_NUMS];
    iniArray(numeros, 0, CANT_NUMS);
    for(i=CANT_NUMS-1; cantNumeros>0; i--, cantNumeros--){
        if(guess[i]!=-2){
            numeros[guess[i]]++;
        }
        numeros[num[i]]++;
    }
    for(i=0; i<CANT_NUMS; i++){
        if(numeros[i]==2){
            respuesta[1]++;
        }
    }
}

int analizarNumero(int guess[], int num[], int respuesta[], int cantRondas, int cantNumeros){
    analizarIgualesLugares(cantNumeros, guess, num, respuesta);
    analizarDiferentesLugares(cantNumeros, guess, num, respuesta);
    respuesta[2] = cantNumeros-respuesta[1]-respuesta[0];
    if((!respuesta[2] && !respuesta[1]) || !(cantRondas-1)){
        return 0;
    }
    return 1;
}

void mostrarRespuesta(int respuesta[]){
    printf("C: %d\tR: %d\tM: %d\n", respuesta[0], respuesta[1], respuesta[2]);
}

void endGame(int respuesta[], int num[], int cantNumeros){
    int i;
    if(respuesta[2] || respuesta[1]){
        printf("Better luck next time, the number was: ");
        for(i=CANT_NUMS-1; cantNumeros>0; i--, cantNumeros--){
            printf("%d", num[i]);
        }
        printf("\n");
    }
    else{
        printf("Congrats! You won\n");
    }
}

int main(){
    srand(time(NULL));
    int cantRondas, cantNumeros, num[CANT_NUMS], sigue=1, guess[CANT_NUMS], respuesta[CANT_STATES];
    iniArrays(num, guess, respuesta);
    startGame(&cantRondas, &cantNumeros, num);
    while(sigue){
        iniArray(respuesta, 0, CANT_STATES);
        iniArray(guess, 0, CANT_NUMS);
        ingresarNumero(cantNumeros, guess);
        sigue = analizarNumero(guess, num, respuesta, cantRondas, cantNumeros);
        mostrarRespuesta(respuesta);
        cantRondas--;
    }
    endGame(respuesta, num, cantNumeros);
}
*/
/* Ej 8 FALTA
#define REGLAS 0 // 0 = ganar por fila, 1 = ganar por carton
#define CANT_NUMEROS 100
#define CANT_NUMEROS_BOARD 15
#define MAX_CARTONES 3

int inputNum(char msg[], int min, int max){
    int num = min-1;
    while(num<min || num>max){
        printf("%s\n", msg);
        scanf("%d", num);
    }
    return num;
}

void generateBoard(int cantCartones, int *cartones[]){
    int numFaltantes = CANT_NUMEROS_BOARD, numRand, count=0;
    while(numFaltantes>0){
        numRand=rand()%100;

    }
}

void generateBoards(int cantCartones, int *cartones[]){
    while(cantCartones>0){
        generateBoard(cantCartones, cartones);
    }
}

void start(int *cantCartones, int *cartones[]){
    cantCartones = inputNum("Ingrese cuantos jugadores hay", 1, MAX_CARTONES);
    cartones = calloc(1, cantCartones);
    generateBoards(*cantCartones, cartones);
}

void sacarBolilla(){
    rand()%CANT_NUMEROS
}

void controlarCartones(){

}

void mostrarCartones(){

}

void end(*cartones[]){
    free(*cartones);
}

int main(){
    srand(time(NULL));
    int seguir=checks(), cantCartones, *cartones[CANT_NUMEROS] = NULL;
    start(&cantCartones, cartones);
    while(seguir){
        sacarBolilla();
        seguir = controlarCartones();
        mostrarCartones();
    }
    end();
}
*/
/* Ej 10. Ahorcado FALTA
#define CANT_PALABRAS 3
#define BLOQUE 5
#define LETRAS 'z'-'a'+1
#define MUNIECO_WIDE 3


typedef struct{
	char letra;
	int descubierta;
} letter;

void iniArray(int *arr, int size, char value){
	int i;
	for(i=0; i<size; i++){
		arr[i]=value;
	}
}

void start(char *palabras[], letter palabra[]){
	int randNum, i;
    randNum = rand()%CANT_PALABRAS;
	for(i=0; palabras[randNum][i]!='\0'; i++){
		palabra[i].letra=palabras[randNum][i];
		palabra[i].descubierta = 0;		
	}
	i++;
	palabra[i].letra='\0';
	palabra[i].descubierta=0;
	i++;
}

char pedirLetra(int letras[]){
	char letra='A'-1;
	int i;
	while(letra<'A' || letra >'Z'){
        printf("Ingrese su letra\n");
		letra = getchar();
		letra = toupper(letra);
		if(!(letras[letra-'A'])){
			printf("Esa letra ya fue ingresada\n");
			letra = 'A'-1;
		}
		else{
			letras[letra-'A']=1;
		}	
	}
	return letra;
}

int cambiarMunieco(char munieco[][MUNIECO_WIDE], char muniecoCompleto[][MUNIECO_WIDE]){
	int i, j, cambio=0;
	for(i=0; i<munieco[i][0]!='-' && !cambio; i++){
		for(j=0; j<MUNIECO_WIDE && !cambio; j++){
			if(munieco[i][j]==0 && !cambio){
				munieco[i][j]=muniecoCompleto[i][j];
				cambio = 1;
			}
		}
	}
	if(cambio){
		return 1;
	}
	return 0;
}

int analizar(char letra, char munieco[][MUNIECO_WIDE], letter palabra[], char muniecoCompleto[][MUNIECO_WIDE]){
	int aparecio=0, i, todoDescubierto = 1;
	for(i=0; palabra[i].letra!='\0'; i++){
		if(palabra[i].letra==letra){
			palabra[i].descubierta=1;
			aparecio = 1;
		}
		todoDescubierto = todoDescubierto && palabra[i].descubierta;
	}
	if(todoDescubierto){
		return 0;
	}
	if(!aparecio){
		return (cambiarMunieco(munieco, muniecoCompleto));
	}
}

void mostrarMunieco(char munieco[][MUNIECO_WIDE]){
	printf("\n");
	int i, j, count=0;
	for(i=0; count<3; i++){
		for(j=0; j<MUNIECO_WIDE; j++){
			if(munieco[i][j]==0){
				printf(" ");
			}
			else if(munieco[i][j]=='-'){
				count++;
			}
			else{
				printf("%c", munieco[i][j]);
			}
		}
		printf("\n");
	}
}

void mostrarPalabra(letter palabra[]){
	printf("\n");
	int i;
	for(i=0; palabra[i].letra!='\0'; i++){
		if(palabra[i].descubierta){
			printf("%c", palabra[i].letra);
		}
		else{
			printf("-");
		}
	}
	printf("\n");
}

void mostrarLetras(int *letras){
	printf("\n");
	int i;
	for(i=0; i<LETRAS; i++){
		if(letras[i]){
			printf("%c ", i);
		}
	}
	printf("\n");
}

void mostrarActual(letter palabra[], char munieco[][MUNIECO_WIDE], int *letras){
	mostrarMunieco(munieco);
	mostrarPalabra(palabra);
	mostrarLetras(letras);
}

void end(letter palabra[]){
	int i, gano=1;
	printf("\nLa palabra era: ");
	for(i=0; palabra[i].letra!='\0'; i++){
		if(palabra[i].descubierta==0){
			gano=0;
		}
		printf("%c", palabra[i].letra);
	}
	if(gano){
		printf("\nFelicidades!\n");
	}
	else{
		printf("\nMejor suerte la proxima\n");
    }
}

int main(){
	srand(time(NULL));
	char munieco[][MUNIECO_WIDE]={{' ', 0, ' '}, {0, 0, 0}, {' ', 0, ' '}, {0, ' ', 0}, {'-', '-', '-'}}, *palabras[]={"hola", "chau", "ahorcado"}, letra;
	char muniecoCompleto[][MUNIECO_WIDE]={{' ', 'o', ' '}, {'/', '|', '\\'}, {' ', '|', ' '}, {'/', ' ', '\\'}, {'-', '-', '-'}};
	letter palabra[20];
	int seguir=1, letras[LETRAS];
	iniArray(letras, LETRAS, 0);
	start(palabras, palabra);
	while(seguir){
		letra = pedirLetra(letras);
		seguir = analizar(letra, munieco, palabra, muniecoCompleto);
		mostrarActual(palabra, munieco, letras);
	}
	end(palabra);
}
*/