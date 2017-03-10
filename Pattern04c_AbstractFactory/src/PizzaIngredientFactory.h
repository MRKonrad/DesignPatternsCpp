//
//  PizzaIngredientFactory.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 07/03/17.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef PIZZAINGREDIENTFACTORY_H
#define PIZZAINGREDIENTFACTORY_H

#include <vector>
#include "Dough.h"
#include "Sauce.h"
#include "Veggies.h"
#include "Cheese.h"
#include "Pepperoni.h"
#include "Clam.h"

class PizzaIngredientFactory{
public:
    virtual ~PizzaIngredientFactory(){};
    virtual Dough* createDough() = 0;
    virtual Sauce* createSauce() = 0;
    virtual Cheese* createCheese() = 0;
    virtual std::vector<Veggies*>* createVeggies() = 0;
    virtual Pepperoni* createPepperoni() = 0;
    virtual Clam* createClam() = 0;
};

#endif
