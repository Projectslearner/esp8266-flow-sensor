/*
    Project name : ESP8266 Flow Sensor
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website :https://projectslearner.com/learn/esp8266-flow-sensor
*/

#define FLOW_SENSOR_PIN 14  // D5 on NodeMCU

volatile uint32_t pulseCount = 0;
unsigned long oldTime = 0;
float flowRate = 0;
float flowMilliLitres = 0;
float totalMilliLitres = 0;

void IRAM_ATTR pulseCounter() {
    pulseCount++;
}

void setup() {
    Serial.begin(115200);
    pinMode(FLOW_SENSOR_PIN, INPUT_PULLUP);
    attachInterrupt(digitalPinToInterrupt(FLOW_SENSOR_PIN), pulseCounter, FALLING);

    oldTime = millis();
}

void loop() {
    if (millis() - oldTime >= 1000) {  // Process every second
        detachInterrupt(digitalPinToInterrupt(FLOW_SENSOR_PIN));

        float pulseFrequency = pulseCount;
        flowRate = (pulseFrequency / 7.5);  // Example: YF-S201 sensor
        flowMilliLitres = (flowRate / 60) * 1000;
        totalMilliLitres += flowMilliLitres;

        Serial.print("Flow rate: ");
        Serial.print(flowRate);
        Serial.print(" L/min");
        Serial.print("\tTotal: ");
        Serial.print(totalMilliLitres);
        Serial.println(" mL");

        pulseCount = 0;
        oldTime = millis();

        attachInterrupt(digitalPinToInterrupt(FLOW_SENSOR_PIN), pulseCounter, FALLING);
    }
}
