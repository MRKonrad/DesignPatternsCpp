//
//  PizzaStore.cpp
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 5/01/17.
//  Copyright © 2017 Konrad Werys. All rights reserved.
//

#include "PizzaStore.h"

PizzaStore::PizzaStore(SimplePizzaFactory &factory) {
    _factory = factory;
}

Pizza PizzaStore::orderPizza(std::string type) {
    Pizza pizza;

    pizza = _factory.createPizza(type);

    pizza.prepare();
    pizza.bake();
    pizza.cut();
    pizza.box();

    return pizza;
}
