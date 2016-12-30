//
//  main.cpp
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 30/12/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#include "Beverage.h"
#include "Espresso.h"
#include "HouseBlend.h"
#include "Mocha.h"
#include "Soy.h"

int main()
{
    printf("DesignPatternsCPP: decorator pattern\n");

    Beverage *beverage1 = new Espresso();
    printf("%s %.2fUSD\n", beverage1->getDescription().c_str(), beverage1->cost());

    Beverage *beverage2 = new HouseBlend();
    beverage2 = new Mocha(beverage2);
    beverage2 = new Soy(beverage2);
    printf("%s %.2fUSD\n", beverage2->getDescription().c_str(), beverage2->cost());

    delete beverage2;
    delete beverage1;
}
