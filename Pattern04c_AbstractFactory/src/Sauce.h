//
//  Sauce.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 07/03/17.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef SAUCE_H
#define SAUCE_H

#include <string>

class Sauce {
public:
    virtual std::string toString() = 0;
    virtual ~Sauce(){};
};
#endif
