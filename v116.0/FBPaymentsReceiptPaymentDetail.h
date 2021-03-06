/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSAttributedString;

@interface FBPaymentsReceiptPaymentDetail : FBValueObject <NSCopying> {

	NSString* _paymentID;
	NSArray* _paymentInfo;
	NSArray* _priceList;
	NSAttributedString* _additionalInstruction;

}

@property (nonatomic,copy,readonly) NSString * paymentID;                                    //@synthesize paymentID=_paymentID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * paymentInfo;                                   //@synthesize paymentInfo=_paymentInfo - In the implementation block
@property (nonatomic,copy,readonly) NSArray * priceList;                                     //@synthesize priceList=_priceList - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * additionalInstruction;              //@synthesize additionalInstruction=_additionalInstruction - In the implementation block
-(NSArray *)paymentInfo;
-(NSString *)paymentID;
-(NSArray *)priceList;
-(NSAttributedString *)additionalInstruction;
-(id)initWithPaymentID:(id)arg1 paymentInfo:(id)arg2 priceList:(id)arg3 additionalInstruction:(id)arg4 ;
@end

