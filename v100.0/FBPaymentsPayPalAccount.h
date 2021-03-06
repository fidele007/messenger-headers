/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBPaymentsPaymentMethod.h>

@class NSString, NSURL;

@interface FBPaymentsPayPalAccount : NSObject <FBPaymentsPaymentMethod> {

	NSString* _credentialId;
	NSString* _paymentMethodType;
	NSString* _billingAgreementType;
	NSString* _accountEmailAddress;
	NSURL* _CIBTermsURL;
	NSString* _CIBConsentText;

}

@property (nonatomic,copy,readonly) NSString * accountEmailAddress;              //@synthesize accountEmailAddress=_accountEmailAddress - In the implementation block
@property (nonatomic,copy) NSString * billingAgreementType;                      //@synthesize billingAgreementType=_billingAgreementType - In the implementation block
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
-(NSURL *)CIBTermsURL;
-(void)setCIBTermsURL:(NSURL *)arg1 ;
-(NSString *)CIBConsentText;
-(void)setCIBConsentText:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

