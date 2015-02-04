//
//	GrowthbeatCore.cpp
//	growthbeatcore-cocos2dx
//
//	Created by ######### on 2015/##/##.
//	Copyright (c) 2015年 #########. All rights reserved.
//

#include "GrowthbeatCore.h"

NS_GROWTHBEATCORE_BEGIN

GrowthbeatCore* GrowthbeatCore::instance = NULL;

GrowthbeatCore* GrowthbeatCore::GetInstance() {

    //TODO :: 同期化Lock, Unlock
    if(NULL == instance) {
        instance = new GrowthbeatCore();
    }
    return instance;
}

NS_GROWTHBEATCORE_END
