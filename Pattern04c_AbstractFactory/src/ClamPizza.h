//
//  ClamPizza.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 08/03/17.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef ClamPizza_H
#define ClamPizza_H

#include "Pizza.h"
#include "PizzaIngredientFactory.h"

class ClamPizza : public Pizza {
    PizzaIngredientFactory *_ingredientFactory;
public:
    ClamPizza(PizzaIngredientFactory *ingredientFactory){
        _ingredientFactory = ingredientFactory;
    }
    void prepare() override {
        printf("Preparing %s\n", _name.c_str());
        _dough  = _ingredientFactory->createDough();
        _sauce  = _ingredientFactory->createSauce();
        _cheese = _ingredientFactory->createCheese();
        _clam   = _ingredientFactory->createClam();
    }
    ~ClamPizza() override{
        printf("ClamPizza destructor\n");
        if (_dough != nullptr){
            delete _dough;
        }
        if (_sauce != nullptr){
            delete _sauce;
        }
        if (_cheese != nullptr){
            delete _cheese;
        }
        if (_clam != nullptr){
            delete _clam;
        }
    }
};

#endif
