//
//  ThickCrustDough.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 07/03/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef ThickCrustDough_H
#define ThickCrustDough_H

#include <string>
#include "Dough.h"

class ThickCrustDough : public Dough{
public:
    std::string toString(){
        return "Thick Crust Dough";
    }
};

#endif
