/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBGraphQLFragmentService, FBServiceTransactionMutating, OS_dispatch_queue, MNAuthenticationManager;
@class NSObject;

@interface MNMessageSearchResultsFetcher : NSObject {

	id<FBGraphQLFragmentService> _graphQLFragmentService;
	id<FBServiceTransactionMutating> _graphQLRequest;
	NSObject*<OS_dispatch_queue> _queue;
	id<MNAuthenticationManager> _authManager;

}
-(void)_configureGraphQLServiceConfig:(id)arg1 ;
-(id)initWithGraphQLFragmentService:(id)arg1 authManager:(id)arg2 queue:(id)arg3 ;
-(void)fetchMessageSearchResultsWithQuery:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)_processParsedResponse:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)_processResponseWithError:(id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(void)cancel;
-(void)dealloc;
@end
