//
//  Mushroom.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 10/03/17.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef Mushroom_H
#define Mushroom_H

#include <string>
#include "Veggies.h"

class Mushroom : public Veggies{
public:
    std::string toString(){
        return "Mushroom";
    }
};

#endif
