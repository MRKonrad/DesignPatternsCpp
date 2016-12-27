//
//  Duck.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 27/12/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef DUCK_H
#define DUCK_H

#include <iostream>
#include "FlyBehaviour.h"
#include "QuackBehaviour.h"

// Duck class made abstract by setting virtual void display() = 0;
class Duck {
protected:
    FlyBehaviour *flyBehaviour;
    QuackBehaviour *quackBehaviour;
    
public:
    virtual ~Duck(){};
    virtual void display() = 0; // pure virtual
    void performQuack();
    void performFly();
    void setFlyBehaviour(FlyBehaviour *newFlyBehaviour);
    void setQuackBehaviour(QuackBehaviour *newQuackBehaviour);
};

#endif
