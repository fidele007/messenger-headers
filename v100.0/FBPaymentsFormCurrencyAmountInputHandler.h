/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsFormTextInputHandler.h>

@class FBPaymentsCurrency;

@interface FBPaymentsFormCurrencyAmountInputHandler : FBPaymentsFormTextInputHandler {

	FBPaymentsCurrency* _currency;

}
-(id)textInputStateForText:(id)arg1 truncateExceededCharacters:(BOOL)arg2 ;
-(id)processChangeFromState:(id)arg1 toState:(id)arg2 textInputEvent:(long long)arg3 ;
-(id)effectiveCharacterSet;
-(id)initWithCurrencyCode:(id)arg1 ;
-(long long)keyboardType;
@end

