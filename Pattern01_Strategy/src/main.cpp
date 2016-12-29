//
//  main.cpp
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 27/12/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#include <iostream>
#include "MallardDuck.h"
#include "RubberDuck.h"
#include "FlyNoWay.h"
#include "FlyInRocket.h"

int main()
{
    std::cout << "DesignPatternsCPP: strategy pattern\n";

    std::cout << "\n****************\nFirst duck!\n\n";
    MallardDuck mallardDuck;
    mallardDuck.display();
    mallardDuck.performFly();
    mallardDuck.performQuack();
    std::cout << "Oh no, mallardDuck breaks her wing!\n";
    //FlyBehaviour *flyNoWay = new FlyNoWay();
    mallardDuck.setFlyBehaviour(new FlyNoWay());
    mallardDuck.performFly();

    std::cout << "\n****************\nSecond duck!\n\n";
    RubberDuck rubberDuck;
    rubberDuck.display();
    rubberDuck.performFly();
    rubberDuck.performQuack();
    std::cout << "Let's get a rocket!\n";
    //FlyBehaviour *flyInRocket = new FlyInRocket();
    rubberDuck.setFlyBehaviour(new FlyInRocket());
    rubberDuck.performFly();

}
