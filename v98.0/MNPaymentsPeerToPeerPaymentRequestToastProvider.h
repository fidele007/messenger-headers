/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPaymentsPeerToPeerPaymentRequestToastCoordinatorDelegate.h>
#import <Messenger/MNThreadToastProvider.h>

@class MNThreadToastProviderListenerAnnouncer, FBPaymentsPeerToPeerNavigationCoordinator, MNPaymentsPeerToPeerPaymentRequestToastCoordinator, FBMobileConfigContextManager, NSString;

@interface MNPaymentsPeerToPeerPaymentRequestToastProvider : NSObject <MNPaymentsPeerToPeerPaymentRequestToastCoordinatorDelegate, MNThreadToastProvider> {

	MNThreadToastProviderListenerAnnouncer* _announcer;
	FBPaymentsPeerToPeerNavigationCoordinator* _peerToPeerNavigationCoordinator;
	MNPaymentsPeerToPeerPaymentRequestToastCoordinator* _toastCoordinator;
	FBMobileConfigContextManager* _configManager;
	NSString* _currentUserId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)toastProviderIdentifier;
-(id)initWithUserSession:(id)arg1 userStore:(id)arg2 peerToPeerPaymentRequestCoordinator:(id)arg3 peerToPeerNavigationCoordinator:(id)arg4 configManager:(id)arg5 ;
-(void)didUpdateToast;
-(BOOL)isEligibleForThreadContext:(id)arg1 ;
-(id)toastForThreadContext:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

