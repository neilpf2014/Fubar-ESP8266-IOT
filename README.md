# **Fubar-ESP8266-IOT Class 1**

## Fubar labs ESP8266 IOT course outline

- Outline presentation https://github.com/neilpf2014/Fubar-ESP8266-IOT/blob/master/FUBAR_IoT_with_ESP8266.pdf
- Set up IDE
- ESP8266 "hello world" blink program
- ESP8266 WiFi scan and connect program
- Added PIO CPP formated src
- *TODO: Will be using Platform IO instead of Ardunio IDE now, http://platformio.org/ with VS code editor http://docs.platformio.org/en/latest/ide/vscode.html* *will add some info*

## Resources

### ESP8266 Ardunio libraries and documentation

[esp8266/Arduino](https://github.com/esp8266/Arduino)

### NodeMCU USB to UART drivers

Needed for Windows or Mac, get udev rules for Ubuntu [here](http://docs.platformio.org/en/latest/faq.html#platformio-udev-rules)

- [cp2102](https://www.silabs.com/products/development-tools/software/usb-to-uart-bridge-vcp-drivers)
- [ch340:](http://www.wch.cn/download/CH341SER_MAC_ZIP.html)
- [pl2303](http://www.prolific.com.tw/US/ShowProduct.aspx?p_id=229&pcid=41)

### ESP8266 nodeMCU board pinouts

Note: Bottom of image is USB connector side of board.  *Vin* is connected directly to the 5v lines of the USB input. Don't apply over 3.3v to any of the IO pins

Link to [nodemcu/nodemcu-devkit-v1.0](https://github.com/nodemcu/nodemcu-devkit-v1.0)

![board image](https://raw.githubusercontent.com/nodemcu/nodemcu-devkit-v1.0/master/Documents/NODEMCU_DEVKIT_V1.0_PINMAP.png)
