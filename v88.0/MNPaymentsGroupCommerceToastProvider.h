/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPaymentsGroupCommerceToastCoordinatorDelegate.h>
#import <Messenger/MNThreadToastProvider.h>

@class MNThreadToastProviderListenerAnnouncer, FBPaymentsPeerToPeerFeatureGatingController, MNPaymentsGroupCommerceToastCoordinator, NSString;

@interface MNPaymentsGroupCommerceToastProvider : NSObject <MNPaymentsGroupCommerceToastCoordinatorDelegate, MNThreadToastProvider> {

	MNThreadToastProviderListenerAnnouncer* _announcer;
	FBPaymentsPeerToPeerFeatureGatingController* _featureGatingController;
	MNPaymentsGroupCommerceToastCoordinator* _toastCoordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)toastProviderIdentifier;
-(id)initWithUserSession:(id)arg1 featureGatingController:(id)arg2 platformContextCoordinator:(id)arg3 networkDispatch:(id)arg4 userStore:(id)arg5 intentHandler:(id)arg6 ;
-(void)didUpdateToast;
-(BOOL)isEligibleForThreadContext:(id)arg1 ;
-(id)toastForThreadContext:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
