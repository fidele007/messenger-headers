/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNChainRequestReceiving.h>
#import <Messenger/MNChainRequestForwarding.h>
#import <Messenger/MNChainResponsePropagating.h>

@protocol MNChainRequestHandling, OS_dispatch_queue;
@class FBAnalytics, NSObject, NSMutableDictionary, NSString;

@interface MNChainAnnounceHandler : NSObject <MNChainRequestReceiving, MNChainRequestForwarding, MNChainResponsePropagating> {

	id<MNChainRequestHandling> _nextHandler;
	FBAnalytics* _analytics;
	NSObject*<OS_dispatch_queue> _queue;
	long long _sourceIdentifier;
	NSMutableDictionary* _requestKeyToRequestStateMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleMessageFetchRequest:(id)arg1 listener:(id)arg2 ;
-(void)handleMessageBatchRequest:(id)arg1 listener:(id)arg2 ;
-(void)handleBatchThreadSummaryRequest:(id)arg1 listener:(id)arg2 ;
-(void)handleJointRequest:(id)arg1 listener:(id)arg2 ;
-(void)handleSecureThreadRequest:(id)arg1 listener:(id)arg2 ;
-(void)handleBatchSecureAndSyncedThreadRequest:(id)arg1 listener:(id)arg2 ;
-(void)handleThreadListRequest:(id)arg1 listener:(id)arg2 ;
-(void)handleJointThreadListRequest:(id)arg1 listener:(id)arg2 ;
-(void)_handleChainRequest:(id)arg1 ;
-(void)_cleanupRequestForKey:(NSNumber*)arg1 ;
-(void)configureWithNextChainHandler:(id)arg1 ;
-(void)chainRequestId:(unsigned long long)arg1 wasHandled:(id)arg2 ;
-(void)chainRequestId:(unsigned long long)arg1 failedWithError:(id)arg2 ;
-(void)chainRequestId:(unsigned long long)arg1 didUpdateResponse:(id)arg2 ;
-(void)longOperationDidBeginForChainRequestId:(unsigned long long)arg1 sourceIdentifier:(long long)arg2 ;
-(id)initWithSourceIdentifier:(long long)arg1 analytics:(id)arg2 queue:(id)arg3 ;
@end

