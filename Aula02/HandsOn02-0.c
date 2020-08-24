#include <stdio.h>//Importa lib para a função printf

int main(void) {
	int a,b,*p,*q;//Declaração de int e ponteiros de int
	p = &a;//r-value de p recebe l-value de a - p aponta para a
	*p = 2;//l-value apontado por p, ou seja, a recebe 2
	q = &b;//r-value de q recebe l-value de b - q aponta para b
	*q = 3;//l-value apontado por q, ou seja, b recebe 3
	//Imprime valores:
	printf("a: ");
	printf("%i \n",a);
	printf("b: ");
	printf("%i \n",b);
	return 0;
}
