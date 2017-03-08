//
//  ClamPizza.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 08/03/16.
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
};

#endif
