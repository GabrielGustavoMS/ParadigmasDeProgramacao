#include <stdio.h>

//typedef -> permite usar um struct sem o escrever struct

typedef struct{
	int idade;
	int peso;
}Pet;

int main(void) {
	//Alocação estatica int a[1][3], b[3][1], c[3][3];
	int *a, *b, *c;
	a = (int*) malloc(3*sizeof(int));// malloc retorna void*
	b = (int*) malloc(3*sizeof(int));
	c = (int*) malloc(9*sizeof(int));
	//Preenchendo a matriz a com 4, 6, 8 
	a[0]=4;//*(a+0) -> se a for FF00 e 1 int = 4bytes (32b)
	a[1]=6;
	a[2]=8;
	//*(c+1*tam array + 1) = 
	
	Pet rex, *q;
	//res é um Pet alocado estaticamente 
	//q
	
	q = &rex;
	rex.idade = 10;
	rex.peso = 15;
	
	q->idade = 11;
	q->peso = 16;
	
	q = (Pet*) malloc(sizeof(Pet)*10);
	
	return 0;
}