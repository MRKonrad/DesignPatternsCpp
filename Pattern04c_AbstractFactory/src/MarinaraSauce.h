//
//  MarinaraSauce.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 10/03/17.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef MarinaraSauce_H
#define MarinaraSauce_H

#include <string>
#include "Sauce.h"

class MarinaraSauce : public Sauce{
public:
    std::string toString(){
        return "Plum Tomato Sauce";
    }
};

#endif
