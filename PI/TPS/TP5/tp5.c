/*Ej 14. Ask
#import <stdio.h>
#import <math.h>

long binarioDecimal(int num){
    int aux2=1;
    long decimal = 0;
    while(num>=1){
        if(num%10 != 0 && num%10 != 1){
            printf("\n\n%d - %d\n\n", num, num%10);
            printf("no es un numero en binario\n");
            return 0;
        }
        decimal = decimal + (num%10)*aux2;
        aux2=aux2*2;
        num /= 10;
    }
    return decimal;
}

long decimalBinario(int decimal){
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

int ipToFourNums(unsigned long ip, int numDivision){
    int ipDividida = (ip>>(4*numDivision))%256;
    return ipDividida;
}


int main(){
    int i, num = 0, ip1, ip2, ip3, ip4, bitsNet, bitsNet1, bitsNet2, bitsNet3, bitsNet4;
    unsigned long ip;
    printf("ingrese la ip (en decimal, sin puntos)\n");
    scanf("%lu", &ip);
    printf("ingrese la cantidad de bits de la red\n");
    scanf("%d", &bitsNet);
    unsigned long red = ip>>bitsNet;
    printf("%lu", red);
    long binario = decimalBinario(ip);
    //printf("%lu\n", binario);
    //printf("%lu\n", binarioDecimal(binario));
    //printf("%d.%d.%d.%d\n", ip1, ip2, ip3, ip4);
    return 0;
}
*/
/* Ej. 10
#import <stdio.h>
#import <math.h>

int dcm(int num1, int num2){
    int resto, i, maxDivisor = 1;
    for(i=2; i<=num1; i++){
        resto = num1/i;
        if(resto*i == num1){
            resto = num2/i;
            if(resto*i == num2){
                maxDivisor = i;
            }
        }
    }
    return maxDivisor;
}

int main(){
    int seleccion = 4;
    int n1, d1, n2, d2, aux;
    printf("Menu:\nQue desea hacer?\n\t- 1: Simplificar una funcion\n\t- 2: Sumar dos fracciones\n\t- 3: Terminar el programa\n");
    scanf("%d", &seleccion);
    while(seleccion>0 && seleccion < 3){
        printf("ingrese el numerador\n");
        scanf("%d", &n1);
        printf("ingrese el denominador\n");
        scanf("%d", &d1);
        if(seleccion == 1){
            printf("La fraccion simplificada es %d/%d\n", n1/dcm(n1, d1), d1/dcm(n1, d1));
        }
        else{
            printf("ingrese el segundo numerador\n");
            scanf("%d", &n2);
            printf("ingrese el segundo denominador\n");
            scanf("%d", &d2);
            n1 *= d2;
            n2 *= d1;
            aux = d2;
            d1 *= d2;
            n1 += n2;
            printf("La suma de las fracciones simplificada es %d/%d\n", n1/dcm(n1, d1), d1/dcm(n1, d1));
        }
        printf("Menu:\nQue desea hacer?\n\t- 1: Simplificar una funcion\n\t- 2: Sumar dos fracciones\n\t- 3: Terminar el programa\n");
        scanf("%d", &seleccion);
    }
    return 0;
}
*/
/* Ej 9. 
#define EP 0.0005f
#define ceiling 10.0f
#import <stdio.h>
#import <math.h>

int isCero(float num){
    if(num>=0){
        if(EP>num){
            return 1;
        }
    }
    else if(EP>-num){
        return 1;
    }
    return 0;
}

int main(){
    double i;
    for(i=0; i<ceiling; i+=0.001){
        if(isCero(sin(i)+log10(i))){
            printf("raiz: %g\n", i);
            i+=0.001;
        }
    }
    return 0;
}
*/
/* Ej 8. 
#include <stdio.h>
#include <math.h>

float redondeo(float num, int cantDecimales){
    printf("%g - %d - %g\n", num, cantDecimales, floor( num * pow(10, cantDecimales) + 0.5) / pow(10, cantDecimales));
    return(floor( num * pow(10, cantDecimales) + 0.5) / pow(10, cantDecimales));
}

int isDigit(char char1){
    printf("%c\n", char1);
    if(char1>='0' && char1<='9'){
        return 1;
    }
    return 0;
}

int main(){
    float num1 = -1;
    int num2 = -1;
    printf("ingrese un numero\n");
    scanf("%g", &num1);
    while((num2<0 || num2>3) && buffer>0){
        printf("Ingrese que quiere hacer:\n0:\tRedondear al numero mas cercano\n1:\tRedondear con una centesima\n2:\tRedondear con dos centesimas\n3:\tRedondear con tres centesimas\nnum:\t");
        scanf("%d", &num2);
    }
    switch (num2)
    {
    case 0:
        printf("%g", redondeo(num1, 0));
        break;
    case 1:
        printf("%g", redondeo(num1, 1));
        break;
    case 2:
        printf("%g", redondeo(num1, 2));
        break;
    case 3:
        printf("%g", redondeo(num1, 3));
        break;
    default:
        printf("error");
    }
    return 0;
}
*/
/* Ej 7. Ask
*/
/* Ej 6.1 char upperLowerCase(char char1){
    return(char1+32);
}
*/
/* Ej 6.2 char lowerUpperCase(char char1){
    return(char1-32);
}
*/
/* Ej 6.3 char nextChar(char char1){
    return(char1+1);
}
*/
/* Ej 6.4 char nextLetter(char char1){
    if(char1 == 'z' || char1 == 'Z'){
        return(char1-25);
    }
    return(char1+1);
}
*/
/* Ej 5. double power(double base, int expo){
    int i;
    double aux = base;
    if(expo!=0){
        for(i=1;i<expo;i++){
            base*=aux;
        }
    }
    else{
        base = 1;
    }
    if(expo<0){
        base*=base;
        base = 1/base;
    }
    return base;
}
*/
/* Ej 4. int getRandom(int min, int max){
    return ((rand()%(max-min)) + min);
}
*/