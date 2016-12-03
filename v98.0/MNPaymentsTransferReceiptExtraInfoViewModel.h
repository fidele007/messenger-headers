/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNCommerceItemViewModel, MNPaymentsTransferReceiptStackItemViewModel;

@interface MNPaymentsTransferReceiptExtraInfoViewModel : FBValueObject <NSCopying> {

	MNCommerceItemViewModel* _commerceItemViewModel;
	MNPaymentsTransferReceiptStackItemViewModel* _stackItemViewModel;

}

@property (nonatomic,copy,readonly) MNCommerceItemViewModel * commerceItemViewModel;                               //@synthesize commerceItemViewModel=_commerceItemViewModel - In the implementation block
@property (nonatomic,copy,readonly) MNPaymentsTransferReceiptStackItemViewModel * stackItemViewModel;              //@synthesize stackItemViewModel=_stackItemViewModel - In the implementation block
-(id)initWithCommerceItemViewModel:(id)arg1 stackItemViewModel:(id)arg2 ;
-(MNCommerceItemViewModel *)commerceItemViewModel;
-(MNPaymentsTransferReceiptStackItemViewModel *)stackItemViewModel;
@end

