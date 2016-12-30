//
//  Soy.cpp
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 30/12/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#include "Soy.h"

Soy::Soy(Beverage *beverage){
    _beverage = beverage;
}

Soy::~Soy(){
    delete _beverage;
}

double Soy::cost(){
    return _beverage->cost() + .20;
}

std::string Soy::getDescription(){
    return _beverage->getDescription().append(", Soy");
}
