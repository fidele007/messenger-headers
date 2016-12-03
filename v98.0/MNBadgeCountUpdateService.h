/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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
-(MNBadgeCountEventTracker *)badgeCountEventTracker;
-(id)initWithApplication:(id)arg1 userSession:(id)arg2 pushRegistrar:(id)arg3 userDefaults:(id)arg4 notificationCenter:(id)arg5 analytics:(id)arg6 clock:(id)arg7 listener:(id)arg8 allowUpdatesInBackground:(BOOL)arg9 ;
-(id)allBadgeCounts;
-(void)_updateBadgeIconNumberWithNotification:(id)arg1 ;
-(void)_completeStart:(id)arg1 ;
-(void)_updateBadgeIconNumber;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)_didBecomeActive:(id)arg1 ;
-(void)handleIdle;
@end

