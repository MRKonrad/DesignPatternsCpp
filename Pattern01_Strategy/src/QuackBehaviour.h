//
//  FlyBehaviour.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 27/12/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef QUACKBEHAVIOUR_H
#define QUACKBEHAVIOUR_H

#include <iostream>

class QuackBehaviour{
public:
    virtual void quack() = 0;
    virtual ~QuackBehaviour(){};
};

#endif
