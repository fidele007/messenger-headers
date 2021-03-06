/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:59 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBReachabilityListener.h>
#import <Messenger/FBLigerProvidesNetworkState.h>

@protocol FBLigerReachabilityCallback;
@class FBReachabilityAnnouncer, NSString;

@interface FBLigerReachabilityListener : NSObject <FBReachabilityListener, FBLigerProvidesNetworkState> {

	FBReachabilityAnnouncer* _reachabilityAnnouncer;
	id<FBLigerReachabilityCallback> _callback;

}

@property (readonly) unsigned long long reachabilityState; 
@property (__weak) id<FBLigerReachabilityCallback> callback;              //@synthesize callback=_callback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)listener;
-(void)reachabilityStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2 ;
-(unsigned long long)reachabilityState;
-(id)init;
-(void)dealloc;
-(id<FBLigerReachabilityCallback>)callback;
-(void)setCallback:(id<FBLigerReachabilityCallback>)arg1 ;
-(id)networkState;
@end

