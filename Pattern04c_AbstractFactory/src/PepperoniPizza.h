//
//  PepperoniPizza.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 07/03/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef PEPPERONIPIZZA_H
#define PEPPERONIPIZZA_H

#include "Pizza.h"
#include "PizzaIngredientFactory.h"

class PepperoniPizza : public Pizza {
    PizzaIngredientFactory *_ingredientFactory;
public:
    PepperoniPizza(PizzaIngredientFactory *ingredientFactory){
        _ingredientFactory = ingredientFactory;
    }
    void prepare() override {
        printf("Preparing %s\n", _name.c_str());
        _dough  = _ingredientFactory->createDough();
        _sauce  = _ingredientFactory->createSauce();
        _cheese = _ingredientFactory->createCheese();
        _veggies = _ingredientFactory->createVeggies();
        _pepperoni = _ingredientFactory->createPepperoni();
    }
};

#endif
