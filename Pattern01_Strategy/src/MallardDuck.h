//
//  MallardDuck.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 27/12/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef MALLARDDUCK_H
#define MALLARDDUCK_H

#include "Duck.h"
#include "FlyWithWings.h"
#include "Quack.h"

class MallardDuck : public Duck{
public:
    MallardDuck();
    ~MallardDuck();
    void display();
};

#endif
