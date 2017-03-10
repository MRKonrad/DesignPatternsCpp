//
//  RedPepper.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 10/03/17.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef RedPepper_H
#define RedPepper_H

#include <string>
#include "Veggies.h"

class RedPepper : public Veggies{
public:
    std::string toString(){
        return "RedPepper";
    }
};

#endif
