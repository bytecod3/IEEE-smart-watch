#include "gps.h"

class GPS {
    private:
        uint8_t _rx,_tx;
        
    public:
        uint8_t init(uint8_t rx, uint8_t tx);

};

/**
 * @brief Initialize GPS
 */
uint8_t GPS::init(uint8_t rx, uint8_t tx) {
    Serial2.begin(GPS_BAUD);

    // check for init
    if(Serial2.begin(GPS_BAUD)) {
        return 1;
    } else {
        return 0;
    }
}