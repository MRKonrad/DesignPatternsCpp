//
//  PepperoniPizza.cpp
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 5/01/17.
//  Copyright © 2017 Konrad Werys. All rights reserved.
//

#include "PepperoniPizza.h"

PepperoniPizza::PepperoniPizza(){
    _name = "Pepperoni Pizza";
    _dough = "Crust";
    _sauce = "Marinara sauce";
    _toppings.push_back("Sliced Pepperoni");
    _toppings.push_back("Sliced Onion");
    _toppings.push_back("Grated parmesan cheese");
}
