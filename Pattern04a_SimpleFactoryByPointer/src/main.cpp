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
    printf("DesignPatternsCPP: a simple factory; return by pointer\n");

    SimplePizzaFactory simpleFactory;
    PizzaStore store(simpleFactory);

    Pizza *pizza1 = store.orderPizza("cheese");
    printf("We ordered a %s \n", pizza1->getName().c_str());
    printf("%s",pizza1->niceDescription().c_str());
    delete pizza1;

    Pizza *pizza2 = store.orderPizza("veggie");
    printf("We ordered a %s \n", pizza2->getName().c_str());
    printf("%s",pizza2->niceDescription().c_str());
    delete pizza2;
}
