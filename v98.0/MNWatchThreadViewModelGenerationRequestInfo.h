/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBCancelable;
@interface MNWatchThreadViewModelGenerationRequestInfo : NSObject {

	unsigned long long _userStoreRequestId;
	id<FBCancelable> _cancelTokenForMessageRequest;
	unsigned long long _threadStoreRequestId;

}

@property (assign,nonatomic) unsigned long long userStoreRequestId;                      //@synthesize userStoreRequestId=_userStoreRequestId - In the implementation block
@property (nonatomic,retain) id<FBCancelable> cancelTokenForMessageRequest;              //@synthesize cancelTokenForMessageRequest=_cancelTokenForMessageRequest - In the implementation block
@property (assign,nonatomic) unsigned long long threadStoreRequestId;                    //@synthesize threadStoreRequestId=_threadStoreRequestId - In the implementation block
-(unsigned long long)userStoreRequestId;
-(void)setUserStoreRequestId:(unsigned long long)arg1 ;
-(id<FBCancelable>)cancelTokenForMessageRequest;
-(void)setCancelTokenForMessageRequest:(id<FBCancelable>)arg1 ;
-(unsigned long long)threadStoreRequestId;
-(void)setThreadStoreRequestId:(unsigned long long)arg1 ;
-(id)init;
@end

