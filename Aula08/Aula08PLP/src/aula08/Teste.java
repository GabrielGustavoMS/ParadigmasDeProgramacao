/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aula08;

/**
 *
 * @author gabri
 */
public class Teste {
    public static void main(String[] args) {
                Salgadinho s1,s2,s3,s4;
 		Fritadeira pan;
 		s1 = new Pastel();
                s3 = new Pastel();
 		s2 = new Kibe();
                s4 = new Kibe();
 		pan = new Fritadeira();
                s1.preparar(pan);
                System.out.println("");
                s2.preparar(pan);
                System.out.println("");
                
                System.out.println("Tentando preparar salgados novamente! ");
              
                s1.preparar(pan);
                s2.preparar(pan);
                System.out.println();             
                System.out.println("Buscando uma vida mais saudável ...");
                System.out.println("");
                Fritadeira pan2 = new Airfryer();
                s3.preparar(pan2);
                s4.preparar(pan2);
                
 		
    }
}
