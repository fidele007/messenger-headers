/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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
