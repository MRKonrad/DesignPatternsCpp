//
//  Onion.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 10/03/17.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef Onion_H
#define Onion_H

#include <string>
#include "Veggies.h"

class Onion : public Veggies{
public:
    std::string toString(){
        return "Onion";
    }
};

#endif
