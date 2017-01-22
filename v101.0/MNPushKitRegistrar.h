/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPushKitRegistering.h>

@class FBMForegroundJobScheduler, FBUserSession, FBPushKitManager, FBMobileConfigContextManager, NSString;

@interface MNPushKitRegistrar : NSObject <MNPushKitRegistering> {

	FBMForegroundJobScheduler* _foregroundScheduler;
	unsigned long long _scheduledBlockId;
	FBUserSession* _session;
	FBPushKitManager* _pushKitManager;
	FBMobileConfigContextManager* _configManager;

}

@property (nonatomic,retain) FBUserSession * session;                                   //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) FBPushKitManager * pushKitManager;                         //@synthesize pushKitManager=_pushKitManager - In the implementation block
@property (nonatomic,retain) FBMobileConfigContextManager * configManager;              //@synthesize configManager=_configManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBMobileConfigContextManager *)configManager;
-(void)setConfigManager:(FBMobileConfigContextManager *)arg1 ;
-(void)registerPushKit;
-(void)unregisterPushKit;
-(FBPushKitManager *)pushKitManager;
-(void)_configExperiments;
-(id)initWithPushKitManager:(id)arg1 withSession:(id)arg2 withHandlerConfigure:(id)arg3 withConfigManager:(id)arg4 foregroundScheduler:(id)arg5 ;
-(void)setPushKitManager:(FBPushKitManager *)arg1 ;
-(void)dealloc;
-(void)stop;
-(void)start;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end
