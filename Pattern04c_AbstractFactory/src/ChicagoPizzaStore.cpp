//
//  ChicagoPizzaStore.cpp
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 05/03/17.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#include "ChicagoPizzaStore.h"

Pizza* ChicagoPizzaStore::createPizza(std::string type){

    _ingredientFactory = new ChicagoPizzaIngredientFactory();
    Pizza* pizza = nullptr;

    if (type == "cheese") {
        pizza = new CheesePizza(_ingredientFactory);
        pizza->setName("Chicago Style Cheese Pizza");
    } else if (type == "pepperoni") {
        pizza = new PepperoniPizza(_ingredientFactory);
        pizza->setName("Chicago Style Pepperoni Pizza");
    } else if (type == "clam") {
        pizza = new ClamPizza(_ingredientFactory);
        pizza->setName("Chicago Style Clam Pizza");
    } else if (type == "veggie") {
        pizza = new VeggiePizza(_ingredientFactory);
        pizza->setName("Chicago Style Veggie Pizza");
    }

    return pizza;
}

ChicagoPizzaStore::~ChicagoPizzaStore(){
    printf("ChicagoPizzaStore destructor\n");
    if (_ingredientFactory != nullptr){
        delete _ingredientFactory;
    }
}
