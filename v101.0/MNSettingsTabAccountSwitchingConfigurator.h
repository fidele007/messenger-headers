/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
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
-(id)initWithProviderMapData:(id)arg1 ;
-(BOOL)_isLogoutEnabled;
-(BOOL)_isAccountSwitchingEnabled;
-(id)initWithConfigManager:(id)arg1 accountSwitchingPolicy:(id)arg2 ;
-(id)configuration;
@end

