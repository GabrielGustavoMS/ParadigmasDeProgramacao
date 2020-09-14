#include <stdio.h>
#include <stdlib.h>

int max=0;

void imprime (int *p)
{
	for (int i=0; i<max; i++, p++)
	 printf("%d ",*p);
}

void preenche (int *p)
{
  do
  {
   *p = rand( ); p++; max++;
  }
  while (*(p-1) % 3 != 0 || max==10); 
}

int main(void) {
	int *p = (int*) malloc(sizeof(int)*10);	
	preenche(p);
	imprime(p);
	return 0;
}
