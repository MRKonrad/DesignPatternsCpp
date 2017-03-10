//
//  Pizza.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 5/01/17.
//  Copyright © 2017 Konrad Werys. All rights reserved.
//

#ifndef PIZZA_H
#define PIZZA_H

#include <string>
#include <vector>
#include <stdio.h>

#include "Dough.h"
#include "Sauce.h"
#include "Veggies.h"
#include "Cheese.h"
#include "Pepperoni.h"
#include "Clam.h"

class Pizza {
protected:
    std::string _name;

    Dough *_dough = nullptr;
    Sauce *_sauce = nullptr;
    std::vector<Veggies*> *_veggies = nullptr;
    Cheese *_cheese = nullptr;
    Pepperoni *_pepperoni = nullptr;
    Clam *_clam = nullptr;

public:
    virtual ~Pizza(){};

    virtual std::string getName();
    virtual void setName(std::string);
    virtual void prepare() = 0;
    virtual void bake();
    virtual void cut();
    virtual void box();
    virtual std::string niceDescription();
};

#endif
