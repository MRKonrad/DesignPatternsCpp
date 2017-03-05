//
//  SimplePizzaFactory.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 5/01/17.
//  Copyright © 2017 Konrad Werys. All rights reserved.
//

#ifndef SIMPLEPIZZAFACTORY_H
#define SIMPLEPIZZAFACTORY_H

#include "Pizza.h"

class SimplePizzaFactory {
public:
    Pizza createPizza(std::string type);
};

#endif
