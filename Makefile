# Arduino Make file. Refer to https://github.com/sudar/Arduino-Makefile

#MONITOR_PORT = /dev/ttyUSB0
MONITOR_PORT = /dev/ttyACM0
BOARD_TAG    = uno
#BOARD_TAG    = pro5v328
#BOARD_TAG    = pro3v328
include Arduino.mk

ARDUINO_DIR   = /usr/share/arduino
ARDMK_DIR     = .
AVR_TOOLS_DIR = /usr/share/arduino/hardware/tools/avr
#ARDUINO_LIBS  = .

