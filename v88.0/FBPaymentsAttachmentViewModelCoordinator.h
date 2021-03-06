/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPaymentsMessengerPaymentCoordinatorListener.h>
#import <Messenger/MNPaymentsPeerToPeerPaymentRequestCoordinatorListener.h>
#import <Messenger/MNPaymentsThemeCoordinatorListener.h>
#import <Messenger/FBPaymentsPeerToPeerTransferOfflineDeltaHandler.h>

@class FBUserSession, FBPaymentsAttachmentViewModelListenerAnnouncer, MNPaymentsMessengerPaymentCoordinator, FBPaymentsPeerToPeerTransferStatusModelContainer, FBPaymentsPeerToPeerFeatureGatingController, MNPaymentsPeerToPeerPaymentRequestCoordinator, MNPaymentsPeerToPeerRequestStatusModelContainer, MNPaymentsThemeCoordinator, MNPaymentsDefaultCardManager, FBCache, FBTimer, NSMutableArray, NSMutableDictionary, MNPaymentsRecipientNuxEventCoordinator, NSString;

@interface FBPaymentsAttachmentViewModelCoordinator : NSObject <MNPaymentsMessengerPaymentCoordinatorListener, MNPaymentsPeerToPeerPaymentRequestCoordinatorListener, MNPaymentsThemeCoordinatorListener, FBPaymentsPeerToPeerTransferOfflineDeltaHandler> {

	FBUserSession* _userSession;
	FBPaymentsAttachmentViewModelListenerAnnouncer* _announcer;
	MNPaymentsMessengerPaymentCoordinator* _transferCoordinator;
	FBPaymentsPeerToPeerTransferStatusModelContainer* _transferStatusModelContainer;
	FBPaymentsPeerToPeerFeatureGatingController* _featureGatingController;
	MNPaymentsPeerToPeerPaymentRequestCoordinator* _requestCoordinator;
	MNPaymentsPeerToPeerRequestStatusModelContainer* _requestStatusContainer;
	MNPaymentsThemeCoordinator* _themeCoordinator;
	MNPaymentsDefaultCardManager* _defaultCardManager;
	FBCache* _paymentAttachmentViewModelCache;
	FBCache* _offlineAttachmentViewModelCache;
	FBTimer* _timer;
	NSMutableArray* _pendingUpdateViewModels;
	NSMutableDictionary* _paymentIdsForOutgoingAttachments;
	NSMutableDictionary* _pendingViewModelsByThemeId;
	MNPaymentsRecipientNuxEventCoordinator* _recipientNuxEventCoordinator;

}

@property (assign,nonatomic,__weak) MNPaymentsRecipientNuxEventCoordinator * recipientNuxEventCoordinator;              //@synthesize recipientNuxEventCoordinator=_recipientNuxEventCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MNPaymentsRecipientNuxEventCoordinator *)recipientNuxEventCoordinator;
-(void)updateTrackingOutgoingAttachmentPaymentId:(id)arg1 forOfflineThreadingId:(id)arg2 ;
-(void)stopTrackingOutgoingAttachmentForOfflineThreadingId:(id)arg1 ;
-(void)stopTrackingOutgoingAttachmentForPaymentId:(id)arg1 ;
-(void)didUpdateTransfer:(id)arg1 ;
-(void)didUpdatePaymentRequest:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 transferCoordinator:(id)arg2 requestCoordinator:(id)arg3 featureGatingController:(id)arg4 transferStatusModelContainer:(id)arg5 requestStatusModelContainer:(id)arg6 themeCoordinator:(id)arg7 defaultCardManager:(id)arg8 ;
-(void)setRecipientNuxEventCoordinator:(MNPaymentsRecipientNuxEventCoordinator *)arg1 ;
-(void)didUpdateTheme:(id)arg1 ;
-(void)_announceUpdateIfPossible;
-(id)_buildPaymentAttachmentViewModelWithOldPaymentAttachmentViewModel:(id)arg1 ;
-(id)_offlineThreadingIdWithPaymentId:(id)arg1 ;
-(id)_buildRequestAttachmentViewModelWithOldPaymentAttachmentViewModel:(id)arg1 paymentRequest:(id)arg2 ;
-(void)_addAnnouncementWithPaymentAttachmentViewModel:(id)arg1 ;
-(id)_buildPaymentAttachmentViewModelWithOldPaymentAttachmentViewModel:(id)arg1 withPeerToPeerTransfer:(id)arg2 ;
-(BOOL)deltaReceivedForOutgoingAttachmentOfOfflineThreadingId:(id)arg1 ;
-(id)_perceivedLatencyAttachmentViewModelWithOldPaymentAttachmentViewModel:(id)arg1 ;
-(void)_appendPendingViewModelWithId:(id)arg1 withThemeId:(id)arg2 ;
-(id)paymentAttachViewModelWithOldPaymentAttachmentViewModel:(id)arg1 ;
-(void)dealloc;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

