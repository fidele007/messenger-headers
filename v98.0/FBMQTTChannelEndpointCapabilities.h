/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMQTTChannelCoordinating;
#import <Messenger/Messenger-Structs.h>
@interface FBMQTTChannelEndpointCapabilities : NSObject {

	id<FBMQTTChannelCoordinating> _mqttChannelCoordinator;
	mutex _mutex;
	unsigned long long _flags;
	BOOL _isUsed;

}
-(id)initWithMQTTChannelCoordinator:(id)arg1 ;
-(unsigned long long)getCapabilities;
-(BOOL)addCapabilities:(unsigned long long)arg1 andSendUpdate:(BOOL)arg2 ;
-(BOOL)removeCapabilities:(unsigned long long)arg1 andSendUpdate:(BOOL)arg2 ;
-(void)updateCapabilities;
-(void)forceUpdateCapabilities;
-(void)addCapabilities:(unsigned long long)arg1 ;
-(void)removeCapabilities:(unsigned long long)arg1 ;
@end

