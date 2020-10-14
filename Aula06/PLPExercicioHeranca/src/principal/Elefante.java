/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package principal;

/**
 *
 * @author gabri
 */
public class Elefante extends Animal {

    public Elefante(float peso) {
        super(peso);
    }

   

    @Override
    public String respira() {
        return "Elefante respirando";
    }

    @Override
    public boolean maior(Icomparavel outro) {
       
        if(this.getPeso()>((Animal)outro).getPeso()){
            return true;
        }
        return false;
    }

  
    
}
