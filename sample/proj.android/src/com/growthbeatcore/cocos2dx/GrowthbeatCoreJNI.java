package com.growthbeatcore.cocos2dx;

import android.content.Context;

import com.growthbeat.GrowthbeatCore;

public class GrowthbeatCoreJNI {

	private static Context context = null;

	public static void initialize(final String applicationId, final String credentialId) {
		GrowthbeatCore.getInstance().initialize(context, applicationId, credentialId);
	}
	
	public static void setContext(Context context) {
		GrowthbeatCoreJNI.context = context;
	}

}
