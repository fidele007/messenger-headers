/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMThreadListFetcherDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/FBMMailboxPreparing.h>

@protocol FBMMailboxPreparingDelegate;
@class FBMThreadListFetcher, NSString;

@interface FBMThreadListPreparer : NSObject <FBMThreadListFetcherDelegate, FBClassProvidable, FBMMailboxPreparing> {

	FBMThreadListFetcher* _threadListFetcher;
	id<FBMMailboxPreparingDelegate> _delegate;
	long long _threadListType;
	unsigned long long _currentState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long currentState;              //@synthesize currentState=_currentState - In the implementation block
-(id)initWithProviderMapData:(id)arg1 ;
-(void)configureWithThreadListType:(long long)arg1 ;
-(void)configureAndPrepareThreadListWithDelegate:(id)arg1 ;
-(void)threadListFetcherDidFinishFetch:(id)arg1 didLoadAllThreads:(BOOL)arg2 ;
-(void)threadListFetcherDidCancelFetch:(id)arg1 ;
-(void)threadListFetcherDidFailToFetch:(id)arg1 error:(id)arg2 ;
-(id)initWithThreadListFetcher:(id)arg1 ;
-(void)cancel;
-(unsigned long long)currentState;
-(BOOL)isFetching;
@end

