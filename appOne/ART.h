#pragma once
class ART{
public:
	ART() {}
	virtual ~ART() {}
	virtual void perform() = 0; //必ず継承する関数
};

