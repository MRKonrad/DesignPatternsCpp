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
    printf("Pizza decription:\n %s\n", niceDescription().c_str());
}

std::string Pizza::niceDescription(){
    std::string display;
    display.append("---- " + _name + " ----\n");
    if (_dough != nullptr){
        display.append(_dough->toString() + "\n");
    }
    if (_sauce != nullptr){
        display.append(_sauce->toString() + "\n");
    }
    if (_cheese != nullptr){
        display.append(_cheese->toString() + "\n");
    }
    if (_clam != nullptr){
        display.append(_clam->toString() + "\n");
    }
    if (_pepperoni != nullptr){
        display.append(_pepperoni->toString() + "\n");
    }
    if (_veggies != nullptr){
        for (auto veggie : *_veggies){
            display.append(veggie->toString() + "\n");
        }
    }
    return display;
}
