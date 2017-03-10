//
//  Dough.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 07/03/17.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef DOUGH_H
#define DOUGH_H

#include <string>

class Dough {
public:
    virtual std::string toString() = 0;
    virtual ~Dough(){};
};
#endif
