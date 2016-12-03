/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, MNUserRequestListener;
@class NSObject, MNUserStoreRequestCoordinator, MNUserRequestHandlerChain, FBAnalytics;

@interface MNUserStore : NSObject {

	NSObject*<OS_dispatch_queue> _serialDispatchQueue;
	id<MNUserRequestListener> _responderChainDispatcher;
	MNUserStoreRequestCoordinator* _requestCoordinator;
	MNUserRequestHandlerChain* _requestHandlerChainManager;
	FBAnalytics* _analytics;

}
-(unsigned long long)handleSingleUserRequest:(id)arg1 ;
-(unsigned long long)handleMultipleUserRequest:(id)arg1 ;
-(id)initWithHandlerChainManager:(id)arg1 analytics:(id)arg2 queue:(id)arg3 ;
-(void)cancelRequest:(unsigned long long)arg1 ;
@end
