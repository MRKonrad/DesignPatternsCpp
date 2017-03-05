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
#include "NYStyleCheesePizza.h"
#include "NYStylePepperoniPizza.h"
#include "NYStyleClamPizza.h"
#include "NYStyleVeggiePizza.h"

class NYPizzaStore : public PizzaStore {
public:
    virtual Pizza createPizza(std::string type) override;
};

#endif
