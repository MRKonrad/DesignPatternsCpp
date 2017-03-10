//
//  FreshClam.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 07/03/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef FreshClam_H
#define FreshClam_H

#include <string>
#include "Clam.h"

class FreshClam : public Clam{
public:
    std::string toString(){
        return "Fresh Clams";
    }
};

#endif
