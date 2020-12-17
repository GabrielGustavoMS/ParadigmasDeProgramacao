/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package fruta;

/**
 *
 * @author gabri
 */
public class FruitHelper {

    public static boolean isRipe(Apple apple) {
        return apple.isIsRipe();
    }

    public static boolean isRipeInBasket(Basket<Apple> basket){
        Apple apple = basket.getElement(); // 1
        return isRipe(apple); // 2

    }

}
