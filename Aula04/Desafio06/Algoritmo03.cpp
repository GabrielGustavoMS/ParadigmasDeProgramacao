#include <iostream>
using namespace std;
const int TAM = 5;

void imprime (int **p)
{
	for (int i=0; i<5 ;i++,p++)
	 cout << **p << " ";
}

void duplica (int **a)
{
	**a *= 2;
}

void inclui (int **p, int i)
{
	**p = i;
	duplica(p);
}

void preenche(int **p)
{
	for (int i=0; i<TAM; i++, p++)
	 {
	 	*p = new (int);
	 	inclui(p,i);
	 }
}

int main() {
	int **p = new (int*[5]);
	preenche(p);
	imprime(p);
	return 0;
}
