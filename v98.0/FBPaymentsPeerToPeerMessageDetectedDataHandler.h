/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsPeerToPeerSendFlowControllerDelegate.h>
#import <Messenger/MNMessageDetectedDataHandling.h>

@class NSString, NSDecimalNumber, FBMUser, FBMGroupThreadKey, FBPaymentsPeerToPeerSendFlowController, MNPaymentsFlowSessionController, NSMutableDictionary;

@interface FBPaymentsPeerToPeerMessageDetectedDataHandler : NSObject <FBPaymentsPeerToPeerSendFlowControllerDelegate, MNMessageDetectedDataHandling> {

	NSString* _localizedTitle;
	NSDecimalNumber* _initialAmount;
	FBMUser* _recipient;
	FBMGroupThreadKey* _groupThreadKey;
	long long _peopleCountInThread;
	FBPaymentsPeerToPeerSendFlowController* _sendFlowController;
	MNPaymentsFlowSessionController* _flowSessionController;
	NSMutableDictionary* _completionBlockForAttachment;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) long long handlerType; 
-(void)peerToPeerSendFlowController:(id)arg1 didCancelCheckoutFlowWithFlowId:(id)arg2 error:(id)arg3 ;
-(void)peerToPeerSendFlowController:(id)arg1 didCompleteSendFlowWithFlowId:(id)arg2 checkoutViewController:(id)arg3 ;
-(void)peerToPeerSendFlowController:(id)arg1 willCheckoutWithFlowId:(id)arg2 ;
-(void)peerToPeerSendFlowController:(id)arg1 didCheckoutWithFlowId:(id)arg2 ;
-(void)peerToPeerSendFlowController:(id)arg1 didFailCheckoutWithFlowId:(id)arg2 ;
-(void)handleWithCompletion:(/*^block*/id)arg1 ;
-(void)_dispatchHandlingResult:(id)arg1 forPaymentAttachmentWithAnalyticsUUID:(id)arg2 ;
-(id)initWithLocalizedTitle:(id)arg1 recipient:(id)arg2 initialAmount:(id)arg3 groupThreadKey:(id)arg4 peopleCountInThread:(long long)arg5 sendFlowController:(id)arg6 flowSessionController:(id)arg7 ;
-(NSString *)localizedTitle;
-(long long)handlerType;
@end

