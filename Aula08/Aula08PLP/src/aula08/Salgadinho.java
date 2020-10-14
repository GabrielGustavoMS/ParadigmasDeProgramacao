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
public abstract class Salgadinho{

    private boolean preparado;

    public Salgadinho() {
        this.preparado = false;
    }

    public void setPreparado() {
        this.preparado = true;
    }
    public boolean isPreparado(){
        return this.preparado;
    }
    public abstract void fritar();
    public abstract void preparar(Fritadeira pan);
}
