/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsCheckoutConfirmationConfiguration.h>

@class FBMemPaymentScreenData, FBPageComponentFlowPaymentsCheckoutResponse, FBUserSession, FBPageComponentFlowFunnelLogger, NSString;

@interface FBPageComponentFlowPaymentsConfirmationConfiguration : NSObject <FBPaymentsCheckoutConfirmationConfiguration> {

	FBMemPaymentScreenData* _model;
	FBPageComponentFlowPaymentsCheckoutResponse* _checkoutResponse;
	FBUserSession* _session;
	FBPageComponentFlowFunnelLogger* _logger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)confirmationActions;
-(id)receiptPresenter;
-(id)confirmationAttributedText;
-(BOOL)shouldShowEnableProtectionAction;
-(id)confirmationTitleText;
-(id)merchantLogoImage;
-(id)initWithModel:(id)arg1 session:(id)arg2 checkoutResponse:(id)arg3 logger:(id)arg4 ;
@end
