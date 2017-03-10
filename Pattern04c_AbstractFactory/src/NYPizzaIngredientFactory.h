//
//  NYPizzaIngredientFactory.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 07/03/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef NYPizzaIngredientFactory_H
#define NYPizzaIngredientFactory_H

#include "PizzaIngredientFactory.h"
#include "ThinCrustDough.h"
#include "MarinaraSauce.h"
#include "ReggianoCheese.h"
#include "Garlic.h"
#include "Onion.h"
#include "Mushroom.h"
#include "RedPepper.h"
#include "SlicedPepperoni.h"
#include "FreshClam.h"

class NYPizzaIngredientFactory : public PizzaIngredientFactory{
public:
    Dough* createDough() override {
        return new ThinCrustDough();
    }

    Sauce* createSauce() override {
        return new MarinaraSauce();
    }

    Cheese* createCheese() override {
        return new ReggianoCheese();
    }

    std::vector<Veggies*>* createVeggies() override {
        std::vector<Veggies*> *veggies = new std::vector<Veggies*>();
        veggies->push_back(new Garlic());
        veggies->push_back(new Onion());
        veggies->push_back(new Mushroom());
        veggies->push_back(new RedPepper());
        return veggies;
    }

    Pepperoni* createPepperoni() override {
        return new SlicedPepperoni();
    }

    Clam* createClam() override {
        return new FreshClam();
    }
};
#endif
