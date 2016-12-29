//
//  Subject.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 28/12/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef SUBJECT_H
#define SUBJECT_H

#include "Observer.h"

class Subject {
public:
    virtual ~Subject(){};
    virtual void registerObserver(Observer *obs) = 0;
    virtual void removeObserver(Observer *obs) = 0;
    virtual void notifyObservers() = 0;
};

#endif
