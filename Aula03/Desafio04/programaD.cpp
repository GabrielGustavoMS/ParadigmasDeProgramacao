//Programa D
#include <iostream>
using namespace std;

int f(int &x, int &y)// & inidica passagem por referência
{
	x=1;
	y=1;
	return x+y;
}

int main() {
    int x=0,y=0,z=0;
    cout << x << y << z << endl;//Tem a mesma função do printf
    z = f(x,y);
    cout << x << y << z << endl;
	return 0;
}