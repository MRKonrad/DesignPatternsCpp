//
//  Pepperoni.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 07/03/17.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef PEPPERONI_H
#define PEPPERONI_H

#include <string>

class Pepperoni {
public:
    virtual std::string toString() = 0;
    virtual ~Pepperoni(){};
};

#endif
