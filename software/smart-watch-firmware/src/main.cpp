#include <Arduino.h>
#include "defs.h"

GPS my_gps;

/**
 * @brief Function protypes
 * @param none
 */
void init_hw(void );

/**
 * @brief Function definitions
 * @param none
 */
void init_hw(void) {

    Serial.begin(SERIAL1_BAUDRATE);
    pinMode(BUTTON1, INPUT);
    pinMode(LED, OUTPUT);

    if(my_gps.init(GPS_RX, GPS_RX)) {
        Serial.println("GPS OK");
    } else {
        Serial.println("GPS failed");
    }


    
}

void setup() {
    /*initialize hardware */
    init_hw();
}

void loop() {

}