/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBPaymentsLocalOnlyPaymentMethod.h>

@class NSString;

@interface FBPaymentsPayOverCounter : NSObject <FBPaymentsLocalOnlyPaymentMethod> {

	NSString* _credentialId;
	NSString* _paymentMethodType;
	NSString* _title;

}

@property (nonatomic,copy,readonly) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * paymentMethodType;              //@synthesize paymentMethodType=_paymentMethodType - In the implementation block
@property (nonatomic,copy,readonly) NSString * credentialId;                   //@synthesize credentialId=_credentialId - In the implementation block
-(BOOL)containsSameDataAs:(id)arg1 ;
-(NSString *)paymentMethodType;
-(NSString *)credentialId;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithTitle:(id)arg1 ;
@end
