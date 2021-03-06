/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:16 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@protocol OS_dispatch_queue;
@class NSObject, Protocol;

@interface FBQueueDispatcher : NSProxy {

	id _listener;
	NSObject*<OS_dispatch_queue> _performer;
	Protocol* _protocol;
	id _weakListener;

}
-(id)initWithListener:(id)arg1 protocol:(id)arg2 queueToNotifyListenerOn:(id)arg3 listenerMemorySemantic:(unsigned long long)arg4 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

