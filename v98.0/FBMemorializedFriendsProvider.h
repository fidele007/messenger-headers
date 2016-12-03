/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMemorializedFriendsProviderDelegate;
@class NSMutableSet, FBMemPagedDownloadController, FBUserSession;

@interface FBMemorializedFriendsProvider : NSObject {

	NSMutableSet* _memorializedFriends;
	FBMemPagedDownloadController* _downloadController;
	FBUserSession* _session;
	id<FBMemorializedFriendsProviderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBMemorializedFriendsProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_loadNextPage;
-(void)_processIncrementalResults:(id)arg1 error:(id)arg2 ;
-(void)fetchMemorializedFriends;
-(void)setDelegate:(id<FBMemorializedFriendsProviderDelegate>)arg1 ;
-(id<FBMemorializedFriendsProviderDelegate>)delegate;
-(id)initWithSession:(id)arg1 ;
@end
