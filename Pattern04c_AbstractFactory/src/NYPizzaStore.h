//
//  NYPizzaStore.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 05/03/17.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef NYPIZZASTORE_H
#define NYPIZZASTORE_H

#include "PizzaStore.h"
#include "NYPizzaIngredientFactory.h"

class NYPizzaStore : public PizzaStore {
public:
    ~NYPizzaStore() override;
protected:
    virtual Pizza* createPizza(std::string type) override;
};

#endif
