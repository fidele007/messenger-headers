/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsCheckoutFlowErrorHandler.h>

@protocol MNPaymentsPeerToPeerRiskFlowController, MNNavigationPluginService;
@class NSString;

@interface MNPaymentsPeerToPeerCheckoutFlowErrorHandler : NSObject <FBPaymentsCheckoutFlowErrorHandler> {

	id<MNPaymentsPeerToPeerRiskFlowController> _riskFlowController;
	id<MNNavigationPluginService> _navigationService;
	BOOL _hasOngoingError;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithRiskFlowController:(id)arg1 navigationService:(id)arg2 ;
-(void)handleCheckoutSendingFailureWithFlowId:(id)arg1 collectedData:(id)arg2 error:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)handleCheckoutProcessingFailureWithFlowId:(id)arg1 collectedData:(id)arg2 error:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handlerFailureWithFlowId:(id)arg1 collectedData:(id)arg2 error:(id)arg3 completion:(/*^block*/id)arg4 ;
-(/*^block*/id)_completionBlockForInputCompletionAction:(/*^block*/id)arg1 ;
-(void)_presentRiskFlowAlertViewWithError:(id)arg1 cancellationBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_enterRiskFlowWithTransferId:(id)arg1 direction:(long long)arg2 cancellationBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_resetOngoingError;
@end

