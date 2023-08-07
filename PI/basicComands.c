/*
Execute:
    cd /mnt/c/Users/Usuario/desktop/PI/TPS
    gcc [name].c -o [nameNewFile]

Basic Program:
    #include <stdio.h>
    int main(void){
        int name;
        scanf("%d", &name);
        char char1 = getchar();
        printf("%d - %c", name, char1);
        return 0;
    }

%:
    - d: decimal    ✓
    - f: float      ✓
    - c: char       ✓
    - i: int
    - o: octal
    - u: unsigned int
    - x: hexa
    - s: string
    - e: double

\:
    - n: new line   ✓
    - t: tab        ✓

Const: 
    #define AGE_MAYORITY 18l (could be a long value)    ✓
    const num = 1; (cant be changed)
    enum week {Monday = 0, Tuesday, Wednesday}; --> Wednesday = 2
    enum week day;
    day = Tuesday; --> day = 1
    typedef enum {False = 0, True} bool; [typedef enum {data} newName]

int x = 2; --> type, name, left value (dir memory), right value (value)

*/