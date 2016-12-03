/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequestDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/FBMDetachable.h>
#import <Messenger/FBCancelable.h>

@protocol MNAuthenticationManager, FBMUserFetcherDelegate;
@class FBUserSession, FBMDetchedNetworkRequestsQueue, NSString, FBMUserFetchedListeningAnnouncer, FBSimpleNetworkerRequest;

@interface FBMUserFetcher : NSObject <FBNetworkerRequestDelegate, FBClassProvidable, FBMDetachable, FBCancelable> {

	FBUserSession* _session;
	id<MNAuthenticationManager> _authManager;
	FBMDetchedNetworkRequestsQueue* _detachQueue;
	NSString* _userId;
	FBMUserFetchedListeningAnnouncer* _userFetchedAnnouncer;
	FBSimpleNetworkerRequest* _graphRequest;
	BOOL _requestFinished;
	id<FBMUserFetcherDelegate> _delegate;
	double _fetchTimeout;

}

@property (assign,nonatomic) double fetchTimeout;                   //@synthesize fetchTimeout=_fetchTimeout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(void)setFetchTimeout:(double)arg1 ;
-(double)fetchTimeout;
-(void)_cleanUpDetachedState;
-(id)initWithUserSession:(id)arg1 authManager:(id)arg2 userFetchedAnnouncer:(id)arg3 detachedQueue:(id)arg4 ;
-(void)configureAndFetchUserWithWithUserId:(id)arg1 delegate:(id)arg2 ;
-(void)cancel;
-(void)detach;
-(void)_didFailWithError:(id)arg1 ;
@end

