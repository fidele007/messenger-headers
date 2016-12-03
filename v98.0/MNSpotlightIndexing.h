/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNSpotlightIndexing <NSObject>
@property (assign,nonatomic,__weak) id<MNSpotlightBatchIndexingListener> spotlightBatchIndexingListener; 
@required
-(void)indexContactSyncUserFriends:(id)arg1;
-(void)deleteIndexForContactSyncUserFriends:(id)arg1;
-(void)deleteIndexForFriendsWithUserIds:(id)arg1;
-(void)indexGroupThread:(id)arg1;
-(void)deleteIndexForGroupThreadWithKey:(id)arg1;
-(void)clearIndex;
-(void)clearAllGroupThreads;
-(id<MNSpotlightBatchIndexingListener>)spotlightBatchIndexingListener;
-(void)setSpotlightBatchIndexingListener:(id)arg1;

@end

