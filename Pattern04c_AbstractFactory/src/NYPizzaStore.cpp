//
//  NYPizzaStore.cpp
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 05/03/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#include "NYPizzaStore.h"

Pizza* NYPizzaStore::createPizza(std::string type){

    PizzaIngredientFactory *_ingredientFactory = new NYPizzaIngredientFactory();
    Pizza* pizza = nullptr;

    if (type == "cheese") {
        pizza = new CheesePizza(_ingredientFactory);
        pizza->setName("NY Style Cheese Pizza");
    } else if (type == "pepperoni") {
        pizza = new PepperoniPizza(_ingredientFactory);
        pizza->setName("NY Style Pepperoni Pizza");
    } else if (type == "clam") {
        pizza = new ClamPizza(_ingredientFactory);
        pizza->setName("NY Style Clam Pizza");
    } else if (type == "veggie") {
        pizza = new VeggiePizza(_ingredientFactory);
        pizza->setName("NY Style Veggie Pizza");
    }
    return pizza;
}
