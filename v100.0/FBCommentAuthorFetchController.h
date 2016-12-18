/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating;
@class FBUserSession;

@interface FBCommentAuthorFetchController : NSObject {

	FBUserSession* _session;
	id<FBServiceTransactionMutating> _currentGraphQLRequestToken;

}

@property (nonatomic,retain) id<FBServiceTransactionMutating> currentGraphQLRequestToken;              //@synthesize currentGraphQLRequestToken=_currentGraphQLRequestToken - In the implementation block
-(void)fetchActorWithGraphQLID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_completeWithActor:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchProfilePictureWithGraphQLID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCurrentGraphQLRequestToken:(id<FBServiceTransactionMutating>)arg1 ;
-(id<FBServiceTransactionMutating>)currentGraphQLRequestToken;
-(void)dealloc;
-(id)initWithSession:(id)arg1 ;
@end
