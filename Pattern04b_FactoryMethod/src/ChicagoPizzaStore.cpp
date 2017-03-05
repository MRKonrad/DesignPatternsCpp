//
//  ChicagoPizzaStore.cpp
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 05/03/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#include "ChicagoPizzaStore.h"

Pizza ChicagoPizzaStore::createPizza(std::string type){
    if (type == "cheese") {
        return ChicagoStyleCheesePizza();
    } else if (type == "pepperoni") {
        return ChicagoStylePepperoniPizza();
    } else if (type == "clam") {
        return ChicagoStyleClamPizza();
    } else if (type == "veggie") {
        return ChicagoStyleVeggiePizza();
    }
}
