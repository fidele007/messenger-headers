/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBReachabilityMonitorDelegate, OS_dispatch_queue;
#import <Messenger/Messenger-Structs.h>
@class NSObject;

@interface FBReachabilityMonitor : NSObject {

	id<FBReachabilityMonitorDelegate> _delegate;
	unsigned long long _ipVersion;
	unsigned long long _reachabilityState;
	SCNetworkReachabilityRef _scNetworkReachabilityRef;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _userQueue;

}

@property (nonatomic,readonly) unsigned long long reachabilityState;              //@synthesize reachabilityState=_reachabilityState - In the implementation block
+(unsigned long long)_parseFlags:(unsigned)arg1 ;
-(unsigned long long)reachabilityState;
-(void)_updateForNewFlags:(unsigned)arg1 ;
-(id)initWithDelegate:(id)arg1 ipVersion:(unsigned long long)arg2 notificationQueue:(id)arg3 ;
-(void)triggerOSCallbackWithFlags:(unsigned)arg1 ;
-(void)dealloc;
-(void)start;
@end
