//
//  VeggiePizza.cpp
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 5/01/17.
//  Copyright © 2017 Konrad Werys. All rights reserved.
//

#include "VeggiePizza.h"

VeggiePizza::VeggiePizza(){
    _name = "Veggie Pizza";
    _dough = "Crust";
    _sauce = "Marinara sauce";
    _toppings.push_back("Shredded mozzarella");
    _toppings.push_back("Grated parmesan");
    _toppings.push_back("Diced onion");
    _toppings.push_back("Sliced mushrooms");
    _toppings.push_back("Sliced red pepper");
    _toppings.push_back("Sliced black olives");
}
