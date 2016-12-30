//
//  Mocha.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 30/12/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef MOCHA_H
#define MOCHA_H

#include "Beverage.h"

class Mocha : public Beverage{
    Beverage *_beverage;
public:
    Mocha(Beverage *beverage);
    ~Mocha();

    double cost();
    std::string getDescription();
};

#endif
