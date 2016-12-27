//
//  Duck.cpp
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 27/12/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#include "Duck.h"

void Duck::performFly(){
    flyBehaviour->fly();
}

void Duck::performQuack(){
    quackBehaviour->quack();
}

void Duck::setFlyBehaviour(FlyBehaviour *newFlyBehaviour){
    delete flyBehaviour;
    flyBehaviour = newFlyBehaviour;
}

void Duck::setQuackBehaviour(QuackBehaviour *newQuackBehaviour){
    delete quackBehaviour;
    quackBehaviour = newQuackBehaviour;
}
