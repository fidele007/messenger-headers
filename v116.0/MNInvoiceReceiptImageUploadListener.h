/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:51 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/FBMediaUploadListener.h>

@protocol MNInvoiceReceiptImageUploadListenerDelegate;
@class NSString;

@interface MNInvoiceReceiptImageUploadListener : NSObject <FBMediaUploadListener> {

	id<MNInvoiceReceiptImageUploadListenerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNInvoiceReceiptImageUploadListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)uploadDidSucceed:(id)arg1 withResponse:(id)arg2 metrics:(id)arg3 ;
-(void)uploadDidFail:(id)arg1 withFailureReason:(unsigned long long)arg2 isResumable:(BOOL)arg3 metrics:(id)arg4 ;
-(void)uploadWasCancelled:(id)arg1 metrics:(id)arg2 ;
-(void)uploadHasProgressed:(id)arg1 withProgressInformation:(FBMediaUploadJobProgressInformation)arg2 ;
-(void)setDelegate:(id<MNInvoiceReceiptImageUploadListenerDelegate>)arg1 ;
-(id<MNInvoiceReceiptImageUploadListenerDelegate>)delegate;
@end

