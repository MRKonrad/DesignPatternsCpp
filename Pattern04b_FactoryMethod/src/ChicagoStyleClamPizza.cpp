//
//  ChicagoStyleClamPizza.cpp
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 5/01/17.
//  Copyright © 2017 Konrad Werys. All rights reserved.
//


#include "ChicagoStyleClamPizza.h"

ChicagoStyleClamPizza::ChicagoStyleClamPizza(){
    _name = "Chicago Style Clam Pizza";
    _dough = "Extra Thick Crust Dough";
    _sauce = "Plum Tomato Sauce";

    _toppings.push_back("Shredded Mozzarella Cheese");
    _toppings.push_back("Frozen Clams from Chesapeake Bay");
}

void ChicagoStyleClamPizza::cut(){
    printf("cutting the pizza %s into square slices\n", _name.c_str());
}
