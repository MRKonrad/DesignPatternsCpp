//
//  ForecastDisplay.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 28/12/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef FORECASTDISPLAY_H
#define FORECASTDISPLAY_H

#include <stdio.h>
#include "Observer.h"
#include "DisplayElement.h"
#include "Subject.h"

class ForecastDisplay : public Observer, public DisplayElement{
    float _temperature;
    float _humidity;
    float _pressure;
    Subject *_weatherData;
public:
    ForecastDisplay(Subject *weatherData);
    ~ForecastDisplay();
    void update(float temperature, float humidity, float pressure);
    void display();
};

#endif
