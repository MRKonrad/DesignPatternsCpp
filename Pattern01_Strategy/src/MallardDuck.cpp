//
//  MallardDuck.cpp
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 27/12/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#include "MallardDuck.h"

MallardDuck::MallardDuck(){
    flyBehaviour = new FlyWithWings();
    quackBehaviour = new Quack();
}

MallardDuck::~MallardDuck(){
    delete flyBehaviour;
    delete quackBehaviour;
}

void MallardDuck::display(){
    std::cout << "I am a MallardDuck!\n";
}
