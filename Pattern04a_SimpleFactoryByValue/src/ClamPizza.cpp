//
//  ClamPizza.cpp
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 5/01/17.
//  Copyright © 2017 Konrad Werys. All rights reserved.
//

#include "ClamPizza.h"

ClamPizza::ClamPizza(){
    _name = "Clam Pizza";
    _dough = "Thin Crust";
    _sauce = "White garlic sauce";
    _toppings.push_back("Clams");
    _toppings.push_back("Grated parmesan cheese");
}
