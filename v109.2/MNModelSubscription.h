/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:44 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNModelSubscriptionCallbackHandling, NSCopying, OS_dispatch_queue;
#import <Messenger/Messenger-Structs.h>
@class NSArray, NSString, NSObject;

@interface MNModelSubscription : NSObject {

	NSArray* _children;
	id<MNModelSubscriptionCallbackHandling> _callbackHandler;
	long long _subscriptionId;
	NSString* _kind;
	id<NSCopying> _key;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	BOOL _callbackIsSet;
	mutex _callbackMutex;

}
-(void)setCallback:(/*^block*/id)arg1 onQueue:(id)arg2 ;
-(id)initWithChildren:(id)arg1 callbackHandler:(id)arg2 subscriptionId:(long long)arg3 kind:(id)arg4 key:(id)arg5 ;
-(void)cancel;
-(void)dealloc;
-(id)key;
-(id)kind;
-(id)queue;
-(void)_cancel;
-(void)setCallback:(/*^block*/id)arg1 ;
@end

