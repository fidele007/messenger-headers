/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:52 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBPaymentsPaymentMethod.h>

@class NSString, NSURL;

@interface FBPaymentsPayPalAccount : NSObject <FBPaymentsPaymentMethod> {

	BOOL _isCIBConversionNeeded;
	NSString* _credentialId;
	NSString* _paymentMethodType;
	NSString* _accountEmailAddress;
	NSString* _billingAgreementType;
	NSURL* _CIBTermsURL;
	NSString* _CIBConsentText;

}

@property (nonatomic,copy,readonly) NSString * accountEmailAddress;              //@synthesize accountEmailAddress=_accountEmailAddress - In the implementation block
@property (nonatomic,copy) NSString * billingAgreementType;                      //@synthesize billingAgreementType=_billingAgreementType - In the implementation block
@property (assign,nonatomic) BOOL isCIBConversionNeeded;                         //@synthesize isCIBConversionNeeded=_isCIBConversionNeeded - In the implementation block
@property (nonatomic,copy) NSURL * CIBTermsURL;                                  //@synthesize CIBTermsURL=_CIBTermsURL - In the implementation block
@property (nonatomic,copy) NSString * CIBConsentText;                            //@synthesize CIBConsentText=_CIBConsentText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * paymentMethodType;                //@synthesize paymentMethodType=_paymentMethodType - In the implementation block
@property (nonatomic,copy,readonly) NSString * credentialId;                     //@synthesize credentialId=_credentialId - In the implementation block
-(BOOL)containsSameDataAs:(id)arg1 ;
-(NSString *)paymentMethodType;
-(NSString *)credentialId;
-(NSString *)accountEmailAddress;
-(NSString *)billingAgreementType;
-(id)initWithCredentialId:(id)arg1 accountEmailAddress:(id)arg2 ;
-(void)setBillingAgreementType:(NSString *)arg1 ;
-(BOOL)isCIBConversionNeeded;
-(void)setIsCIBConversionNeeded:(BOOL)arg1 ;
-(NSURL *)CIBTermsURL;
-(void)setCIBTermsURL:(NSURL *)arg1 ;
-(NSString *)CIBConsentText;
-(void)setCIBConsentText:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

