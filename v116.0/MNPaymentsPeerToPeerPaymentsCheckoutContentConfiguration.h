/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:52 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsCheckoutContentConfiguration.h>

@protocol MNPaymentsUserPayableDataModel, MNAvatarImageDecorating;
@class FBUserSession, FBPaymentsPaymentMethodsCoordinator, FBPaymentsPINController, FBPaymentsTouchIDController, MNCDNProfileImageDownloader, MNPaymentsPeerToPeerPaymentRecipientDataSource, NSString;

@interface MNPaymentsPeerToPeerPaymentsCheckoutContentConfiguration : NSObject <FBPaymentsCheckoutContentConfiguration> {

	FBUserSession* _session;
	FBPaymentsPaymentMethodsCoordinator* _paymentMethodsCoordinator;
	FBPaymentsPINController* _pinController;
	FBPaymentsTouchIDController* _touchIDController;
	MNCDNProfileImageDownloader* _profileImageDownloader;
	MNPaymentsPeerToPeerPaymentRecipientDataSource* _paymentRecipientDataSource;
	id<MNPaymentsUserPayableDataModel> _payableDataModel;
	id<MNAvatarImageDecorating> _avatarImageDecorator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)headerViewModelCreator;
-(id)purchaseInfoExtensionDescriptors;
-(id)payActionContentProvider;
-(id)priceDetails;
-(id)headerViewFactory;
-(void)_configurePayWithExtension:(id)arg1 ;
-(id)initWithSession:(id)arg1 paymentMethodsCoordinator:(id)arg2 pinController:(id)arg3 touchIDController:(id)arg4 profileImageDownloader:(id)arg5 paymentRecipientDataSource:(id)arg6 payableDataModel:(id)arg7 avatarImageDecorator:(id)arg8 ;
-(id)_analyticsModuleName;
-(id)termsAndPoliciesModel;
@end

