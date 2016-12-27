//
//  RubberDuck.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 27/12/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef RUBBERDUCK_H
#define RUBBERDUCK_H

#include "Duck.h"
#include "FlyNoWay.h"
#include "QuackSqueak.h"

class RubberDuck : public Duck{
public:
    RubberDuck();
    ~RubberDuck();
    void display();
};

#endif
