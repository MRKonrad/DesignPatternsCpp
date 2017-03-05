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

class Pizza {
protected:
    std::string _name;
    std::string _dough;
    std::string _sauce;
    std::vector<std::string> _toppings;
public:
    virtual ~Pizza(){};

    virtual std::string getName();
    virtual void prepare();
    virtual void bake();
    virtual void cut();
    virtual void box();
    virtual std::string niceDescription();
};

#endif
