/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBViewerContextClassProvidable.h>
#import <Messenger/MNSettingsTabAccountSwitchingConfigurating.h>

@class FBMobileConfigContextManager, MNAccountSwitchingPolicy, NSString;

@interface MNSettingsTabAccountSwitchingConfigurator : NSObject <FBViewerContextClassProvidable, MNSettingsTabAccountSwitchingConfigurating> {

	FBMobileConfigContextManager* _configManager;
	MNAccountSwitchingPolicy* _accountSwitchingPolicy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_isLogoutEnabled;
-(BOOL)_isAccountSwitchingEnabled;
-(id)initWithConfigManager:(id)arg1 accountSwitchingPolicy:(id)arg2 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(id)configuration;
@end

