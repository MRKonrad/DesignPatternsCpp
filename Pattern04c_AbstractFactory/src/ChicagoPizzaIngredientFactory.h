//
//  ChicagoPizzaIngredientFactory.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 07/03/17.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef CHICAGOPIZZAINGREDIENTFACTORY_H
#define CHICAGOPIZZAINGREDIENTFACTORY_H

#include "PizzaIngredientFactory.h"
#include "ThickCrustDough.h"
#include "PlumTomatoSauce.h"
#include "MozarellaCheese.h"
#include "BlackOlives.h"
#include "Spinach.h"
#include "Eggplant.h"
#include "SlicedPepperoni.h"
#include "FrozenClam.h"

class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory{
public:
    Dough* createDough() override {
        return new ThickCrustDough();
    }

    Sauce* createSauce() override {
        return new PlumTomatoSauce();
    }

    Cheese* createCheese() override {
        return new MozarellaCheese();
    }

    std::vector<Veggies*>* createVeggies() override {
        std::vector<Veggies*> *veggies = new std::vector<Veggies*>();
        veggies->push_back(new BlackOlives());
        veggies->push_back(new Spinach());
        veggies->push_back(new Eggplant());
        return veggies;
    }

    Pepperoni* createPepperoni() override {
        return new SlicedPepperoni();
    }

    Clam* createClam() override {
        return new FrozenClam();
    }
};
#endif
