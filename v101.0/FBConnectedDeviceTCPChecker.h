/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBReachabilityListener.h>
#import <Messenger/GCDAsyncSocketDelegate.h>

@protocol FBGraphQLSubscriptionHandle, FBCancelable;
@class FBUserSession, FBAnalytics, NSNotificationCenter, FBReachabilityAnnouncer, GCDAsyncSocket, NSString, NSMutableArray;

@interface FBConnectedDeviceTCPChecker : NSObject <FBReachabilityListener, GCDAsyncSocketDelegate> {

	FBUserSession* _session;
	FBAnalytics* _analytics;
	NSNotificationCenter* _notificationCenter;
	FBReachabilityAnnouncer* _reachabilityAnnouncer;
	GCDAsyncSocket* _asyncSocket;
	NSString* _currentEndPoint;
	id<FBGraphQLSubscriptionHandle> _subscriptionHandle;
	NSString* _currentBSSID;
	double _nextPossibleExecutionTime;
	NSMutableArray* _toDiscoverQueue;
	BOOL _isProcessingQueueItem;
	BOOL _waitForAckToContinueQueue;
	id<FBCancelable> _dispatchCancel;
	int _subscriptionCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reachabilityStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2 ;
-(void)_didEnterForeground;
-(void)_didEnterBackground;
-(id)initWithSession:(id)arg1 analytics:(id)arg2 notificationCenter:(id)arg3 reachabilityAnnouncer:(id)arg4 ;
-(void)_subscribeIfNeededWithPayload:(id)arg1 ;
-(void)_didReceiveQueryResult:(id)arg1 ;
-(void)logEvent:(id)arg1 withError:(id)arg2 ;
-(void)unsubscribeToGraphQL;
-(void)subscribeToGraphQL;
-(void)trimDiscoverQueue;
-(void)processOneFromQueueIfNeeded;
-(void)_didReceiveSubscriptionUpdate:(id)arg1 ;
-(void)logEvent:(id)arg1 withCount:(int)arg2 ;
-(void)checkForResultWithHost:(id)arg1 onPort:(unsigned short)arg2 withEndPoint:(id)arg3 withCommand:(id)arg4 ;
-(BOOL)tryProcessEndPoint:(id)arg1 withCommand:(id)arg2 ;
-(void)handleFinishedProcessingWithMinWait:(double)arg1 ;
-(void)logEvent:(id)arg1 withToken:(id)arg2 ;
-(void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3 ;
-(void)socketDidDisconnect:(id)arg1 withError:(id)arg2 ;
-(void)dealloc;
-(void)logEvent:(id)arg1 ;
-(void)startDiscovery;
@end
