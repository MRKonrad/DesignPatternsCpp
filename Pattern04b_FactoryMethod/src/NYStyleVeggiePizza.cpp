//
//  NYStyleVeggiePizza.cpp
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 5/01/17.
//  Copyright © 2017 Konrad Werys. All rights reserved.
//


#include "NYStyleVeggiePizza.h"

NYStyleVeggiePizza::NYStyleVeggiePizza(){
    _name = "NY Style Veggie Pizza";
    _dough = "Thin Crust Dough";
    _sauce = "Marinara Sauce";

    _toppings.push_back("Grated Reggiano Cheese");
    _toppings.push_back("Garlic");
    _toppings.push_back("Onion");
    _toppings.push_back("Mushrooms");
    _toppings.push_back("Red Pepper");
}
