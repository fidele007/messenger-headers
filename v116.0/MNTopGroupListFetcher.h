/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:52 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNAuthenticationManager, OS_dispatch_queue;
@class FBGraphQLService, FBGraphQLServiceToken, MNGraphQLQueryConfigGenerator, NSObject;

@interface MNTopGroupListFetcher : NSObject {

	FBGraphQLService* _graphQLService;
	FBGraphQLServiceToken* _graphQLRequest;
	MNGraphQLQueryConfigGenerator* _queryConfigGenerator;
	id<MNAuthenticationManager> _authManager;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)_configureGraphQLServiceConfig:(id)arg1 ;
-(void)_processParsedResponse:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)_processResponseWithError:(id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(id)initWithGraphQLService:(id)arg1 queryConfigGenerator:(id)arg2 authManager:(id)arg3 queue:(id)arg4 ;
-(void)fetchTopGroupThreadsListWithSuccessBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(void)cancel;
@end

