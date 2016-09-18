/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBCancelable;
@interface MNMontageViewModelGenerationRequestInfo : NSObject {

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
