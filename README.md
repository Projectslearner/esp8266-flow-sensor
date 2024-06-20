# ESP8266 Flow Sensor Project

#### Project Overview
This project demonstrates how to interface a flow sensor with an ESP8266 microcontroller to measure the flow rate and total volume of liquid passing through the sensor. The data is displayed on the Serial Monitor.

#### Components Needed
- **ESP8266 Microcontroller**
- **Flow Sensor (e.g., YF-S201)**
- **Jumper Wires**
- **Breadboard (optional)**

#### Circuit Setup
1. **Connecting the Flow Sensor to ESP8266:**
   - **VCC:** Connect to the 3.3V pin on the ESP8266.
   - **GND:** Connect to the GND pin on the ESP8266.
   - **Signal (OUT):** Connect to the D5 pin (GPIO 14) on the ESP8266.

#### Block Diagram
![ESP8266 Flow Sensor Block Diagram](https://projectslearner.com/img/esp8266-flow-sensor-block-diagram.png)

#### Instructions
1. **Code Upload:**
   - Open the Arduino IDE with ESP8266 board support installed.
   - Install the necessary libraries if required.
   - Create a new sketch and paste the provided Arduino code.
   - Connect the ESP8266 to your computer, select the appropriate board and port from the Tools menu.
   - Upload the code to the ESP8266.

2. **Testing:**
   - After uploading the code, open the Serial Monitor.
   - You should see the flow rate and total volume printed every second.

#### Applications
- **Water Consumption Monitoring:** Measure and monitor water usage in residential or commercial settings.
- **Irrigation Systems:** Track water flow in irrigation systems to ensure efficient water usage.
- **Industrial Liquid Flow Measurement:** Monitor and control liquid flow in industrial processes.

#### Notes
- **Sensor Calibration:** Calibrate the flow sensor based on the specific characteristics of your sensor to ensure accurate measurements.
- **Power Supply:** Ensure a stable power supply to the ESP8266 and the flow sensor.
- **Debouncing:** Implement additional debouncing mechanisms if necessary to filter out noise and false pulses.

---

#### Useful Links
🌐 [ProjectsLearner - ESP8266 Flow Sensor](https://projectslearner.com/learn/esp8266-flow-sensor)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Crafted for you with ❤️ from ProjectsLearner