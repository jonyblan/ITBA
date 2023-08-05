#include <stdio.h>

/* Ej 15
int esLetra(char letra){
    if((letra >= 'a') && (letra <= 'z')){
        return 0;
    }
    if((letra >= 'A') && (letra <= 'Z')){
        return 1;
    }
    return 2;
}

int main(){
    char letra;
    printf("ingrese una letra\n");
    scanf("%c", &letra);
    int estaBien = esLetra(letra);
    if(estaBien == 2){
        printf("debe ingresar una letra\n");
        return 0;
    }
    if(estaBien == 0){
        printf("%c\n", letra-32);
        return 0;
    }
    printf("%c\n", letra);
    return 0;
}
*/
/* Ej 14
int main() {
    int num1, num2;
    printf("ingrese un numero\n");
    scanf("%d", &num1);
    printf("ingrese otro numero\n");
    scanf("%d", &num2);
    float promedio = ((num1+num2+0.0)/2);
    printf("El promedio es %f\nLa suma es %d\n", promedio, (num1+num2));
    if(num1 > num2){
        printf("El menor es %d\nEl mayor es %d\nNo son iguales\n", num2, num1);
        return 0;
    }
    else if(num2 > num1){
        printf("El menor es %d\nEl mayor es %d\nNo son iguales\n", num1, num2);
        return 0;
    }
    printf("son iguales");
    return 0;
}
*/
/* Ej 13
int main(){
    int num, multiplo;
    printf("ingrese un numero\n");
    scanf("%d", &num);
    printf("ingrese el multiplo\n");
    scanf("%d", &multiplo);
    if(multiplo%num == 0){
        printf("son multiplos\n");
        return 0;
    }
    printf("no son multiplos\n");
    return 0;
}
*/
/* Ej 12
int main(){
    char char1 = getchar();
    if(((char1 >= 'a') && (char1 <= 'z')) || ((char1 >= 'A') && (char1 <= 'Z'))){
        printf("es una letra\n");
        return 0;
    }
    printf("no es una letra\n");
    return 0;
}
*/
/* Ej 11
int main(){
    char char1 = getchar();
    char char2 = getchar();
    if(char1>=char2){
        printf("%c", char1);
        return 0;
    }
    printf("%c", char2);
    return 0;
}
*/
/* Ej 10
int main(void){
    int sec;
    scanf("%d", &sec);
    printf("horas: %d\n", sec/3600);
    printf("minutos %d\n", (sec/60)%60);
    printf("segundos %d\n", sec%60);
    return 0;
}
*/