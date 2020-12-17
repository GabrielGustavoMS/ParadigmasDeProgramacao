/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package fruta;

import java.util.ArrayList;

/**
 *
 * @author gabri
 */
public class Basket<T> {
  ArrayList <T> basket;

    public Basket() {
        this.basket = new ArrayList<>();
    }
    public T getElement(){
        return this.basket.get(0);
    }
  
  
}
