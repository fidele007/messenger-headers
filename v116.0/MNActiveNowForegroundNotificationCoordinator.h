/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:47 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassInjectable.h>
#import <Messenger/MNThreadViewModelConfigurable.h>
#import <Messenger/MNActiveNowForegroundNotificationUserProviderDelegate.h>

@class MNActiveNowForegroundNotificationCoordinatorInjector, MNThreadViewModel, FBTimeThrottler, FBMUser, NSMutableDictionary, NSString;

@interface MNActiveNowForegroundNotificationCoordinator : NSObject <FBClassInjectable, MNThreadViewModelConfigurable, MNActiveNowForegroundNotificationUserProviderDelegate> {

	MNActiveNowForegroundNotificationCoordinatorInjector* _injector;
	MNThreadViewModel* _threadViewModel;
	FBTimeThrottler* _timeThrottler;
	FBMUser* _userForNotification;
	BOOL _subscriptionStarted;
	NSMutableDictionary* _lastTimeNotifiedOfUser;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSMutableDictionary * lastTimeNotifiedOfUser;              //@synthesize lastTimeNotifiedOfUser=_lastTimeNotifiedOfUser - In the implementation block
+(Class)injectorClass;
-(void)_presentBeeper;
-(void)startSubscription;
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(void)tearDownThreadViewModelDependencies;
-(NSMutableDictionary *)lastTimeNotifiedOfUser;
-(void)_updateLastTimeNotifiedOfUserDictionary;
-(id)threadViewModel;
-(BOOL)userDidBecomeActiveNow:(id)arg1 ;
-(void)startLoggingFunnel;
-(void)setLastTimeNotifiedOfUser:(NSMutableDictionary *)arg1 ;
-(id)initWithInjector:(id)arg1 ;
-(void)dealloc;
@end

