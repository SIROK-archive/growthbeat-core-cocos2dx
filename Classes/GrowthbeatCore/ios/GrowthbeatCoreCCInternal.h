//
//  GrowthbeatCoreCCInternal.h
//  growthbeatcore-cocos2dx
//
//  Created by Baekwoo Chung on 2015/02/04.
//  Copyright (c) 2015 SIROK, Inc. All rights reserved.
//

#include "ccConfig.h"
#if CC_TARGET_PLATFORM == CC_PLATFORM_IOS

#import <Foundation/Foundation.h>

@interface GrowthbeatCoreCCInternal : NSObject

/* GrowthbeatCore SDK interface */
+ (void)initializeWithApplicationId:(NSString *)applicationId credentialId:(NSString *)credentialId;

@end

#endif // if CC_TARGET_PLATFORM == CC_PLATFORM_IOS
