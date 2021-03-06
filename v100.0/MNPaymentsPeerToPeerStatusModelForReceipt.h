/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor;

@interface MNPaymentsPeerToPeerStatusModelForReceipt : FBValueObject <NSCopying> {

	BOOL _isNameIncludedInDescriptionText;
	BOOL _shouldShowPaymentMethod;
	BOOL _shouldShowPaymentMethodDetails;
	NSString* _statusText;
	UIColor* _amountTextColor;
	NSString* _descriptionText;
	long long _descriptionTextAddition;
	NSString* _additionalDescriptionText;
	long long _actionDisplayMode;
	NSString* _actionButtonTitle;
	long long _actionType;
	unsigned long long _timestampMask;
	NSString* _receiptLinkTitle;
	long long _receiptLinkURL;
	long long _helpLinkURL;
	long long _termLinkURL;

}

@property (nonatomic,copy,readonly) NSString * statusText;                             //@synthesize statusText=_statusText - In the implementation block
@property (nonatomic,copy,readonly) UIColor * amountTextColor;                         //@synthesize amountTextColor=_amountTextColor - In the implementation block
@property (nonatomic,copy,readonly) NSString * descriptionText;                        //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,readonly) BOOL isNameIncludedInDescriptionText;                   //@synthesize isNameIncludedInDescriptionText=_isNameIncludedInDescriptionText - In the implementation block
@property (nonatomic,readonly) long long descriptionTextAddition;                      //@synthesize descriptionTextAddition=_descriptionTextAddition - In the implementation block
@property (nonatomic,copy,readonly) NSString * additionalDescriptionText;              //@synthesize additionalDescriptionText=_additionalDescriptionText - In the implementation block
@property (nonatomic,readonly) long long actionDisplayMode;                            //@synthesize actionDisplayMode=_actionDisplayMode - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionButtonTitle;                      //@synthesize actionButtonTitle=_actionButtonTitle - In the implementation block
@property (nonatomic,readonly) long long actionType;                                   //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,readonly) unsigned long long timestampMask;                       //@synthesize timestampMask=_timestampMask - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowPaymentMethod;                           //@synthesize shouldShowPaymentMethod=_shouldShowPaymentMethod - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowPaymentMethodDetails;                    //@synthesize shouldShowPaymentMethodDetails=_shouldShowPaymentMethodDetails - In the implementation block
@property (nonatomic,copy,readonly) NSString * receiptLinkTitle;                       //@synthesize receiptLinkTitle=_receiptLinkTitle - In the implementation block
@property (nonatomic,readonly) long long receiptLinkURL;                               //@synthesize receiptLinkURL=_receiptLinkURL - In the implementation block
@property (nonatomic,readonly) long long helpLinkURL;                                  //@synthesize helpLinkURL=_helpLinkURL - In the implementation block
@property (nonatomic,readonly) long long termLinkURL;                                  //@synthesize termLinkURL=_termLinkURL - In the implementation block
-(long long)actionDisplayMode;
-(UIColor *)amountTextColor;
-(BOOL)isNameIncludedInDescriptionText;
-(long long)descriptionTextAddition;
-(NSString *)additionalDescriptionText;
-(NSString *)receiptLinkTitle;
-(long long)receiptLinkURL;
-(long long)helpLinkURL;
-(long long)termLinkURL;
-(id)initWithStatusText:(id)arg1 amountTextColor:(id)arg2 descriptionText:(id)arg3 isNameIncludedInDescriptionText:(BOOL)arg4 descriptionTextAddition:(long long)arg5 additionalDescriptionText:(id)arg6 actionDisplayMode:(long long)arg7 actionButtonTitle:(id)arg8 actionType:(long long)arg9 timestampMask:(unsigned long long)arg10 shouldShowPaymentMethod:(BOOL)arg11 shouldShowPaymentMethodDetails:(BOOL)arg12 receiptLinkTitle:(id)arg13 receiptLinkURL:(long long)arg14 helpLinkURL:(long long)arg15 termLinkURL:(long long)arg16 ;
-(unsigned long long)timestampMask;
-(BOOL)shouldShowPaymentMethod;
-(BOOL)shouldShowPaymentMethodDetails;
-(NSString *)descriptionText;
-(NSString *)statusText;
-(NSString *)actionButtonTitle;
-(long long)actionType;
@end

