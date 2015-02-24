package com.growthbeatcore.cocos2dx;

import org.cocos2dx.lib.Cocos2dxActivity;

import android.os.Bundle;

public class GrowthbeatCoreCocos2dxActivity extends Cocos2dxActivity {
	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		GrowthbeatCoreJNI.setContext(getApplicationContext());
	}
}
