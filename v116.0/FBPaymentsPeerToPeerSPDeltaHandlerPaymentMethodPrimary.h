/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:51 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsPeerToPeerSPDeltaHandler.h>

@class MNPaymentsDefaultCardManager, NSString;

@interface FBPaymentsPeerToPeerSPDeltaHandlerPaymentMethodPrimary : NSObject <FBPaymentsPeerToPeerSPDeltaHandler> {

	MNPaymentsDefaultCardManager* _defaultCardManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long type; 
-(long long)_processDelta:(id)arg1 ;
-(long long)handleDelta:(id)arg1 withDeltaHandlerMap:(id)arg2 ;
-(id)initWithDefaultCardManager:(id)arg1 ;
-(long long)type;
@end

