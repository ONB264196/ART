#pragma once
#include"libOne.h"
class RAIN{
	float Len = 0;
	float SWeight = 0;
	VECTOR2 StartPos, EndPos;
	VECTOR2 Vec;
	COLOR Color;
	float Speed = 0;
public:
	RAIN();
	~RAIN();
	void init();
	void perform();
};

