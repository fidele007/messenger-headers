/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsEventListener.h>

@protocol MNNavigationPluginService;
@class FBPaymentsPeerToPeerNavigationCoordinator, FBUserSession, MNPaymentsGroupCommerceEntryHandler, FBDelayer, FBPaymentsPagesCommerceReceiptEntryHandler, NSString;

@interface MNPaymentsIntentHandler : NSObject <FBPaymentsEventListener> {

	FBPaymentsPeerToPeerNavigationCoordinator* _navigationCoordinator;
	FBUserSession* _session;
	/*^block*/id _pluginManagerGetBlock;
	/*^block*/id _sessionGetBlock;
	id<MNNavigationPluginService> _navigationPluginService;
	MNPaymentsGroupCommerceEntryHandler* _groupCommerceEntryHandler;
	FBDelayer* _paymentsPluginStartupDelayer;
	FBPaymentsPagesCommerceReceiptEntryHandler* _pagesCommerceReceiptEntryHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)handleIntent:(id)arg1 ;
-(void)didTriggerEventWithName:(id)arg1 announcerIdentifier:(id)arg2 collectedData:(id)arg3 ;
-(id)initWithPluginManagerGetBlock:(/*^block*/id)arg1 sessionGetBlock:(/*^block*/id)arg2 ;
-(void)_scheduleDelayerIfNeeded;
-(void)_handleTransferReceiptIntent:(id)arg1 ;
-(void)_handleSettingsIntent:(id)arg1 ;
-(void)_handleGroupCommerceIntent:(id)arg1 ;
-(void)_handleNewPeerToPeerPaymentsIntent:(id)arg1 ;
-(void)_handleCheckoutWithSerializedConfigurationIntent:(id)arg1 ;
-(void)_handleReceiptIntent:(id)arg1 ;
-(void)_initNavigationCoordinatorIfNeeded;
-(void)_initSessionIfNeeded;
-(void)_initGroupCommerceEntryHandlerIfNeededWithSession:(id)arg1 navigationService:(id)arg2 ;
-(void)_navigateToGroupCommerceThreadWithGroupCommerceRecipientId:(id)arg1 commerceOptionId:(id)arg2 interestHandler:(id)arg3 ;
@end

