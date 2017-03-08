//
//  Eggplant.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 07/03/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef Eggplant_H
#define Eggplant_H

#include <string>
#include "Veggies.h"

class Eggplant : public Veggies{
public:
    std::string toString(){
        return "Eggplant";
    }
};

#endif
