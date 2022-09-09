#define MQTT_VERSION MQTT_VERSION_3_1_1
 
#define DHTPIN 4        // Digital pin connected to the DHT sensor
#define DHTTYPE DHT11   // DHT 11

#define AWS_IOT_PUBLISH_TOPIC   "esp8266/sensordata"

#define THINGNAME "esp8266_dht11-demo"
 
#define TIME_ZONE "CET-1CEST"

const char MQTT_HOST[] = "a1b6ebmeqxctip-ats.iot.eu-central-1.amazonaws.com";
const int MQTT_PORT = 8883;
