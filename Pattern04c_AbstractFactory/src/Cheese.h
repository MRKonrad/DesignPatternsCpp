//
//  Cheese.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 07/03/17.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef CHEESE_H
#define CHEESE_H

#include <string>

class Cheese {
public:
    virtual std::string toString() = 0;
    virtual ~Cheese(){};
};

#endif
