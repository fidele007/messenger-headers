/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:48 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBViewerContextClassProvidable.h>
#import <Messenger/MNLastActivityTracking.h>

@protocol FBClock;
@class NSNotificationCenter, NSMutableDictionary, MNLastActivityTrackingListeningAnnouncer, NSString;

@interface MNTypingLastActivityTracker : NSObject <FBViewerContextClassProvidable, MNLastActivityTracking> {

	NSNotificationCenter* _notificationCenter;
	id<FBClock> _clock;
	NSMutableDictionary* _personIdToLastActiveMap;
	NSMutableDictionary* _personIdToLastUpdateMap;
	MNLastActivityTrackingListeningAnnouncer* _announcer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_startNotificationObservations;
-(void)_stopNotificationObservations;
-(void)removeLastActivityTrackingListener:(id)arg1 ;
-(id)initWithNotificationCenter:(id)arg1 clock:(id)arg2 ;
-(void)_didReceiveTypingNotification:(id)arg1 ;
-(void)_updateLastActiveTimeForPersonWithId:(id)arg1 typingState:(long long)arg2 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)addLastActivityTrackingListener:(id)arg1 ;
-(id)personIdToLastActivityMap;
-(id)lastUpdateTimeForPersonWithId:(id)arg1 ;
-(id)lastActivityDateForPersonWithId:(id)arg1 ;
-(void)dealloc;
@end

