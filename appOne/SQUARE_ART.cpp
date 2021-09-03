#include"SQUARE.h"
#include "SQUARE_ART.h"
SQUARE_ART::SQUARE_ART() {
	Square = new SQUARE;
	MaxCount = 300;
	Count = 0;
}
SQUARE_ART::~SQUARE_ART() {
	delete Square;
}
void SQUARE_ART::perform() {
	if (Count == 0) {
		colorMode(RGB);
		clear(60, 120, 240);
		Square->init();
	}
	++Count %= MaxCount;
	Square->perform();
}
