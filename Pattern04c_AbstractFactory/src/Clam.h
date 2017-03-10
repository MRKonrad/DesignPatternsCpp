//
//  Clam.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 07/03/17.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef CLAM_H
#define CLAM_H

#include <string>

class Clam {
public:
    virtual std::string toString() = 0;
    virtual ~Clam(){};
};

#endif
