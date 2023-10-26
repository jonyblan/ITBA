#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <malloc.h>
#include <math.h>
#include <time.h>

/* Ej 4. FALTA
#define CANT_RADIOS 5
#define CANT_TESTS 5
#define MIN_RADIO 5
#define CANT (CANT_RADIOS*CANT_TESTS)
#define SPEED 0.1 // time in seconds between each move

typedef struct{
	int time;
	int radio;
	int numTest;
} test;

typedef struct{
	int x;
	int y;
} coord;

void iniTests(test *tests){
	int i, j;
	for(i=0; i<CANT_RADIOS; i++){
		for(j=0; j<CANT_TESTS; j++){
			tests[i*CANT_RADIOS+j].radio=MIN_RADIO+i;
			tests[i*CANT_RADIOS+j].numTest=j;
		}
	}
}

void iniAverage(int *average){
	int i;
	for(i=0; i<CANT_RADIOS; i++){
		average[i]=0;
	}
}

void iniTable(int radio, char table[][radio]){
	int i, j;
	for(i=-(radio/2); i<radio/2; i++){
		for(j=0; j<radio; j++){
			if(fabs(i)+fabs(j)==radio/2){
				table[i+(radio/2)][j+(radio/2)]='|';
			}
			else{
				table[i+(radio/2)][j+(radio/2)]=' ';
			}
		}
	}
	table[radio/2][radio/2]='0';
}

void iniCords(int radio){
	int x=radio/2;
	int y=radio/2;
}

void showState(int radio, char table[][radio]){
	int i, j;
	for(i=0; i<radio; i++){
		for(j=0; j<radio; j++){
			printf("%c", table[i][j]);
		}
	}
}

void move(int radio, char table[][radio], coord coords){
	int randNum;
	table[coords.x][coords.y]=' ';
	randNum=rand()%4;
	switch (randNum){
		case 0:
			coords.x++;
			break;
		case 1:
			coords.x--;
			break;
		case 2:
			coords.y++;
			break;
		case 3:
			coords.y--;
			break;
	}
	table[coords.x][coords.y]='0';
}

int didTouch(coord coords, int radio){
	if((fabs(coords.x-radio/2)+fabs(coords.y-radio/2)) >= radio/2){
		return 1;
	}
	return 0;
}

void doTest(test tests[], int i){
	int radio=tests[i].radio;
	int numTest=tests[i].numTest;
	int toco=0, time=0;
	char table[radio][radio];
	coord coords;
	iniTable(radio, table);
	iniCords(radio);
	while(!toco){
		showState(radio, table);
		sleep(SPEED);
		move(radio, table, coords);
		toco = didTouch(coords, radio);
		time++;
	}
	tests[i].time=time;
}

void getAverage(test *tests, int *average){
	int i;
	for(i=0; i<CANT; i++){
		average[tests[i].radio-MIN_RADIO]+=tests[i].time;
	}
	for(i=0; i<CANT_RADIOS; i++){
		average[i]/=CANT_TESTS;
	}
}

void analize(test tests[], int average[]){
	int i;
	for(i=0; i<CANT; i++){
        printf("a\n");
		doTest(tests, i);
	}
    printf("b\n");
	getAverage(tests, average);
}

void showResults(int average[]){
	int i;
	printf("Radio\tTiempo\tR/T");
	for(i=0; i<CANT_RADIOS; i++){
		printf("%d\t%d\t%d\n", i+MIN_RADIO, average[i], (i+MIN_RADIO)/average[i]);
	}
}

int main(){
	srand(time(NULL));
	test tests[CANT];
	int average[CANT_RADIOS];
	iniTests(tests);
    printf("a\n");
	iniAverage(average);
    printf("b\n");
	analize(tests, average);
    printf("c\n");
	showResults(average);
}
*/
