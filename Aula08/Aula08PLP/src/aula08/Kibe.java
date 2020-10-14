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
public class Kibe extends Salgadinho {
            @Override
    	public void fritar()
	{
		System.out.println("Eu sou um "+this.getClass());
		this.setPreparado();
	}
        public void preparar(Fritadeira pan){
            pan.preparar(this);
        }
}
