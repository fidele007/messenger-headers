/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNMessageDetectedDataHandlerProviding.h>

@class NSString, FBPaymentsPeerToPeerSendFlowController, MNPaymentsFlowSessionController, FBPaymentsPeerToPeerFeatureGatingController;

@interface FBPaymentsPeerToPeerMessageDetectedDataHandlerProvider : NSObject <MNMessageDetectedDataHandlerProviding> {

	NSString* _currentUserFBID;
	FBPaymentsPeerToPeerSendFlowController* _sendFlowController;
	MNPaymentsFlowSessionController* _flowSessionController;
	FBPaymentsPeerToPeerFeatureGatingController* _featureGatingController;
	unsigned long long _maxCharacterLength;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)handlingContextForDetectedData:(id)arg1 withThreadViewModel:(id)arg2 ;
-(BOOL)hasHandlersForDetectedDataHandlingContext:(id)arg1 ;
-(id)handlersForDetectedDataHandlingContext:(id)arg1 ;
-(void)_logTriggerEvent:(id)arg1 currencyCode:(id)arg2 amount:(id)arg3 ;
-(id)_truncateStringWithRecipient:(id)arg1 padding:(UIEdgeInsets)arg2 ;
-(id)initWithSession:(id)arg1 sendFlowController:(id)arg2 flowSessionController:(id)arg3 featureGatingController:(id)arg4 ;
@end

