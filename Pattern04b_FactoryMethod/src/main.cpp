//
//  main.cpp
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 05/03/17.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#include "NYPizzaStore.h"
#include "ChicagoPizzaStore.h"

int main()
{
    printf("DesignPatternsCPP: a factory method\n");

    NYPizzaStore nyStore;
    ChicagoPizzaStore chicagoStore;

    Pizza pizza = nyStore.orderPizza("cheese");
    printf("Ethan ordered a %s \n", pizza.getName().c_str());

    pizza = chicagoStore.orderPizza("cheese");
    printf("Joel ordered a %s \n", pizza.getName().c_str());

    pizza = nyStore.orderPizza("clam");
    printf("Ethan ordered a %s \n", pizza.getName().c_str());

    pizza = chicagoStore.orderPizza("clam");
    printf("Joel ordered a %s \n", pizza.getName().c_str());

    pizza = nyStore.orderPizza("pepperoni");
    printf("Ethan ordered a %s \n", pizza.getName().c_str());

    pizza = chicagoStore.orderPizza("pepperoni");
    printf("Joel ordered a %s \n", pizza.getName().c_str());

    pizza = nyStore.orderPizza("veggie");
    printf("Ethan ordered a %s \n", pizza.getName().c_str());

    pizza = chicagoStore.orderPizza("veggie");
    printf("Joel ordered a %s \n", pizza.getName().c_str());
}
