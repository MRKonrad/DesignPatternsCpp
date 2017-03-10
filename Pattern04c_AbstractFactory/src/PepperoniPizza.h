//
//  PepperoniPizza.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 07/03/17.
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
    ~PepperoniPizza() override {
        printf("PepperoniPizza destructor\n");
        if (_dough != nullptr){
            delete _dough;
        }
        if (_sauce != nullptr){
            delete _sauce;
        }
        if (_cheese != nullptr){
            delete _cheese;
        }
        if (_veggies != nullptr){
            delete _veggies;
        }
        if (_pepperoni != nullptr){
            delete _pepperoni;
        }
    }
};

#endif
