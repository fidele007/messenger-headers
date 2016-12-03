/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMQTTPresenceSubscriptionListener.h>

@protocol MNPresenceUpdating;
@class NSTimer, NSString;

@interface MNSyncPresenceTracker : NSObject <MNMQTTPresenceSubscriptionListener> {

	NSTimer* _presenceResetTimer;
	id<MNPresenceUpdating> _presenceUpdater;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPresenceUpdater:(id)arg1 ;
-(void)didUnsubscribeFromPresenceTopic;
-(void)didSubscribeToPresenceTopic;
-(void)_clearPresenceValues;
@end

