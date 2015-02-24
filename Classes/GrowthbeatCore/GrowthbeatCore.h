//
//  GrowthbeatCore.h
//  growthbeatcore-cocos2dx
//
//  Created by Baekwoo Chung on 2015/02/04.
//  Copyright (c) 2015 SIROK, Inc. All rights reserved.
//

#ifndef GROWTHBEATCOREPLUGIN_GROWTHBEATCORE_H_
#define GROWTHBEATCOREPLUGIN_GROWTHBEATCORE_H_

#include "cocos2d.h"
#include "GbCMacros.h"

NS_GROWTHBEATCORE_BEGIN

class CC_DLL GrowthbeatCore
{

public:
	GrowthbeatCore();
	~GrowthbeatCore();
    static GrowthbeatCore* getInstance();
    void initialize(const std::string& applicationId, const std::string& credentialId);

private:
    static GrowthbeatCore* instance;
};

NS_GROWTHBEATCORE_END

#endif	// GROWTHGROWTHBEATCOREPLUGIN_GROWTHBEATCORE_H_