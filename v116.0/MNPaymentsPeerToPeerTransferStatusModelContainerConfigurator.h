/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:51 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPaymentsMessengerPaymentStatusModelContainerConfigurator.h>

@class NSString;

@interface MNPaymentsPeerToPeerTransferStatusModelContainerConfigurator : NSObject <MNPaymentsMessengerPaymentStatusModelContainerConfigurator>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_shouldConfigureWithMessengerPayment:(id)arg1 direction:(long long)arg2 ;
-(id)_configureStatusModelWithOriginStatusModel:(id)arg1 messengerPayment:(id)arg2 direction:(long long)arg3 ;
-(BOOL)_shouldConfigureForThemeWithMessengerPayment:(id)arg1 direction:(long long)arg2 ;
-(BOOL)_shouldConfigureForHeaderMessageWithMessengerPayment:(id)arg1 direction:(long long)arg2 ;
-(id)_configureStatusModelForThemeWithOriginStatusModel:(id)arg1 messengerPayment:(id)arg2 direction:(long long)arg3 ;
-(id)_configureStatusModelForHeaderWithOriginStatusModel:(id)arg1 messengerPayment:(id)arg2 direction:(long long)arg3 ;
-(id)modelForOriginStatusModel:(id)arg1 withMessengerPayment:(id)arg2 direction:(long long)arg3 ;
@end

