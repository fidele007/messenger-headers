/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBCancelable.h>

@protocol MNContactSearchResultMergingStrategy, OS_dispatch_queue;
@class MNContactSearchQuery, NSObject, NSMutableArray, NSArray;

@interface MNContactSearchRequestExecutor : NSObject <FBCancelable> {

	id<MNContactSearchResultMergingStrategy> _mergingStrategy;
	MNContactSearchQuery* _query;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _progress;
	/*^block*/id _completion;
	NSMutableArray* _pendingSources;
	NSArray* _receivedResults;
	NSArray* _cancelTokens;

}
-(id)initWithSources:(id)arg1 mergingStrategy:(id)arg2 query:(id)arg3 queue:(id)arg4 ;
-(void)performRequestWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_didReceiveResults:(id)arg1 forSource:(id)arg2 ;
-(void)_callAppropriateCallback;
-(void)cancel;
@end
