//
//  ChicagoStyleCheesePizza.cpp
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 5/01/17.
//  Copyright © 2017 Konrad Werys. All rights reserved.
//


#include "ChicagoStyleCheesePizza.h"

ChicagoStyleCheesePizza::ChicagoStyleCheesePizza(){
    _name = "Chicago Style Deep Dish Cheese Pizza";
    _dough = "Extra Thick Crust Dough";
    _sauce = "Plum Tomato Sauce";

    _toppings.push_back("Shredded Mozzarella Cheese");
}

void ChicagoStyleCheesePizza::cut(){
    printf("cutting the pizza %s into square slices\n", _name.c_str());
}
