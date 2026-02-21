#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Temperature and Humidity Monitoring using DHT11
 * @author ROHIT CHAUHAN
 * @date 2026-02-DD
 *
 * @details
 * This program reads environmental data from the DHT11 sensor
 * and displays temperature and humidity values on Serial Monitor.
 * Students must complete the TODO sections.
 */

#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {

    Serial.begin(9600);
    dht.begin();
    Serial.println("DHT11 Temperature and Humidity Monitoring System");
    Serial.println("System Initialized...\n");
}

void loop() {
    float humidity = dht.readHumidity();
    float temperature = dht.readTemperature();

    if (isnan(humidity) || isnan(temperature)) {
        Serial.println("Failed to read from DHT sensor!");
        return;

        Serial.print("Humidity: ");
        Serial.print(humidity);
        Serial.print(" %\t");

        Serial.print("Temperature: ");
        Serial.print(temperature);
        Serial.println(" °C");
    // TODO 11:
    // Add a 2-second delay before next reading
}
