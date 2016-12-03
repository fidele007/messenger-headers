/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol FBPaymentsPaymentMethod;
@class UIImage, NSString;

@interface FBPaymentsCardCellViewModel : FBValueObject <NSCopying> {

	BOOL _isDefaultForReceivingMoney;
	UIImage* _associationImage;
	NSString* _associationAndNumberText;
	id<FBPaymentsPaymentMethod> _paymentMethod;

}

@property (nonatomic,copy,readonly) UIImage * associationImage;                        //@synthesize associationImage=_associationImage - In the implementation block
@property (nonatomic,copy,readonly) NSString * associationAndNumberText;               //@synthesize associationAndNumberText=_associationAndNumberText - In the implementation block
@property (nonatomic,readonly) BOOL isDefaultForReceivingMoney;                        //@synthesize isDefaultForReceivingMoney=_isDefaultForReceivingMoney - In the implementation block
@property (nonatomic,readonly) id<FBPaymentsPaymentMethod> paymentMethod;              //@synthesize paymentMethod=_paymentMethod - In the implementation block
-(BOOL)isDefaultForReceivingMoney;
-(UIImage *)associationImage;
-(NSString *)associationAndNumberText;
-(id)initWithAssociationImage:(id)arg1 associationAndNumberText:(id)arg2 isDefaultForReceivingMoney:(BOOL)arg3 paymentMethod:(id)arg4 ;
-(id<FBPaymentsPaymentMethod>)paymentMethod;
@end

