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
public abstract class Animal implements Icomparavel {

    public Animal(float peso) {
        this.peso = peso;
    }
    
    private float peso;

    public float getPeso() {
        return peso;
    }

    public void setPeso(float peso) {
        this.peso = peso;
    }
    
    
    abstract public String respira();
}
