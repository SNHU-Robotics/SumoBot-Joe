# A very simple makefile full of shortcuts

# What port the arduino is on
ifndef SERIAL_DEV
	ifneq (,$(wildcard /dev/ttyUSB0))
		SERIAL_DEV = /dev/ttyUSB0
	else ifneq (,$(wildcard /dev/ttyACM0))
		SERIAL_DEV = /dev/ttyACM0
	else
		SERIAL_DEV = unknown
	endif
endif

.PHONY: build test

ALL: build

build:
	pio run

flash:
	pio run -t upload

spiffs:
	pio run -t uploadfs

clean:
	pio run -t clean

lint:
	pio check

test:
	pio test --upload-port $(SERIAL_DEV)

debug: flash monitor

monitor:
	pio device monitor --port $(SERIAL_DEV) --filter=direct --filter=time
