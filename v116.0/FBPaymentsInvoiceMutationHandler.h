/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:51 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPaymentsInvoiceMutationHandlerDelegate;
@class FBUserSession, NSString;

@interface FBPaymentsInvoiceMutationHandler : NSObject {

	FBUserSession* _session;
	NSString* _productType;
	NSString* _productID;
	NSString* _actorID;
	id<FBPaymentsInvoiceMutationHandlerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPaymentsInvoiceMutationHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithSession:(id)arg1 productType:(id)arg2 productID:(id)arg3 actorID:(id)arg4 ;
-(void)udpateInvoiceWithActionIdentifer:(id)arg1 actionData:(id)arg2 ;
-(void)_successWithResponse:(id)arg1 ;
-(void)setDelegate:(id<FBPaymentsInvoiceMutationHandlerDelegate>)arg1 ;
-(id<FBPaymentsInvoiceMutationHandlerDelegate>)delegate;
-(void)_failWithError:(id)arg1 ;
@end

