//
//  Beverage.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 30/12/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef BEVERAGE_H
#define BEVERAGE_H

#include <string>
#include <stdio.h>

class Beverage {
    std::string _description;
public:
    virtual ~Beverage(){};

    virtual double cost() = 0;
    virtual std::string getDescription() = 0;
};

#endif
