//
//  HouseBlend.cpp
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 30/12/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#include "HouseBlend.h"

HouseBlend::HouseBlend(){}
HouseBlend::~HouseBlend(){}

double HouseBlend::cost(){
    return .99;
}

std::string HouseBlend::getDescription(){
    return "HouseBlend";
}
