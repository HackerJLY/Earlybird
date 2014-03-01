#pragma once
#include "cocos2d.h"
#include "AtlasLoader.h"
#include "time.h"
using namespace cocos2d;
using namespace std;

class BackgroundLayer:public Layer{
public:
	BackgroundLayer(void);
	~BackgroundLayer(void);
	virtual bool init();
	CREATE_FUNC(BackgroundLayer);

private:
	Sprite *landSpite1,*landSpite2;
	void scrollLand(float dt);
};