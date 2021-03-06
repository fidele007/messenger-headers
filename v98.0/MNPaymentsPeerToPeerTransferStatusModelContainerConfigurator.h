/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPaymentsMessengerPaymentStatusModelContainerConfigurator.h>

@class NSString;

@interface MNPaymentsPeerToPeerTransferStatusModelContainerConfigurator : NSObject <MNPaymentsMessengerPaymentStatusModelContainerConfigurator>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)modelForOriginStatusModel:(id)arg1 withMessengerPayment:(id)arg2 direction:(long long)arg3 ;
-(BOOL)_shouldConfigureWithMessengerPayment:(id)arg1 direction:(long long)arg2 ;
-(id)_configureStatusModelWithOriginStatusModel:(id)arg1 messengerPayment:(id)arg2 direction:(long long)arg3 ;
-(BOOL)_shouldConfigureForThemeWithMessengerPayment:(id)arg1 direction:(long long)arg2 ;
-(BOOL)_shouldConfigureForHeaderMessageWithMessengerPayment:(id)arg1 direction:(long long)arg2 ;
-(id)_configureStatusModelForThemeWithOriginStatusModel:(id)arg1 messengerPayment:(id)arg2 direction:(long long)arg3 ;
-(id)_configureStatusModelForHeaderWithOriginStatusModel:(id)arg1 messengerPayment:(id)arg2 direction:(long long)arg3 ;
@end

