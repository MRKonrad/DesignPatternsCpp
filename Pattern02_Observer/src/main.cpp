//
//  main.cpp
//  DesignPatternsCPP
//
//  Created by Konrad Werys on 28/12/16.
//  Copyright © 2016 Konrad Werys. All rights reserved.
//

#include "WeatherData.h"
#include "ForecastDisplay.h"
#include "CurrentConditionsDisplay.h"
#include "StatisticsDisplay.h"

int main()
{
    printf("DesignPatternsCPP: observer pattern\n");

    WeatherData *weatherData = new WeatherData();

    ForecastDisplay *forecastDisplay = new ForecastDisplay(weatherData);
    CurrentConditionsDisplay *currentConditionsDisplay = new CurrentConditionsDisplay(weatherData);
    StatisticsDisplay *statisticsDisplay = new StatisticsDisplay(weatherData);

    weatherData->setMeasurements(20, 65, 30.4f);
    weatherData->setMeasurements(22, 70, 29.2f);
    weatherData->setMeasurements(24, 90, 29.2f);

    printf("\n### We do not want forecastDisplay as an observer anymore!\n\n");
    weatherData->removeObserver(forecastDisplay);
    weatherData->setMeasurements(23, 15, 29.2f);
    
    printf("\n### On the second thought though...\n\n");
    weatherData->registerObserver(forecastDisplay);
    weatherData->setMeasurements(28, 95, 29.2f);
    
    printf("\n### Now, let's delete forecastDisplay.\n\n");
    delete forecastDisplay;
    weatherData->setMeasurements(-4, 20, 29.2f);
    
    // first delete the Observers, then the Subject!!!
    delete currentConditionsDisplay;
    delete statisticsDisplay;
    delete weatherData;
}
