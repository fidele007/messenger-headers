/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface FBDeferredJob : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _block;
	NSString* _identifier;
	BOOL _isMainQueue;

}
+(id)job:(/*^block*/id)arg1 queue:(id)arg2 identifier:(id)arg3 ;
+(id)mainQueueJob:(/*^block*/id)arg1 identifier:(id)arg2 ;
-(id)initWithQueue:(id)arg1 identifier:(id)arg2 block:(/*^block*/id)arg3 isMainQueue:(BOOL)arg4 ;
-(void)invokeWithSession:(id)arg1 shouldThrottleMainThread:(BOOL)arg2 ;
@end

