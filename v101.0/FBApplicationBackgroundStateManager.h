/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBBackgroundStateManaging.h>

@class NSString;

@interface FBApplicationBackgroundStateManager : NSObject <FBBackgroundStateManaging> {

	BOOL _cachedSupportsBackgroundRefreshStatus;
	BOOL _supportsBackgroundRefreshStatus;
	BOOL _applicationBecomingActive;

}

@property (assign,getter=isApplicationBecomingActive,nonatomic) BOOL applicationBecomingActive;              //@synthesize applicationBecomingActive=_applicationBecomingActive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedBackgroundStateManager;
-(BOOL)isApplicationBackgrounded;
-(BOOL)isApplicationActive;
-(void)setApplicationBecomingActive:(BOOL)arg1 ;
-(BOOL)supportsBackgroundRefreshStatus;
-(BOOL)isApplicationInactive;
-(BOOL)isApplicationBecomingActive;
-(long long)applicationState;
-(unsigned long long)beginBackgroundTaskWithName:(id)arg1 expirationHandler:(/*^block*/id)arg2 ;
-(void)endBackgroundTask:(unsigned long long)arg1 ;
-(void)setMinimumBackgroundFetchInterval:(double)arg1 ;
-(long long)backgroundRefreshStatus;
@end
