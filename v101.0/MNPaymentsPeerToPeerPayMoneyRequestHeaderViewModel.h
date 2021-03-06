/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNPaymentsActorProfileViewModel, NSString;

@interface MNPaymentsPeerToPeerPayMoneyRequestHeaderViewModel : FBValueObject <NSCopying> {

	MNPaymentsActorProfileViewModel* _receiverViewModel;
	NSString* _memoText;

}

@property (nonatomic,copy,readonly) MNPaymentsActorProfileViewModel * receiverViewModel;              //@synthesize receiverViewModel=_receiverViewModel - In the implementation block
@property (nonatomic,copy,readonly) NSString * memoText;                                              //@synthesize memoText=_memoText - In the implementation block
-(NSString *)memoText;
-(MNPaymentsActorProfileViewModel *)receiverViewModel;
-(id)initWithReceiverViewModel:(id)arg1 memoText:(id)arg2 ;
@end

