//
//  PizzaStore.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 5/01/17.
//  Copyright © 2017 Konrad Werys. All rights reserved.
//

#ifndef PIZZASTORE_H
#define PIZZASTORE_H

#include "SimplePizzaFactory.h"

class PizzaStore {
    SimplePizzaFactory _factory;
public:
    PizzaStore(SimplePizzaFactory &factory);
	Pizza* orderPizza(std::string type);
};

#endif
