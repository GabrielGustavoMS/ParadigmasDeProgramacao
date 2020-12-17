/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package fruta;

/**
 *
 * @author HT2
 */
public class Orange extends Fruit{
    private boolean isRipe;

    public Orange(boolean isRipe) {
        this.isRipe = isRipe;
    }

    public boolean isIsRipe() {
        return isRipe;
    }

    public void setIsRipe(boolean isRipe) {
        this.isRipe = isRipe;
    }
    
    
}
