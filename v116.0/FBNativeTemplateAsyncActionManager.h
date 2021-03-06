/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:55 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating;
@class NSMutableDictionary, NSMutableArray;

@interface FBNativeTemplateAsyncActionManager : NSObject {

	id<FBServiceTransactionMutating> _currentQuery;
	NSMutableDictionary* _sequenceNumberToPendingResponses;
	NSMutableArray* _pendingSequenceNumbers;
	long long _sequenceNumber;
	BOOL _executeInRequestOrder;
	BOOL _cancelPending;
	BOOL _canceled;

}

@property (assign,nonatomic) BOOL canceled;              //@synthesize canceled=_canceled - In the implementation block
-(void)performActionWithAsyncAction:(id)arg1 clientData:(id)arg2 ;
-(BOOL)performActionWithAsyncAction:(id)arg1 clientData:(id)arg2 sequenceNumber:(long long)arg3 ;
-(void)_handleSuccessWithResponse:(id)arg1 context:(id)arg2 sequenceNumber:(long long)arg3 ;
-(void)_handleErrorWithAsyncAction:(id)arg1 clientData:(id)arg2 sequenceNumber:(long long)arg3 ;
-(id)init;
-(BOOL)canceled;
-(void)setCanceled:(BOOL)arg1 ;
@end

