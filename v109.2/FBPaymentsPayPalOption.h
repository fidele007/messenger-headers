/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBPaymentsPaymentMethodOption.h>

@class NSURL, NSString;

@interface FBPaymentsPayPalOption : NSObject <FBPaymentsPaymentMethodOption> {

	NSURL* _connectPayPalURL;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * paymentMethodType; 
-(NSString *)paymentMethodType;
-(BOOL)doesPaymentMethodBelongToThisOption:(id)arg1 ;
-(BOOL)doesCoverOption:(id)arg1 ;
-(BOOL)hasOverlapWithOption:(id)arg1 ;
-(id)initWithConnectPayPalURL:(id)arg1 ;
-(id)connectPayPalURL;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

