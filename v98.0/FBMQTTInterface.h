/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:06 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMQTTInterface <NSObject>
@required
-(void)addListeners:(id)arg1;
-(void)removeListeners:(id)arg1;
-(void)addPublisher:(id)arg1;
-(long long)state;
-(BOOL)isStarted;
-(BOOL)isReachable;
-(void)removeListener:(id)arg1;
-(void)addListener:(id)arg1;
-(BOOL)isConnected;

@end

