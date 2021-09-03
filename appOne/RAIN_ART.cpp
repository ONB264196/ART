#include "RAIN.h"
#include "RAIN_ART.h"
RAIN_ART::RAIN_ART() {
	MaxNum = 1000;
	MinNum = 5;
	Num = MaxNum;
	Rains = new RAIN[Num];
}
RAIN_ART::~RAIN_ART() {
	delete[] Rains;
}
void RAIN_ART::perform() {
	if (isPress(KEY_DOWN)) {
		Num--;
		if (Num < MinNum) {
			Num = MinNum;
		}
	}
	if (isPress(KEY_UP)) {
		Num++;
		if (Num > MaxNum) {
			Num = MaxNum;
		}
	}
	clear(31, 30, 51);
	for (int i = 0; i < Num; i++) {
		Rains[i].perform();
	}
}
