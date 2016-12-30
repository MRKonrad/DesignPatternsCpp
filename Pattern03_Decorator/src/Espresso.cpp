//
//  Espresso.cpp
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 30/12/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#include "Espresso.h"

Espresso::Espresso(){}
Espresso::~Espresso(){}

double Espresso::cost(){
    return .89;
}

std::string Espresso::getDescription(){
    return "Espresso";
}
