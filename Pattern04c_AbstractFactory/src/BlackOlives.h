//
//  BlackOlives.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 07/03/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef BlackOlives_H
#define BlackOlives_H

#include <string>
#include "Veggies.h"

class BlackOlives : public Veggies{
public:
    std::string toString(){
        return "Black Olives";
    }
};

#endif
