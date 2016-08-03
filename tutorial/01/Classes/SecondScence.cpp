#include "SecondScence.h"
#include <tracetool.h>

USING_NS_CC;

cocos2d::Scene* SecondScence::createScene()
{
    TRACE_ENTER_METHOD;
    auto scene = Scene::create();
    auto layer = SecondScence::create();
    scene->addChild(layer);
    TRACE_EXIT_METHOD;
    return scene;
}

bool SecondScence::init()
{
    TRACE_ENTER_METHOD;
    Label* label = Label::create("Hi, are you mutou?", "Arial", 40);
    label->setPosition(Vec2(300, 200));
    this->addChild(label);
    /* Ìí¼Ó°´Å¥ */
    auto closeItem = MenuItemImage::create(
                         "CloseNormal.png",
                         "CloseSelected.png",
                         CC_CALLBACK_1(SecondScence::popScene, this));
    closeItem->setPosition(Vec2(Director::getInstance()->getWinSize().width - 20, 20));
    // create menu, it's an autorelease object
    auto menu = Menu::create(closeItem, NULL);
    menu->setPosition(Vec2::ZERO);
    this->addChild(menu, 1);
    TRACE_EXIT_METHOD;
    return true;
}

void SecondScence::popScene(cocos2d::Ref* pSender)
{
    Director::getInstance()->popScene();
}
