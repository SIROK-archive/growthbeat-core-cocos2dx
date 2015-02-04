//
//  GrowthbeatCore.mm
//	growthbeatcore-cocos2dx
//
//	Created by ######### on 2015/##/##.
//	Copyright (c) 2015年 #########. All rights reserved.
//

#include "ccConfig.h"
#if CC_TARGET_PLATFORM == CC_PLATFORM_IOS

# include "GrowthbeatCore.h"

# import "GrowthbeatCoreCCInternal.h"

#import <GrowthbeatCore/GrowthbeatCore.h>

USING_NS_CC;

growthbeatcore::GrowthbeatCore::GrowthbeatCore() {};

void growthbeatcore::GrowthbeatCore::initialize(const std::string& applicationId, const std::string& credentialId) {
    [GrowthbeatCoreCCInternal initializeWithApplicationId:[NSString stringWithUTF8String:applicationId.c_str()] credentialId:[NSString stringWithUTF8String:credentialId.c_str()]];
}

#endif
