//
//  PlumTomatoSauce.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 07/03/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef PlumTomatoSauce_H
#define PlumTomatoSauce_H

#include <string>
#include "Sauce.h"

class PlumTomatoSauce : public Sauce{
public:
    std::string toString(){
        return "Plum Tomato Sauce";
    }
};

#endif
