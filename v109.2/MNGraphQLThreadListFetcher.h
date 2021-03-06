/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassProvidable.h>

@protocol MNAuthenticationManager;
@class FBGraphQLService, FBGraphQLServiceToken, MNGraphQLQueryConfigGenerator, MNMessagingRegionHeaderHelper, MNThreadListFetchConfiguration, NSString;

@interface MNGraphQLThreadListFetcher : NSObject <FBClassProvidable> {

	FBGraphQLService* _graphQLService;
	FBGraphQLServiceToken* _graphQLRequest;
	MNGraphQLQueryConfigGenerator* _queryConfigGenerator;
	MNMessagingRegionHeaderHelper* _messagingRegionHeaderHelper;
	id<MNAuthenticationManager> _authManager;
	MNThreadListFetchConfiguration* _threadListFetchConfiguration;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_configureGraphQLServiceConfig:(id)arg1 ;
-(void)_processResponseWithError:(id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(void)fetchThreadListWithType:(long long)arg1 numberOfThreads:(long long)arg2 successBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(id)initWithGraphQLService:(id)arg1 queryConfigGenerator:(id)arg2 messagingRegionHeaderHelper:(id)arg3 authManager:(id)arg4 threadListFetchConfiguration:(id)arg5 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_processResponse:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)cancel;
-(void)dealloc;
@end

