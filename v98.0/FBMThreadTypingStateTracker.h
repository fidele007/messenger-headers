/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

@protocol FBClock, OS_dispatch_queue;
@class NSNotificationCenter, FBMThreadTypingStateTrackerListenerAnnouncer, NSMutableDictionary, NSObject, NSDictionary, NSString;

@interface FBMThreadTypingStateTracker : NSObject <FBViewerContextClassProvidable> {

	NSNotificationCenter* _notificationCenter;
	id<FBClock> _clock;
	FBMThreadTypingStateTrackerListenerAnnouncer* _announcer;
	NSMutableDictionary* _senderIdToScheduledTimeoutCancelable;
	NSObject*<OS_dispatch_queue> _queue;
	NSDictionary* _senderIdToTypingInfoMap;

}

@property (copy) NSDictionary * senderIdToTypingInfoMap;              //@synthesize senderIdToTypingInfoMap=_senderIdToTypingInfoMap - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithNotificationCenter:(id)arg1 clock:(id)arg2 ;
-(BOOL)isTypingActiveForUserOnCanonicalThread:(id)arg1 ;
-(void)didReceiveTypingNotification:(id)arg1 ;
-(void)setSenderIdToTypingInfoMap:(NSDictionary *)arg1 ;
-(void)_didReceiveTypingInfo:(id)arg1 forSenderId:(id)arg2 ;
-(NSDictionary *)senderIdToTypingInfoMap;
-(void)_announceTypingStateChangeWithSenderId:(id)arg1 ;
-(void)startObserving;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)stopObserving;
@end

