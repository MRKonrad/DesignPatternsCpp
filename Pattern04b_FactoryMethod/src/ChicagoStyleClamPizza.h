//
//  ChicagoStyleClamPizza.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 5/01/17.
//  Copyright © 2017 Konrad Werys. All rights reserved.
//

#ifndef CHICAGOSTYLECLAMPIZZA_H
#define CHICAGOSTYLECLAMPIZZA_H

#include "Pizza.h"

class ChicagoStyleClamPizza : public Pizza {
public:
    ChicagoStyleClamPizza();
    virtual void cut() override;
};

#endif
