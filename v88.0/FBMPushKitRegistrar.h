/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

@class FBMForegroundJobScheduler, FBUserSession, FBPushKitManager, FBMobileConfigContextManager, NSString;

@interface FBMPushKitRegistrar : NSObject <FBViewerContextClassProvidable> {

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
-(id)initWithProviderMapData:(id)arg1 ;
-(void)setConfigManager:(FBMobileConfigContextManager *)arg1 ;
-(FBMobileConfigContextManager *)configManager;
-(void)unregisterPushKit;
-(id)initWithPushKitManager:(id)arg1 withSession:(id)arg2 withHandlerConfigure:(id)arg3 withConfigManager:(id)arg4 foregroundScheduler:(id)arg5 ;
-(void)_configExperiments;
-(void)registerPushKit;
-(void)setPushKitManager:(FBPushKitManager *)arg1 ;
-(FBPushKitManager *)pushKitManager;
-(void)dealloc;
-(void)stop;
-(void)start;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end

