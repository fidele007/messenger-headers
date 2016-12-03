/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMSPDeltaHandlerListener.h>
#import <Messenger/FBMPushBadgeCountUpdateReceivedListening.h>

@class MNSyncedInboxServerBadgeCountTracker, FBMSPDeltaHandlerListenerAnnouncer, FBMPushBadgeCountUpdateReceivedListeningAnnouncer, MNSyncedInboxServerBadgeCountListeningAnnouncer, NSNumber, NSString;

@interface MNSyncedInboxServerBadgeCounter : NSObject <FBMSPDeltaHandlerListener, FBMPushBadgeCountUpdateReceivedListening> {

	MNSyncedInboxServerBadgeCountTracker* _tracker;
	FBMSPDeltaHandlerListenerAnnouncer* _deltaHandlerListenerAnnouncer;
	FBMPushBadgeCountUpdateReceivedListeningAnnouncer* _pushedBadgeCountUpdateAnnouncer;
	MNSyncedInboxServerBadgeCountListeningAnnouncer* _serverBadgeCountAnnouncer;
	NSNumber* _serverBadgeCount;

}

@property (copy) NSNumber * serverBadgeCount;                       //@synthesize serverBadgeCount=_serverBadgeCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMqttTrackerService:(id)arg1 mqttChannelCoordinator:(id)arg2 application:(id)arg3 spDataStore:(id)arg4 deltaHandlerListenerAnnouncer:(id)arg5 pushedBadgeCountUpdateAnnouncer:(id)arg6 experimentManager:(id)arg7 ;
-(NSNumber *)serverBadgeCount;
-(void)setServerBadgeCount:(NSNumber *)arg1 ;
-(void)_didEnterForegroundAndIdle;
-(void)syncProtocolDeltasDidFinishProcessingWithAffectedThreadKeys:(id)arg1 ;
-(void)didReceiveBadgeCountUpdate:(long long)arg1 ;
-(void)startListening;
-(void)stopListening;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
