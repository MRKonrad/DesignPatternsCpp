//
//  WeatherData.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 28/12/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#ifndef WEATHERDATA_H
#define WEATHERDATA_H

#include "Subject.h"
#include "Observer.h"
#include <vector>
#include <stdio.h>

class WeatherData : public Subject{
    std::vector<Observer*> _observerList;
    float _temperature;
    float _humidity;
    float _pressure;
public:
    WeatherData();
    ~WeatherData();
    void registerObserver(Observer *obs);
    void removeObserver(Observer *obs);
    void notifyObservers();

    float getTemperature();
    float getHumidity();
    float getPressure();
    void measurementsChanged();
    void setMeasurements(float temperature, float humidity, float pressure);
};

#endif
