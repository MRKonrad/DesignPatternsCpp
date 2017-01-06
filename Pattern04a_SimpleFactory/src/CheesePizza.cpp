//
//  CheesePizza.cpp
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 5/01/17.
//  Copyright © 2017 Konrad Werys. All rights reserved.
//

#include "CheesePizza.h"

CheesePizza::CheesePizza(){
    _name = "Cheese Pizza";
    _dough = "Regular Crust";
    _sauce = "Marinara Pizza Sauce";
    _toppings.push_back("Fresh Mozzarella");
    _toppings.push_back("Parmesan");
}
