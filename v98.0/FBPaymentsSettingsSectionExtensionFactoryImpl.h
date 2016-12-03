/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsSettingsSectionExtensionFactory.h>

@protocol FBIntentHandler, FBPaymentsConnectionStatusProviding, FBPaymentsActorFetching;
@class FBUserSession, FBPaymentsPaymentMethodsCoordinator, FBPaymentsPINController, FBPaymentsTouchIDController, FBPaymentsPeerToPeerContactsService, MNPaymentsExtensibleFlowMap, FBPaymentsPeerToPeerCardFlowController, FBPaymentsPeerToPeerNavigationCoordinator, FBPaymentsPeerToPeerFeatureGatingController, FBPaymentsPeerToPeerTransferStatusModelContainer, MNPaymentsMessengerPaymentCoordinator, MNPaymentsPeerToPeerPaymentRequestCoordinator, MNPaymentsPeerToPeerRequestStatusModelContainer, MNCDNProfileImageDownloader, MNPaymentsDefaultCardManager, MNPaymentsPINProtectionController, MNUserStore;

@interface FBPaymentsSettingsSectionExtensionFactoryImpl : NSObject <FBPaymentsSettingsSectionExtensionFactory> {

	FBUserSession* _session;
	id<FBIntentHandler> _intentHandler;
	id<FBPaymentsConnectionStatusProviding> _connectionStatusProvider;
	FBPaymentsPaymentMethodsCoordinator* _paymentMethodCoordinator;
	FBPaymentsPINController* _paymentPinController;
	FBPaymentsTouchIDController* _touchIDController;
	FBPaymentsPeerToPeerContactsService* _contactService;
	id<FBPaymentsActorFetching> _actorFetcher;
	MNPaymentsExtensibleFlowMap* _extensibleFlowMap;
	FBPaymentsPeerToPeerCardFlowController* _cardFlowController;
	FBPaymentsPeerToPeerNavigationCoordinator* _navigationCoordinator;
	FBPaymentsPeerToPeerFeatureGatingController* _featureGatingController;
	FBPaymentsPeerToPeerTransferStatusModelContainer* _transferStatusModelContainer;
	MNPaymentsMessengerPaymentCoordinator* _messsengerPaymentCoordinator;
	MNPaymentsPeerToPeerPaymentRequestCoordinator* _paymentRequestCoordinator;
	MNPaymentsPeerToPeerRequestStatusModelContainer* _requestStatusModelContainer;
	MNCDNProfileImageDownloader* _profileImageDownloader;
	MNPaymentsDefaultCardManager* _defaultCardManager;
	MNPaymentsPINProtectionController* _pinProtectionController;
	MNUserStore* _userStore;

}
-(id)initWithSession:(id)arg1 intentHandler:(id)arg2 connectionStatusProvider:(id)arg3 paymentMethodCoordinator:(id)arg4 paymentPinController:(id)arg5 pinProtectionController:(id)arg6 touchIDController:(id)arg7 profileImageDownloader:(id)arg8 contactService:(id)arg9 extensibleFlowMap:(id)arg10 transferStatusModelContainer:(id)arg11 messengerPaymentCoordinator:(id)arg12 requestStatusModelContainer:(id)arg13 paymentRequestCoordinator:(id)arg14 cardFlowController:(id)arg15 navigationCoordinator:(id)arg16 featureGatingController:(id)arg17 defaultCardManager:(id)arg18 userStore:(id)arg19 ;
-(id)settingsSectionExtensions;
@end
