/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNServiceControllable.h>

@protocol OS_dispatch_queue;
@class FBMobileConfigContextManager, FBExperimentManager, FBExceptionHandler, NSObject, NSNotificationCenter, NSString;

@interface MNConfigUpdateService : NSObject <MNServiceControllable> {

	FBMobileConfigContextManager* _sessionContextManager;
	FBMobileConfigContextManager* _sessionlessContextManager;
	FBExperimentManager* _experimentManager;
	FBMobileConfigContextManager* _configManager;
	FBExceptionHandler* _exceptionHandler;
	NSObject*<OS_dispatch_queue> _queue;
	NSNotificationCenter* _notificationCenter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateConfigsOnInternalQueue;
-(void)_updateConfigs;
-(id)initWithSession:(id)arg1 mobileConfigSessionFactory:(id)arg2 mobileConfigSessionlessFactory:(id)arg3 configManager:(id)arg4 exceptionHandler:(id)arg5 queue:(id)arg6 notificationCenter:(id)arg7 ;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
@end

