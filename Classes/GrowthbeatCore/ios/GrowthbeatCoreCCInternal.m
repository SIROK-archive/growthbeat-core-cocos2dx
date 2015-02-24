//
//  GrowthbeatCoreCCInternal.m
//  growthbeatcore-cocos2dx
//
//  Created by Baekwoo Chung on 2015/02/04.
//  Copyright (c) 2015 SIROK, Inc. All rights reserved.
//

#include "ccConfig.h"
#if CC_TARGET_PLATFORM == CC_PLATFORM_IOS

#import "GrowthbeatCoreCCInternal.h"

#import <GrowthbeatCore/GrowthbeatCore.h>

@implementation GrowthbeatCoreCCInternal

+ (void)initializeWithApplicationId:(NSString *)applicationId credentialId:(NSString *)credentialId {
    [[GrowthbeatCore sharedInstance] initializeWithApplicationId:applicationId credentialId:credentialId];
}

@end

#endif /* if CC_TARGET_PLATFORM == CC_PLATFORM_IOS */
