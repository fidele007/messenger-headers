/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface RTCVideoSnapshotRequest : NSObject {

	/*^block*/id _onComplete;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	double _timeout;

}

@property (nonatomic,readonly) double timeout;              //@synthesize timeout=_timeout - In the implementation block
+(id)snapshotRequestWithTimeout:(double)arg1 callBackQueue:(id)arg2 onComplete:(/*^block*/id)arg3 ;
-(void)onAbort;
-(id)initWithTimeout:(double)arg1 callBackQueue:(id)arg2 onComplete:(/*^block*/id)arg3 ;
-(void)_onComplete:(id)arg1 ;
-(void)onSnapshot:(id)arg1 ;
-(double)timeout;
@end

