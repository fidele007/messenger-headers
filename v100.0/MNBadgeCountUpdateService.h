/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNServiceControllable.h>

@protocol OS_dispatch_queue;
@class MNBadgeCountStore, MNBadgeCountSourceCoordinator, MNBadgeCountApplier, UIApplication, NSNotificationCenter, NSObject, FBDelayer, MNBadgeCountEventTracker, NSString;

@interface MNBadgeCountUpdateService : NSObject <MNServiceControllable> {

	MNBadgeCountStore* _badgeCountStore;
	MNBadgeCountSourceCoordinator* _sourceCoordinator;
	MNBadgeCountApplier* _badgeCountApplier;
	UIApplication* _application;
	NSNotificationCenter* _notificationCenter;
	NSObject*<OS_dispatch_queue> _writeQueue;
	FBDelayer* _serviceStartedDelayer;
	MNBadgeCountEventTracker* _badgeCountEventTracker;

}

@property (nonatomic,readonly) MNBadgeCountEventTracker * badgeCountEventTracker;              //@synthesize badgeCountEventTracker=_badgeCountEventTracker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)badgeHealthInfoString;
-(void)registerBadgeCountSource:(long long)arg1 createdBlock:(/*^block*/id)arg2 createdBlockCallbackQueue:(id)arg3 ;
-(id)allBadgeCounts;
-(MNBadgeCountEventTracker *)badgeCountEventTracker;
-(id)initWithApplication:(id)arg1 userSession:(id)arg2 pushRegistrar:(id)arg3 userDefaults:(id)arg4 notificationCenter:(id)arg5 analytics:(id)arg6 clock:(id)arg7 listener:(id)arg8 ;
-(void)_updateBadgeIconNumberWithNotification:(id)arg1 ;
-(void)_completeStart:(id)arg1 ;
-(void)_updateBadgeIconNumber;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)_didBecomeActive:(id)arg1 ;
-(void)handleIdle;
@end

