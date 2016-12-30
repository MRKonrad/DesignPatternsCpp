//
//  Soy.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 30/12/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef SOY_H
#define SOY_H

#include "Beverage.h"

class Soy : public Beverage{
    Beverage *_beverage;
public:
    Soy(Beverage *beverage);
    ~Soy();

    double cost();
    std::string getDescription();
};

#endif
