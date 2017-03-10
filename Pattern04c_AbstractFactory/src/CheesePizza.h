//
//  CheesePizza.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 07/03/17.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef CHEESEPIZZA_H
#define CHEESEPIZZA_H

#include "Pizza.h"
#include "PizzaIngredientFactory.h"

class CheesePizza : public Pizza {
    PizzaIngredientFactory *_ingredientFactory;
public:
    CheesePizza(PizzaIngredientFactory *ingredientFactory){
        _ingredientFactory = ingredientFactory;
    }
    void prepare() override {
        printf("Preparing %s\n", _name.c_str());
        _dough  = _ingredientFactory->createDough();
        _sauce  = _ingredientFactory->createSauce();
        _cheese = _ingredientFactory->createCheese();
    }
    ~CheesePizza() override{
        printf("CheesePizza destructor\n");
        if (_dough != nullptr){
            delete _dough;
        }
        if (_sauce != nullptr){
            delete _sauce;
        }
        if (_cheese != nullptr){
            delete _cheese;
        }
    }
};

#endif
