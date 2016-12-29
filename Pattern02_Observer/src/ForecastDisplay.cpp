//
//  ForecastDisplay.cpp
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 29/12/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#include "ForecastDisplay.h"

ForecastDisplay::ForecastDisplay(Subject *weatherData){
    _temperature = 0;
    _humidity = 0;
    _pressure = 0;
    _weatherData = weatherData;
    _weatherData->registerObserver(this);
}

ForecastDisplay::~ForecastDisplay(){
    if (_weatherData){
        _weatherData->removeObserver(this);
    }
}

void ForecastDisplay::update(float temperature, float humidity, float pressure){
    _temperature = temperature;
    _humidity = humidity;
    _pressure = pressure;
    display();
}

void ForecastDisplay::display(){
    printf("ForecastDisplay\n Tempmerature: %3.2fC Humidity: %3.2f Pressure: %4.2f.\n", _temperature, _humidity, _pressure);
}
