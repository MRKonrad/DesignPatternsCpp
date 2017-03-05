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

Pizza SimplePizzaFactory::createPizza(std::string type) {

    if (type == "cheese") {
        return CheesePizza();
    } else if (type == "pepperoni") {
        return PepperoniPizza();
    } else if (type == "clam") {
        return ClamPizza();
    } else if (type == "veggie") {
        return VeggiePizza();
    }
}
