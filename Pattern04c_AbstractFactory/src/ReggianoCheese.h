//
//  ReggianoCheese.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 07/03/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef ReggianoCheese_H
#define ReggianoCheese_H

#include <string>
#include "Cheese.h"

class ReggianoCheese : public Cheese{
public:
    std::string toString(){
        return "Reggiano Cheese";
    }
};

#endif
