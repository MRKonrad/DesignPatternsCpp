//
//  main.cpp
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 30/12/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#include <stdio.h>
#include "PizzaStore.h"

int main()
{
    printf("DesignPatternsCPP: a simple factory\n");

    SimplePizzaFactory simpleFactory;
    PizzaStore store(simpleFactory);

    Pizza pizza = store.orderPizza("cheese");
    printf("We ordered a %s \n", pizza.getName().c_str());
    printf("%s",pizza.niceDescription().c_str());

    pizza = store.orderPizza("veggie");
    printf("We ordered a %s \n", pizza.getName().c_str());
    printf("%s",pizza.niceDescription().c_str());
}
