// Lines are counted as long as they're not brackets or declaration/definition of a variable
// The objective of these excercises is to write a code is as few lines as possible, not readability
// or looking for a real world implementation.


/* Ej 19.2 15/25
#include <stdio.h>
int main(){
    float num;
    scanf("%f", &num);
    int numEntero = num, cantDecimal = 0, cantEntero = 0, cantDecimales = 0;
    while(num!= (numEntero+0.0)){
        num=num*10;
        numEntero = num;
        cantDecimales++;
    }
    while(numEntero>0){
        if(numEntero%10==5){
            if(cantDecimales>0){
                cantDecimal++;
            }
            else{
                cantEntero++;
            }
        }
        cantDecimales--;
        numEntero=numEntero/10;
    }
    printf("Cant enteros: %d\nCant decimales: %d\n", cantEntero, cantDecimal);
}
*/
/* Ej 19.1 7/10
#include <stdio.h>
int main(){
    int num, cant = 0;
    scanf("%d", &num);
    while(num>0){
        if(num%10==5){
            cant++;
        }
        num=num/10;
    }
    printf("%d\n", cant);
}
*/
/* Ej 18. 10/10
#include <stdio.h>
int main(){
    int num, factorial=1;
    scanf("%d", &num);
    if(num<0){
        printf("choose a valid number (>=0)\n");
    }
    else{
        while(num>0){
            factorial=factorial*num;
            num--;
        }
        printf("%d\n", factorial);
    }
    return 0;
}
*/
/* Ej 17. 5/5
#include <stdio.h>
int main(){
    int num = 1;
    while(1){
        printf("%d\n", num=num*10);
    }
    return 0;
}
*/
/* Ej 16. 9/15
#include <stdio.h>
int main(){
    int decimal, numNum = 0, pasada=1;
    scanf("%d", &decimal);
    while(decimal>0){
        int num=decimal%2;
        numNum = numNum+num*pasada;
        decimal=decimal-num;
        decimal = decimal/2;
        pasada=pasada*10;
    }
    printf("%d", numNum);
}
*/
/* Ej 15. 11/10 Check how to do it better
#include <stdio.h>
int main(){
    int num;
    long decimal = 0, aux2=1;
    scanf("%d", &num);
    while(num>=1){
        if(num%10 != 0 && num%10 != 1){
            printf("no es un numero en binario\n");
            return 0;
        }
        decimal = decimal + (num%2)*aux2;
        aux2=aux2*2;
        num = num/10;
    }
    printf("El numero en decimal es %ld\n", decimal);
    return 0;
}
*/
/* Ex 14. 11/15
#include <stdio.h>
int main(){
    char char1 = 'a', minChar = 'Z' + 1;
    while((char1 >= 'A' && char1 <= 'Z') || ((char1 >= 'a' && char1 <= 'z') || char1 == 32)){
        if(char1 != 32 && char1<minChar){
            minChar = char1;
        }
        char1=getchar();
    }
    if(minChar == 1){
        printf("debe ingresar alguna letra");
    } else{
        printf("%c\n", minChar);
    }
    return 0;
}
*/
/* Ex 13. 7/NA
#include <stdio.h>
int main(){
    int side, i;
    scanf("%d", &side);
    for(i=0;i<side*side;i++){
        printf("*");
        if((i+1)%side==0){      // i+1 asi al final de todo se hace un ultimo salto de linea
            printf("\n");
        }
    }
    return 0;
}
*/
/* Ex 11. 6/6
#include <stdio.h>
int main(){
    printf("N\t10*N\t100*N\t1000*N\n");
    for(int i=1;i<=20;i++){
        printf("%d\t%d\t%d\t%d\n", i, i*10, i*100, i*1000);
    }
    return 0;
}
*/
/* Ex 3. 13/15
#include <stdio.h>
int main(void){
    int num;
    scanf("%d", &num);
    if (num > 4000)
        printf("$%g\n", (300.0 + num * 0.09));
    else if (num >= 2000)
        printf("$%g\n", 300.0 + num * 0.07);
    else if (num >= 1000)
        printf("$%g\n", 300.0 + num * 0.05);
    else if (num > 0)
        printf("$%g\n", 300.0);
    else
        printf("enter a valid ammount (>0)");
    return 0;
}
*/
/* Ex 2. 9/15
#include <stdio.h>
int main(){
    int a, b;
    a = getchar();
    b = getchar();
    if (a > b)
        printf("'%c' es el mayor\n", a);
    else if (a < b)
        printf("'%c' es el mayor\n", b);
    else
        printf("son iguales");
    return 0;
}
*/
/* Ex 1. 9/15
#include <stdio.h>
int main(){
    char char1 = getchar();
    if (char1 >= 'A' && char1 <= 'Z')
        printf("Upper\n");
    else if (char1 >= 'a' && char1 <= 'z')
        printf("Lower\n");
    else
        printf("Not a letter\n");
    return 0;
}
*/