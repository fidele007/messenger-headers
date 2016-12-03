/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPaymentsTransferReceiptViewModelCreator.h>

@class FBUserSession, FBPaymentsPeerToPeerTransferStatusModelContainer, NSString;

@interface MNAgentSuggestedItemPaymentDetailsViewModelCreator : NSObject <MNPaymentsTransferReceiptViewModelCreator> {

	FBUserSession* _session;
	FBPaymentsPeerToPeerTransferStatusModelContainer* _statusModelContainer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)navigationTitleText;
-(id)headerViewModelForActivityDataModel:(id)arg1 withSender:(id)arg2 withReceiver:(id)arg3 ;
-(id)extraInfoViewModelForActivityDataModel:(id)arg1 withPaymentMethod:(id)arg2 shouldMaskPaymentMethod:(BOOL)arg3 extensionContent:(id)arg4 ;
-(id)paymentIdViewModelForActivityDataModel:(id)arg1 ;
-(id)statusModelForActivityDataModel:(id)arg1 ;
-(id)initWithSession:(id)arg1 statusModelContainer:(id)arg2 ;
@end

