//
//  GrowthbeatCore.cpp
//  growthbeatcore-cocos2dx
//
//  Created by Baekwoo Chung on 2015/02/04.
//  Copyright (c) 2015 SIROK, Inc. All rights reserved.
//

#include "GrowthbeatCore.h"

NS_GROWTHBEATCORE_BEGIN

GrowthbeatCore* GrowthbeatCore::instance = NULL;

GrowthbeatCore::~GrowthbeatCore() {
	instance = NULL;
}

GrowthbeatCore* GrowthbeatCore::getInstance() {

    //TODO :: 同期化Lock, Unlock
    if(NULL == instance) {
        instance = new GrowthbeatCore();
    }
    return instance;
}

NS_GROWTHBEATCORE_END
