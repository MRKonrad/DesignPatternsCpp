//
//  RubberDuck.cpp
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 27/12/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#include "RubberDuck.h"

RubberDuck::RubberDuck(){
    flyBehaviour = new FlyNoWay();
    quackBehaviour = new QuackSqueak();
}

RubberDuck::~RubberDuck(){
    delete flyBehaviour;
    delete quackBehaviour;
}

void RubberDuck::display(){
    std::cout << "I am a RubberDuck!\n";
}
