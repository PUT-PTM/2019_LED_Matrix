#include "MAX7219.h"
#include "MAX7219_MatrixDisplay.h"

extern SPI_HandleTypeDef hspi1;

extern "C" void example() {

	MAX7219<4> max(hspi1, { GPIOA, GPIO_PIN_4 });
	MAX7219_MatrixDisplay<4, 1> display(max);

	max.powerOn();
	max.intensity(5);
	max.scanLimit(7);

	int count = 0;

	while (true) {


	}

}