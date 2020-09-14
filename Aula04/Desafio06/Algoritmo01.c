#include <stdio.h>
#include <stdlib.h>

void incrementa (int *q)
{	
	//Sem o parênteses ocorre o incremento do ponteiro
	(*q)++; 
}

int main(void) {
	int *p = (int*) malloc (sizeof(int));	
	*p = 0;
	incrementa (p);
	printf("%d",*p);
	return 0;
}
