//
//  PizzaStore.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 05/03/17.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef PIZZASTORE_H
#define PIZZASTORE_H

#include "Pizza.h"
#include <stdio.h>

class PizzaStore {
public:
    Pizza orderPizza(std::string type);
    virtual Pizza createPizza(std::string type) = 0;
};

#endif
