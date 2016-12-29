//
//  StatisticsDisplay.cpp
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 29/12/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#include "StatisticsDisplay.h"

StatisticsDisplay::StatisticsDisplay(Subject *weatherData){
    _temperature = 0;
    _humidity = 0;
    _pressure = 0;
    _weatherData = weatherData;
    _weatherData->registerObserver(this);
}

StatisticsDisplay::~StatisticsDisplay(){
    if (_weatherData){
        _weatherData->removeObserver(this);
    }
}

void StatisticsDisplay::update(float temperature, float humidity, float pressure){
    _temperature = temperature;
    _humidity = humidity;
    _pressure = pressure;
    display();
}

void StatisticsDisplay::display(){
    printf("StatisticsDisplay\n Tempmerature: %3.2fC Humidity: %3.2f Pressure: %4.2f.\n", _temperature, _humidity, _pressure);
}
