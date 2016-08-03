#ifndef SecondScence_h__
#define SecondScence_h__

#include "cocos2d.h"

class SecondScence : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();
    virtual bool init();
    void popScene(cocos2d::Ref* pSender);
    CREATE_FUNC(SecondScence);
};

#endif // SecondScence_h__
