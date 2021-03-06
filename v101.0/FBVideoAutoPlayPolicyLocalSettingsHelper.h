/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBVideoAutoPlayPolicySettingsHelperProtocol.h>

@class FBUserSession;

@interface FBVideoAutoPlayPolicyLocalSettingsHelper : NSObject <FBVideoAutoPlayPolicySettingsHelperProtocol> {

	FBUserSession* _session;
	BOOL _defaultsRegistered;
	long long _defaultAutoplaySetting;

}
-(void)setDefaultAutoplaySettings;
-(void)syncServerAndLocalAutoplaySettingsIfNeeded:(/*^block*/id)arg1 ;
-(void)retrieveAutoplayServerSettingIfCacheHasExpired;
-(long long)getGatekeeperDefaultAutoplaySetting;
-(void)setDefaultAutoplaySettings:(long long)arg1 ;
-(void)setSmartAutoplayLocalCache:(BOOL)arg1 autoplaySetting:(long long)arg2 postLocalCacheUpdateCallback:(/*^block*/id)arg3 notGeneratedByAUserChangingTheirSetting:(BOOL)arg4 ;
-(void)setAutoplaySettingLocalCache:(long long)arg1 postLocalCacheUpdateCallback:(/*^block*/id)arg2 ;
-(void)_setPreviousAutoplaySettingLocalCache:(long long)arg1 ;
-(BOOL)localCacheHasDefaultAutoplaySetting;
-(long long)currentDefaultAutoplaySetting;
-(void)setSmartAutoplay:(BOOL)arg1 postLocalCacheUpdateCallback:(/*^block*/id)arg2 localCacheGKCallback:(/*^block*/id)arg3 notGeneratedByAUserChangingTheirSetting:(BOOL)arg4 ;
-(void)setAutoplaySetting:(long long)arg1 postLocalCacheUpdateCallback:(/*^block*/id)arg2 localCacheGKCallback:(/*^block*/id)arg3 ;
-(BOOL)autoplaySettingIsCurrentlyBeingWrittenToTheServer;
-(BOOL)autoplaySettingIsCurrentlyBeingReadFromTheServer;
-(void)cancelServerSettingUpdateIfInProgress;
-(BOOL)localCacheHasSettings;
-(id)initWithSession:(id)arg1 ;
@end

