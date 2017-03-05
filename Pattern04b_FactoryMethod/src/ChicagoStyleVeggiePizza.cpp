//
//  ChicagoStyleVeggiePizza.cpp
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 5/01/17.
//  Copyright © 2017 Konrad Werys. All rights reserved.
//


#include "ChicagoStyleVeggiePizza.h"

ChicagoStyleVeggiePizza::ChicagoStyleVeggiePizza(){
    _name = "Chicago Deep Dish Veggie Pizza";
    _dough = "Extra Thick Crust Dough";
    _sauce = "Plum Tomato Sauce";

    _toppings.push_back("Shredded Mozzarella Cheese");
    _toppings.push_back("Black Olives");
    _toppings.push_back("Spinach");
    _toppings.push_back("Eggplant");
}

void ChicagoStyleVeggiePizza::cut(){
    printf("cutting the pizza %s into square slices\n", _name.c_str());
}
