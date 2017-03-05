//
//  ChicagoStylePepperoniPizza.cpp
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 5/01/17.
//  Copyright © 2017 Konrad Werys. All rights reserved.
//


#include "ChicagoStylePepperoniPizza.h"

ChicagoStylePepperoniPizza::ChicagoStylePepperoniPizza(){
    _name = "Chicago Style Pepperoni Pizza";
    _dough = "Extra Thick Crust Dough";
    _sauce = "Plum Tomato Sauce";

    _toppings.push_back("Shredded Mozzarella Cheese");
    _toppings.push_back("Black Olives");
    _toppings.push_back("Spinach");
    _toppings.push_back("Eggplant");
    _toppings.push_back("Sliced Pepperoni");
}

void ChicagoStylePepperoniPizza::cut(){
    printf("cutting the pizza %s into square slices\n", _name.c_str());
}
