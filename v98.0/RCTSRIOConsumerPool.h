/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface RCTSRIOConsumerPool : NSObject {

	unsigned long long _poolSize;
	NSMutableArray* _bufferedConsumers;

}
-(id)consumerWithScanner:(/*^block*/id)arg1 handler:(/*^block*/id)arg2 bytesNeeded:(unsigned long long)arg3 readToCurrentFrame:(BOOL)arg4 unmaskBytes:(BOOL)arg5 ;
-(void)returnConsumer:(id)arg1 ;
-(id)initWithBufferCapacity:(unsigned long long)arg1 ;
-(id)init;
@end

