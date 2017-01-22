/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNServiceControllable.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBProvider;
@class FBUserSession, NSString;

@interface MNLoomService : NSObject <MNServiceControllable, FBClassProvidable> {

	FBUserSession* _session;
	id<FBProvider> _userInfoManagerProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)setShouldForceTraceOnNextStartupEvent:(BOOL)arg1 ;
-(id)initWithSession:(id)arg1 loggedInUserInfoManagerProvider:(id)arg2 ;
-(void)_updateLoomOrchestratorWithCurrentSession;
-(void)_updateLoomOrchestratorWithInvalidSession;
-(void)_sessionDidChange:(id)arg1 ;
-(void)_sessionWillInvalidate:(id)arg1 ;
-(void)dealloc;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
@end
