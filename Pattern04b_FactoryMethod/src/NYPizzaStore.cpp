//
//  NYPizzaStore.cpp
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 05/03/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#include "NYPizzaStore.h"

Pizza NYPizzaStore::createPizza(std::string type){
    if (type == "cheese") {
        return NYStyleCheesePizza();
    } else if (type == "pepperoni") {
        return NYStylePepperoniPizza();
    } else if (type == "clam") {
        return NYStyleClamPizza();
    } else if (type == "veggie") {
        return NYStyleVeggiePizza();
    }
}
