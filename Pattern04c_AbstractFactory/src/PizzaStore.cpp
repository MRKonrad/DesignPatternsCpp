//
//  PizzaStore.cpp
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 05/03/17.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#include "PizzaStore.h"

Pizza* PizzaStore::orderPizza(std::string type){
    
    Pizza *pizza = createPizza(type);
    
    printf("------\n");
    printf("In PizzaStore::orderPizza after calling PizzaStore:createPizza\n");

    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();

    return pizza;
}

PizzaStore::~PizzaStore(){
    printf("PizzaStore destructor\n");
    //    if (_ingredientFactory != nullptr){
    //        delete _ingredientFactory;
    //    }
}
