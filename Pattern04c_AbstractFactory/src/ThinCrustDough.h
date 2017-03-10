//
//  ThinCrustDough.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 07/03/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef ThinCrustDough_H
#define ThinCrustDough_H

#include <string>
#include "Dough.h"

class ThinCrustDough : public Dough{
public:
    std::string toString(){
        return "Thin Crust Dough";
    }
};

#endif
