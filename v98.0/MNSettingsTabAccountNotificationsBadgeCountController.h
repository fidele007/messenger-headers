/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>
#import <Messenger/MNTabBadgeCountController.h>
#import <Messenger/MNAccountNotificationsFetcherListener.h>
#import <Messenger/MNAccountRemovalControllerListener.h>

@class MNSettingsTabAccountNotificationsBadgeCountControllerInjector, MNTabBadgeCountControllerListenerAnnouncer, MNBadgeCountSourceAdapter, NSArray, FBMobileConfigContextManager, NSString;

@interface MNSettingsTabAccountNotificationsBadgeCountController : NSObject <FBClassInjectable, MNTabBadgeCountController, MNAccountNotificationsFetcherListener, MNAccountRemovalControllerListener> {

	MNSettingsTabAccountNotificationsBadgeCountControllerInjector* _injector;
	MNTabBadgeCountControllerListenerAnnouncer* _tabBadgeCountControllerListenerAnnouncer;
	MNBadgeCountSourceAdapter* _badgeCountAdapter;
	NSArray* _fetchedNotifications;
	FBMobileConfigContextManager* _sessionlessMobileConfigContextManager;
	long long _badgeCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long badgeCount;                //@synthesize badgeCount=_badgeCount - In the implementation block
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(void)addTabBadgeCountControllerListener:(id)arg1 ;
-(void)didRemoveAccount:(id)arg1 ;
-(void)didFetchNotifications:(id)arg1 ;
-(void)removeTabBadgeCountControllerListener:(id)arg1 ;
-(void)_setFetchedNotifications:(id)arg1 ;
-(void)dealloc;
-(void)setBadgeCount:(long long)arg1 ;
-(long long)badgeCount;
@end

