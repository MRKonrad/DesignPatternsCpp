//
//  PizzaStore.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 05/03/17.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef PIZZASTORE_H
#define PIZZASTORE_H

#include <stdio.h>

#include "Pizza.h"
#include "CheesePizza.h"
#include "PepperoniPizza.h"
#include "ClamPizza.h"
#include "VeggiePizza.h"

class PizzaStore {
public:
    PizzaIngredientFactory *_ingredientFactory = nullptr;
    Pizza* orderPizza(std::string type);
protected:
    virtual ~PizzaStore();
    virtual Pizza* createPizza(std::string type) = 0;
};

#endif
