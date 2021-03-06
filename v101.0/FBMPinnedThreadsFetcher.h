/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequestDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/FBMGroupThreadsFetching.h>

@protocol FBServiceTransactionMutating, FBMPinnedThreadsFetcherDelegate;
@class FBUserSession, MNMessagingRegionHeaderHelper, NSString;

@interface FBMPinnedThreadsFetcher : NSObject <FBNetworkerRequestDelegate, FBClassProvidable, FBMGroupThreadsFetching> {

	FBUserSession* _userSession;
	MNMessagingRegionHeaderHelper* _messagingRegionHeaderHelper;
	id<FBServiceTransactionMutating> _graphQLFetchRequest;
	id<FBMPinnedThreadsFetcherDelegate> _delegate;
	unsigned long long _maxGroupThreadsCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long maxGroupThreadsCount;              //@synthesize maxGroupThreadsCount=_maxGroupThreadsCount - In the implementation block
-(id)initWithProviderMapData:(id)arg1 ;
-(void)setMaxGroupThreadsCount:(unsigned long long)arg1 ;
-(void)_startGraphQLFetchWithUpdateTime:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)_notifyNetworkMonitor;
-(void)_configureGraphQLServiceConfig:(id)arg1 ;
-(void)fetchGroupThreadsWithUpdateTime:(double)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)maxGroupThreadsCount;
-(id)initWithUserSession:(id)arg1 messagingRegionHeaderHelper:(id)arg2 ;
-(void)_handleGraphQLFetchSuccessWithResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancel;
@end

