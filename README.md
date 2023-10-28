# ESP8266-IP-Seeker
This Arduino sketch for ESP8266 demonstrates the process of retrieving the local IP address of the ESP8266 module after establishing a Wi-Fi connection. Use this code to easily configure your ESP8266 to connect to a Wi-Fi network and obtain its IP address via the Serial monitor.

## Key Features:

- Establishes connection to a Wi-Fi network using ESP8266.
- Retrieves and displays the local IP address of the ESP8266.
- Simple and straightforward implementation for Wi-Fi setup.
Explore and integrate this code to streamline the process of connecting your ESP8266 module to a Wi-Fi network and obtaining its IP address effortlessly.

## Getting Started

### Prerequisites

- Arduino IDE installed
- ESP8266 board package added to Arduino IDE
- ESP8266WiFi library installed

### Installation

1. Clone or download this repository.
2. Open the `ESP8266_IP_Seeker.ino` file in the Arduino IDE.
3. Modify the following lines in the code with your Wi-Fi network's SSID and password:
    
    WiFi.begin("your_network_ssid", "your_network_password");
    
4. Connect your ESP8266 board to your computer and select the appropriate board and port in the Arduino IDE.
5. Upload the code to the ESP8266 board.

### Usage

1. Upload the code to your ESP8266 board.
2. Open the Serial monitor at a baud rate of 115200.
3. The Serial monitor will display the process of connecting to the Wi-Fi network and eventually show the local IP address once connected.

## Contributing

Contributions are welcome. If you have suggestions or improvements, feel free to create a pull request or open an issue in this repository.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

- [ESP8266WiFi library](https://arduino-esp8266.readthedocs.io/en/latest/esp8266wifi/readme.html)

Please feel free to modify this README to suit your specific repository and add any additional details or instructions as needed.
