#include <stdio.h>

int main(void) {
	// your code goes here
	int array[10] = {1,3,5,7,9,11,13,15,17,19}, *p;
	p=array;
	for(int i = 0; i<10;i++,p++){
		*p = (*p) * 2;
	}
	p=array;//Volta ponteiro para 1ª posição do array
	for(int i = 0;i<10;i++,p++){
		printf("%i \n",*p);
	}
	
	return 0;
}
