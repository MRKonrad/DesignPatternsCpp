//
//  Spinach.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 07/03/17.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef Spinach_H
#define Spinach_H

#include <string>
#include "Veggies.h"

class Spinach : public Veggies{
public:
    std::string toString(){
        return "Spinach";
    }
};

#endif
