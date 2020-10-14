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
class Fritadeira implements Preparador {

    @Override
    public void preparar(Pastel p) {
        if(!p.isPreparado()){
        System.out.println(this.getClass() + " estou fritando " + p.getClass());
        p.fritar();
        
        }else{
           System.out.println("Não é necessário preparar, pois "+p.getClass()+" já está pronto");
       }
    }

    @Override
    public void preparar(Kibe k) {
        if(!k.isPreparado()){
        System.out.println(this.getClass() + " estou fritando " + k.getClass());
        k.fritar();
        
        }else{
           System.out.println("Não é necessário preparar, pois "+k.getClass()+" já está pronto");
       }
    }
    
    
}
