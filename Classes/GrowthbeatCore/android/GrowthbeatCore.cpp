//
//  GrowthbeatCore.cpp
//  growthbeatcore-cocos2dx
//
//  Created by Baekwoo Chung on 2015/02/04.
//  Copyright (c) 2015 SIROK, Inc. All rights reserved.
//

#include "ccConfig.h"

#if CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID

#include "GrowthbeatCore.h"

#include <string>
#include <jni.h>

#include "cocos2d.h"
#include "platform/android/jni/JniHelper.h"

USING_NS_CC;
USING_NS_GROWTHBEATCORE;

static const char *const JavaClassName = "com/growthbeatcore/cocos2dx/GrowthbeatCoreJNI";

growthbeatcore::GrowthbeatCore::GrowthbeatCore() {};

void GrowthbeatCore::initialize(const std::string& applicationId, const std::string& credentialId) {
    JniMethodInfo t;

    if (JniHelper::getStaticMethodInfo(t, JavaClassName, "initialize", "(Ljava/lang/String;Ljava/lang/String;)V")) {
    	jstring jApplicationId = t.env->NewStringUTF(applicationId.c_str());
        jstring jCredentialId = t.env->NewStringUTF(credentialId.c_str());
        t.env->CallStaticVoidMethod(t.classID, t.methodID, jApplicationId, jCredentialId);
        t.env->DeleteLocalRef(jCredentialId);
        t.env->DeleteLocalRef(t.classID);
    }
}

#endif
