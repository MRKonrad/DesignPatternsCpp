//
//  WeatherData.h
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 28/12/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#include "WeatherData.h"

WeatherData::WeatherData(){
    _temperature = 0;
    _humidity = 0;
    _pressure = 0;
}

WeatherData::~WeatherData(){
}

void WeatherData::registerObserver(Observer *obs){
    _observerList.push_back(obs);
}

void WeatherData::removeObserver(Observer *obs){
    std::vector<Observer*>::iterator it;
    it = find (_observerList.begin(), _observerList.end(), obs);
    if (it != std::end(_observerList)) {
        _observerList.erase(it);
    } else {
        printf("ERROR: observer not found\n");
    }
}

void WeatherData::notifyObservers(){
    for (Observer *o : _observerList){
        o->update(_temperature, _humidity, _pressure);
    }
}

float WeatherData::getTemperature(){
    return _temperature;
}

float WeatherData::getHumidity(){
    return _humidity;
}

float WeatherData::getPressure(){
    return _pressure;
}

void WeatherData::measurementsChanged(){
    notifyObservers();
}

void WeatherData::setMeasurements(float temperature, float humidity, float pressure){
    _temperature = temperature;
    _humidity = humidity;
    _pressure = pressure;
    notifyObservers();
}
