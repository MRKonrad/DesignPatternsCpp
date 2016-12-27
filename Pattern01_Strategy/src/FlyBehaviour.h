//
//  FlyBehaviour.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 27/12/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef FLYBEHAVIOUR_H
#define FLYBEHAVIOUR_H

#include <iostream>

class FlyBehaviour{
public:
    virtual void fly() = 0;
    virtual ~FlyBehaviour(){};
};

#endif
