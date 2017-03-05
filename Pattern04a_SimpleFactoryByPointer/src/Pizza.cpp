//
//  Pizza.cpp
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 5/01/17.
//  Copyright © 2017 Konrad Werys. All rights reserved.
//

#include "Pizza.h"

Pizza::~Pizza(){
    printf("Pizza destructor\n");
}

std::string Pizza::getName(){
    return _name;
}

void Pizza::prepare(){
    printf("----------------------------------\n");
    printf("Preparing %s\n", _name.c_str());
}

void Pizza::bake(){
    printf("Baking %s\n", _name.c_str());
}

void Pizza::cut(){
    printf("Cutting %s\n", _name.c_str());
}

void Pizza::box(){
    printf("Boxing %s\n", _name.c_str());
}

std::string Pizza::niceDescription(){
    std::string display;
    display.append("---- " + _name + " ----\n");
    display.append(_dough + "\n");
    display.append(_sauce + "\n");
    for (std::string topping : _toppings) {
        display.append(topping + "\n");
    }
    return display;
}
