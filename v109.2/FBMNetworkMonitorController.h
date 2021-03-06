/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:37 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBViewerContextClassProvidable.h>
#import <Messenger/FBMAppInitializedListening.h>

@class FBMNetworkMonitorView, FBMobileConfigContextManager, FBMAppProperties, MNUserSettings, FBTigonDebugController, NSString;

@interface FBMNetworkMonitorController : NSObject <FBViewerContextClassProvidable, FBMAppInitializedListening> {

	FBMNetworkMonitorView* _view;
	FBMobileConfigContextManager* _configManager;
	FBMAppProperties* _appProperties;
	MNUserSettings* _userSettings;
	BOOL _ligerIsEnabled;
	FBTigonDebugController* _tigonDebugController;
	unsigned long long _appStartType;

}

@property (assign,getter=isDisabled,nonatomic) BOOL disabled; 
@property (assign,nonatomic) unsigned long long appStartType;              //@synthesize appStartType=_appStartType - In the implementation block
@property (assign,nonatomic) BOOL tigonDebugEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)tigonDebugEnabled;
-(void)setTigonDebugEnabled:(BOOL)arg1 ;
-(void)applicationDidCompleteSettingUpBackgroundServices;
-(void)applicationDidCompleteSettingUpAllServices;
-(void)setLigerEnabled:(BOOL)arg1 ;
-(void)_didEnterForeground:(id)arg1 ;
-(id)initWithConfigManager:(id)arg1 appProperties:(id)arg2 userSettings:(id)arg3 ;
-(void)_didReceiveFetcherTriggered:(id)arg1 ;
-(void)_numberOfJobsInErrorHandlerTriggered:(id)arg1 ;
-(unsigned long long)appStartType;
-(void)_showNetworkAppStartStateType;
-(void)setAppStartType:(unsigned long long)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)setDisabled:(BOOL)arg1 ;
-(BOOL)isDisabled;
@end

