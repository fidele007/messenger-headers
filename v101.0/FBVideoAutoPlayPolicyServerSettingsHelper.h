/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBVideoAutoPlayPolicySettingsHelperProtocol.h>

@class FBUserSession;

@interface FBVideoAutoPlayPolicyServerSettingsHelper : NSObject <FBVideoAutoPlayPolicySettingsHelperProtocol> {

	FBUserSession* _session;
	BOOL _defaultsRegistered;
	long long _defaultAutoplaySetting;
	BOOL _hasMigrated;

}
-(void)setDefaultAutoplaySettings;
-(void)syncServerAndLocalAutoplaySettingsIfNeeded:(/*^block*/id)arg1 ;
-(void)retrieveAutoplayServerSettingIfCacheHasExpired;
-(long long)currentDefaultAutoplaySetting;
-(void)setSmartAutoplay:(BOOL)arg1 postLocalCacheUpdateCallback:(/*^block*/id)arg2 localCacheGKCallback:(/*^block*/id)arg3 notGeneratedByAUserChangingTheirSetting:(BOOL)arg4 ;
-(void)setAutoplaySetting:(long long)arg1 postLocalCacheUpdateCallback:(/*^block*/id)arg2 localCacheGKCallback:(/*^block*/id)arg3 ;
-(BOOL)autoplaySettingIsCurrentlyBeingWrittenToTheServer;
-(BOOL)autoplaySettingIsCurrentlyBeingReadFromTheServer;
-(void)_pushLocalSettingToServer:(/*^block*/id)arg1 migrationType:(id)arg2 ;
-(void)_retrieveAutoplayServerSetting;
-(void)_setSmartAutoplayWithPostLocalCacheUpdateCallback:(/*^block*/id)arg1 enable:(BOOL)arg2 localCacheGKCallback:(/*^block*/id)arg3 notGeneratedByAUserChangingTheirSetting:(BOOL)arg4 autoplaySetting:(id)arg5 ;
-(void)_processSetAutoplaySettingSuccess;
-(id)_autoPlayValueToDataInputValue:(long long)arg1 ;
-(void)_handleRetrieveAutoplayServerSettingSuccess:(id)arg1 postLocalCacheUpdateCallback:(/*^block*/id)arg2 ;
-(long long)_dataInputToAutoPlayValue:(id)arg1 ;
-(void)_updateLocalAutoplayMigrateSuccess:(id)arg1 isSmartAutoplay:(BOOL)arg2 postLocalCacheUpdateCallback:(/*^block*/id)arg3 ;
-(id)initWithSession:(id)arg1 ;
@end

