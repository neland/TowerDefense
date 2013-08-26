#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
#include "system.h"
using namespace cocos2d;
using namespace TD;

class HelloWorld : public cocos2d::CCLayer
{
public:
	// Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
	virtual bool init();  

	// there's no 'id' in cpp, so we recommend returning the class instance pointer
	static cocos2d::CCScene* scene();

	// a selector callback
	void menuCloseCallbackUp(CCObject* pSender);
	void menuCloseCallbackDown(CCObject* pSender);
	void menuCloseCallbackLeft(CCObject* pSender);
	void menuCloseCallbackRigt(CCObject* pSender);
	void ccTouchEnded(CCTouch *pTouch, CCEvent *pEvent);
	virtual bool ccTouchBegan(CCTouch *pTouch, CCEvent *pEvent);

	void update( float ct );

	// implement the "static node()" method manually
	CREATE_FUNC(HelloWorld);

private:
	cocos2d::CCLabelTTF* pLabel;
};

#endif // __HELLOWORLD_SCENE_H__
