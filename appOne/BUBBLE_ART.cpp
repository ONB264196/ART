#include"BUBBLE.h"
#include "BUBBLE_ART.h"
BUBBLE_ART::BUBBLE_ART() {
	Num = 100;
	Bubbles = new BUBBLE[Num];

}
BUBBLE_ART::~BUBBLE_ART() {
	delete[] Bubbles;
}
void BUBBLE_ART::perform() {
	clear(188,127,255);
	for (int i = 0; i < Num; i++) {
		Bubbles[i].perform();
	}
}
