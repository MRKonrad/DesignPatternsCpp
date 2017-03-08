//
//  Pizza.cpp
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 5/01/17.
//  Copyright © 2017 Konrad Werys. All rights reserved.
//

#include "Pizza.h"

std::string Pizza::getName(){
    return _name;
}

void Pizza::setName(std::string name){
    _name = name;
}

void Pizza::prepare(){
    printf("Bake for 25 minutes at 350 %s\n", _name.c_str());
}

void Pizza::bake(){
    printf("Baking %s\n", _name.c_str());
}

void Pizza::cut(){
    printf("Cutting the pizza into diagonal slices %s\n", _name.c_str());
}

void Pizza::box(){
    printf("Place pizza in official PizzaStore box %s\n", _name.c_str());
}

std::string Pizza::niceDescription(){
    std::string display;
    display.append("---- " + _name + " ----\n");
    display.append(_dough->toString() + "\n");
    display.append(_sauce->toString() + "\n");
    // for (std::string topping : _toppings) {
    //     display.append(topping + "\n");
    // }
    return display;
}
