//
//  HouseBlend.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 30/12/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef HOUSEBLEND_H
#define HOUSEBLEND_H

#include "Beverage.h"

class HouseBlend : public Beverage{

public:
    HouseBlend();
    ~HouseBlend();

    double cost();
    std::string getDescription();
};

#endif
