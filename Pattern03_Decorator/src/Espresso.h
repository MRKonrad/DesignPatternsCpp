//
//  Espresso.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 30/12/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef ESPRESSO_H
#define ESPRESSO_H

#include "Beverage.h"

class Espresso : public Beverage{

public:
    Espresso();
    ~Espresso();

    double cost();
    std::string getDescription();
};

#endif
