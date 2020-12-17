#include <iostream>
using namespace std;

class IComparavel
{
 public: virtual bool maior (IComparavel *outro) = 0;	
};

class Animal : public IComparavel
{
 private: float peso;
 public: 
 float get() { return this->peso; }
 void set(float peso) { this->peso = peso; }
 virtual void respira() = 0;
 virtual void mover() = 0;
 bool maior (IComparavel *outro)
 {
 	return (get()>((Animal*) outro)->get());
 }
};

class Elefante : public Animal
{
 public:
 void respira()
 { cout << "Respiro pela tromba"; }
 void mover()
 { cout<< "Eu ando"; }
};

class Minhoca : public Animal
{
public:
 void respira()
 { cout << "Respiro pela pele"; }
 void mover()
 { cout<< "Eu rastejo"; }
};

class Floresta
{
	public: Animal* a[2];
};

int main ()
	{
		Floresta amazonica;
		amazonica.a[0] = new Elefante();
		amazonica.a[1] = new Minhoca();
		amazonica.a[0]->respira();
		amazonica.a[1]->respira();
		amazonica.a[1]->mover();
		cout << amazonica.a[0]->maior(amazonica.a[1]);

	}