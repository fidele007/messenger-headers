/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class CSSearchableIndex, NSArray, MNSpotlightIndexingListenerAnnouncer, NSObject;

@interface MNSpotlightBatchDeletionIndexOperation : NSOperation {

	CSSearchableIndex* _searchableIndex;
	NSArray* _deleteIdentifiers;
	MNSpotlightIndexingListenerAnnouncer* _announcer;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _finished;
	BOOL _executing;
	BOOL _cancelled;

}
-(void)_performDeletionCompletion;
-(void)_performDeletionCompletionWithIdentifiers:(id)arg1 ;
-(void)_performIndexCancelCompletion;
-(void)_startExecuting;
-(id)initWithSearchableIndex:(id)arg1 deleteIdentifiers:(id)arg2 announcer:(id)arg3 ;
-(BOOL)isAsynchronous;
-(void)cancel;
-(void)start;
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)setFinished:(BOOL)arg1 ;
-(void)setExecuting:(BOOL)arg1 ;
@end
