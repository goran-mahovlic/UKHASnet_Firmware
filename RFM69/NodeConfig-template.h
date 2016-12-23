//************* Define Node that you're compiling for ****************/
#define YOURSENSOR

//************* Node-specific config ****************/
#ifdef YOURSENSOR
char id[] = "YOURSENSOR";
#define LOCATION_STRING "00.000000,00.000000"
byte num_repeats = '0'; //The number of hops the message will make in the network
#define BEACON_INTERVAL 500 // Beacon Interval is ~x seconds
uint8_t rfm_power = 20; // dBmW
#define SENSITIVE_RX // Enables TESTLNA_SENSITIVE
#endif

//************* Other config ****************/
// RFM Temperature Sensor - Not very accurate and sometimes glitchy
#define ENABLE_RFM_TEMPERATURE // Comment out to disable
#define RFM_TEMP_FUDGE 0 // Initial RFM Calibration
#define RX_TEMP_FUDGE 5.0 // Temperature offset when in RX due to self-heating
