//
//  ChicagoPizzaStore.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 05/03/17.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef CHICAGOPIZZASTORE_H
#define CHICAGOPIZZASTORE_H

#include "PizzaStore.h"
#include "ChicagoPizzaIngredientFactory.h"

class ChicagoPizzaStore : public PizzaStore {
public:
    virtual Pizza* createPizza(std::string type) override;
};

#endif
