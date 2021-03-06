/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:37 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBReachabilityListener.h>
#import <FBSharedFramework/FBNetworkerRequestDelegate.h>

@protocol FBNetworkDispatch, FBMReachabilityAwareNetworkerDelegate;
@class FBNetworkerRequest, FBDelayer, NSString;

@interface FBMReachabilityAwareNetworker : NSObject <FBReachabilityListener, FBNetworkerRequestDelegate> {

	FBNetworkerRequest* _networkerRequest;
	id<FBNetworkDispatch> _networkDispatcher;
	unsigned long long _reachabilityState;
	BOOL _requestStarted;
	FBDelayer* _delayer;
	id<FBMReachabilityAwareNetworkerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBMReachabilityAwareNetworkerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithNetworkerRequest:(id)arg1 networkDispatcher:(id)arg2 ;
-(id)initWithNetworkerRequest:(id)arg1 ;
-(void)_addRequestWithReachabilityCheck:(id)arg1 ;
-(void)_requestDidSucceedWithResult:(id)arg1 complete:(BOOL)arg2 ;
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(void)reachabilityStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2 ;
-(void)setDelegate:(id<FBMReachabilityAwareNetworkerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBMReachabilityAwareNetworkerDelegate>)delegate;
-(void)stop;
-(void)start;
-(void)_requestDidFailWithError:(id)arg1 ;
@end

