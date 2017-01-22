/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

@class NSUserDefaults, NSNotificationCenter, FBMessengerRedirectionBadgingControllerListenerAnnouncer, NSString;

@interface FBMessengerRedirectionBadgingController : NSObject <FBViewerContextClassProvidable> {

	NSUserDefaults* _userDefaults;
	NSNotificationCenter* _notificationCenter;
	FBMessengerRedirectionBadgingControllerListenerAnnouncer* _announcer;

}

@property (assign,nonatomic) BOOL shouldBadgeWithRedirectionErrorIndicator; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_stopObservingApplicationLifecycleEvents;
-(void)_startObservingApplicationLifecycleEvents;
-(void)_applicationDidEnterBackgroundHandler;
-(void)setShouldBadgeWithRedirectionErrorIndicator:(BOOL)arg1 ;
-(id)initWithUserDefaults:(id)arg1 notificationCenter:(id)arg2 announcer:(id)arg3 ;
-(BOOL)shouldBadgeWithRedirectionErrorIndicator;
-(void)_recordAppVisitationSinceErrorBadgeIfNecessary;
-(void)_dismissBadgeIfAppVisitationLimitReached;
-(void)addMessengerRedirectionBadgeControllingListener:(id)arg1 ;
-(void)removeMessengerRedirectionBadgeControllingListener:(id)arg1 ;
-(void)dealloc;
@end
