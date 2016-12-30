//
//  Mocha.cpp
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 30/12/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#include "Mocha.h"

Mocha::Mocha(Beverage *beverage){
    _beverage = beverage;
}

Mocha::~Mocha(){
    delete _beverage;
}

double Mocha::cost(){
    return _beverage->cost() + .30;
}

std::string Mocha::getDescription(){
    return _beverage->getDescription().append(", Mocha");
}
