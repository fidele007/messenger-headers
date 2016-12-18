/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBPaymentsItemViewModel, MNPaymentsTransferReceiptStackItemViewModel;

@interface MNPaymentsTransferReceiptExtraInfoViewModel : FBValueObject <NSCopying> {

	FBPaymentsItemViewModel* _itemViewModel;
	MNPaymentsTransferReceiptStackItemViewModel* _stackItemViewModel;

}

@property (nonatomic,copy,readonly) FBPaymentsItemViewModel * itemViewModel;                                       //@synthesize itemViewModel=_itemViewModel - In the implementation block
@property (nonatomic,copy,readonly) MNPaymentsTransferReceiptStackItemViewModel * stackItemViewModel;              //@synthesize stackItemViewModel=_stackItemViewModel - In the implementation block
-(id)initWithItemViewModel:(id)arg1 stackItemViewModel:(id)arg2 ;
-(FBPaymentsItemViewModel *)itemViewModel;
-(MNPaymentsTransferReceiptStackItemViewModel *)stackItemViewModel;
@end
