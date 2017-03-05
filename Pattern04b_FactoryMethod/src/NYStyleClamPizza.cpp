//
//  NYStyleClamPizza.cpp
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 5/01/17.
//  Copyright © 2017 Konrad Werys. All rights reserved.
//


#include "NYStyleClamPizza.h"

NYStyleClamPizza::NYStyleClamPizza(){
    _name = "NY Style Clam Pizza";
    _dough = "Thin Crust Dough";
    _sauce = "Marinara Sauce";

    _toppings.push_back("Grated Reggiano Cheese");
    _toppings.push_back("Fresh Clams from Long Island Sound");
}
