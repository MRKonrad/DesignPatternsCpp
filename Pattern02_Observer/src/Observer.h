//
//  Observer.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 28/12/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef OBSERVER_H
#define OBSERVER_H

class Observer {
public:
    virtual ~Observer(){};
    virtual void update(float temperature, float humidity, float pressure) = 0;
};

#endif
