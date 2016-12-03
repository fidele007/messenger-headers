/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMQTTTopicHandling.h>
#import <Messenger/MNMQTTPresenceUpdateListening.h>

@protocol MNMQTTSending;
@class MNPresenceCache, NSMutableDictionary, NSString;

@interface MNMQTTPresenceAccuracyLogger : NSObject <MNMQTTTopicHandling, MNMQTTPresenceUpdateListening> {

	id<MNMQTTSending> _sender;
	MNPresenceCache* _presenceCache;
	NSMutableDictionary* _lastPresenceReceivedTimeLookup;
	NSMutableDictionary* _lastSpecificPresenceReceivedTimeLookup;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)topicListener;
-(void)didReceievePresenceUpdateWithValues:(id)arg1 wasFull:(BOOL)arg2 isSpecificPresence:(BOOL)arg3 ;
-(void)_receivedRequestPayload:(id)arg1 ;
-(id)_preparePresenceData:(id)arg1 ;
-(id)responseForRequest;
-(id)initWithSender:(id)arg1 presenceCache:(id)arg2 ;
@end

