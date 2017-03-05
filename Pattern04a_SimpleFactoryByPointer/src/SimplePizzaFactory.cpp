//
//  SimplePizzaFactory.cpp
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 5/01/17.
//  Copyright © 2017 Konrad Werys. All rights reserved.
//

#include "SimplePizzaFactory.h"
#include "CheesePizza.h"
#include "PepperoniPizza.h"
#include "ClamPizza.h"
#include "VeggiePizza.h"

Pizza* SimplePizzaFactory::createPizza(std::string type) {

    if (type == "cheese") {
        Pizza *temp = new CheesePizza();
        return temp;
    } else if (type == "pepperoni") {
        Pizza *temp =  new PepperoniPizza();
        return temp;
    } else if (type == "clam") {
        Pizza *temp =  new ClamPizza();
        return temp;
    } else if (type == "veggie") {
        Pizza *temp =  new VeggiePizza();
        return temp;
    } else {
        return nullptr;
    }
}
