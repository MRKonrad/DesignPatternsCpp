//
//  SlicedPepperoni.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 07/03/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef SlicedPepperoni_H
#define SlicedPepperoni_H

#include <string>
#include "Pepperoni.h"

class SlicedPepperoni : public Pepperoni{
public:
    std::string toString(){
        return "Sliced Pepperoni";
    }
};

#endif
