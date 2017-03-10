//
//  FrozenClam.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 07/03/17.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef FrozenClam_H
#define FrozenClam_H

#include <string>
#include "Clam.h"

class FrozenClam : public Clam{
public:
    std::string toString(){
        return "Frozen Clams";
    }
};

#endif
