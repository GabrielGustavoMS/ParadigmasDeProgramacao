/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

interface IComparavel
{
 public boolean maior (IComparavel outro);	
}

abstract class Animal implements IComparavel
{
 private float peso;
 public float get() { return this.peso; }
 public void set(float peso) { this.peso = peso; }
 public abstract void respira();
 public abstract void mover();
 public boolean maior (IComparavel outro)
 {
 	return (get()>((Animal) outro).get());
 }
}

class Elefante extends Animal
{
 public void respira()
 { System.out.println("Respiro pela tromba"); }
 public void mover()
 { System.out.println("Eu ando"); }
}

class Minhoca extends Animal
{
 public void respira()
 { System.out.println("Respiro pela pele"); }
 public void mover()
 { System.out.println("Eu rastejo"); }
}

class Floresta
{
	private Animal a[] = new Animal[2];
	
	public static void main (String[] args) throws java.lang.Exception
	{
		Floresta amazonica = new Floresta();
		amazonica.a[0] = new Elefante();
		amazonica.a[1] = new Minhoca();
		amazonica.a[0].respira();
		amazonica.a[1].respira();
		amazonica.a[1].mover();
		System.out.println(amazonica.a[0].maior(amazonica.a[1]));
		//if (amazonica.a[0] instanceof Elefante) System.out.println("Elef");
		//else if (amazonica.a[0] instanceof Minhoca) System.out.println("Minh");
		System.out.println(amazonica.a[0].getClass());
	}
}