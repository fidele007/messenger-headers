/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:51 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPaymentsMessengerPaymentCoordinatorListener.h>
#import <Messenger/MNPaymentsPeerToPeerPaymentRequestCoordinatorListener.h>
#import <Messenger/MNPaymentsThemeCoordinatorListener.h>
#import <Messenger/FBPaymentsPeerToPeerTransferOfflineDeltaHandler.h>

@class FBUserSession, FBPaymentsAttachmentViewModelListenerAnnouncer, MNPaymentsMessengerPaymentCoordinator, FBPaymentsPeerToPeerFeatureGatingController, MNPaymentsPeerToPeerPaymentRequestCoordinator, MNPaymentsThemeCoordinator, MNPaymentsDefaultCardManager, FBCache, FBTimer, NSMutableArray, NSMutableDictionary, MNPaymentsRecipientNuxEventCoordinator, NSString;

@interface FBPaymentsAttachmentViewModelCoordinator : NSObject <MNPaymentsMessengerPaymentCoordinatorListener, MNPaymentsPeerToPeerPaymentRequestCoordinatorListener, MNPaymentsThemeCoordinatorListener, FBPaymentsPeerToPeerTransferOfflineDeltaHandler> {

	FBUserSession* _userSession;
	FBPaymentsAttachmentViewModelListenerAnnouncer* _announcer;
	MNPaymentsMessengerPaymentCoordinator* _transferCoordinator;
	FBPaymentsPeerToPeerFeatureGatingController* _featureGatingController;
	MNPaymentsPeerToPeerPaymentRequestCoordinator* _requestCoordinator;
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
-(id)initWithUserSession:(id)arg1 transferCoordinator:(id)arg2 requestCoordinator:(id)arg3 featureGatingController:(id)arg4 themeCoordinator:(id)arg5 defaultCardManager:(id)arg6 ;
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
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end

