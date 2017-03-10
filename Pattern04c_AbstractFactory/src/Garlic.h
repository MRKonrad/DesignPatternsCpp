//
//  Garlic.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 10/03/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef Garlic_H
#define Garlic_H

#include <string>
#include "Veggies.h"

class Garlic : public Veggies{
public:
    std::string toString(){
        return "Garlic";
    }
};

#endif
