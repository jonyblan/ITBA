// Lines are counted as long as they're not brackets or declaration/definition of a variable
// The objective of these excercises is to write a code is as few lines as possible, not readability
// or looking for a real world implementation.


/* Ej 15. Falta terminar (verificar si el numero ingresado es binario)
#include <stdio.h>
int main(){
    int num, decimal = 0, aux, aux2=1;
    scanf("%d", &num);
    while(num>=1){
        aux = num%2;
        decimal = decimal + aux*aux2;
        aux2=aux2*2;
        num = num/10;
    }
    if(num>1){
        printf("a");
        return 0;
    }
    printf("El numero en decimal es %d\n", decimal);
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
    int i;
    for(i=1;i<=20;i++){
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