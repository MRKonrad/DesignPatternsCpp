//
//  MozarellaCheese.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 07/03/17.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef MozarellaCheese_H
#define MozarellaCheese_H

#include <string>
#include "Cheese.h"

class MozarellaCheese : public Cheese{
public:
    std::string toString(){
        return "Mozarella Cheese";
    }
};

#endif
