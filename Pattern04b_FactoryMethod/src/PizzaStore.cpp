//
//  PizzaStore.cpp
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 05/03/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#include "PizzaStore.h"

Pizza PizzaStore::orderPizza(std::string type){

    Pizza pizza = createPizza(type);

    printf("------\n");
    printf("In PizzaStore::orderPizza after calling PizzaStore:createPizza\n");
    printf("%s", pizza.niceDescription().c_str());

    pizza.prepare();
    pizza.bake();
    pizza.cut();
    pizza.box();

    return pizza;
}
