/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsPeerToPeerSendFlowControllerDelegate.h>
#import <Messenger/MNPaymentsFriendPickerViewControllerDelegate.h>
#import <Messenger/MNPaymentsFullScreenIntroductionViewControllerDelegate.h>

@protocol FBPaymentsNavigationDelegate, MNPaymentsNewPeerToPeerFriendPickingFlowControllerDelegate;
@class FBUserSession, MNUserStore, FBMThreadParticipantFilter, MNPeopleCellFactory, FBPaymentsPeerToPeerSendFlowController, NSString;

@interface MNPaymentsNewPeerToPeerFriendPickingFlowController : NSObject <FBPaymentsPeerToPeerSendFlowControllerDelegate, MNPaymentsFriendPickerViewControllerDelegate, MNPaymentsFullScreenIntroductionViewControllerDelegate> {

	FBUserSession* _session;
	MNUserStore* _userStore;
	FBMThreadParticipantFilter* _threadParticipantFilter;
	MNPeopleCellFactory* _peopleCellFactory;
	/*^block*/id _suggestionsViewControllerCreationBlock;
	FBPaymentsPeerToPeerSendFlowController* _sendFlowController;
	NSString* _flowId;
	NSString* _paymentRecipientId;
	NSString* _entryPoint;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;
	id<MNPaymentsNewPeerToPeerFriendPickingFlowControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;                                  //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<MNPaymentsNewPeerToPeerFriendPickingFlowControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_logEvent:(id)arg1 ;
-(void)peerToPeerSendFlowController:(id)arg1 didCancelCheckoutFlowWithFlowId:(id)arg2 error:(id)arg3 ;
-(void)peerToPeerSendFlowController:(id)arg1 didCompleteSendFlowWithFlowId:(id)arg2 checkoutViewController:(id)arg3 ;
-(void)peerToPeerSendFlowController:(id)arg1 willCheckoutWithFlowId:(id)arg2 ;
-(void)peerToPeerSendFlowController:(id)arg1 didCheckoutWithFlowId:(id)arg2 ;
-(void)peerToPeerSendFlowController:(id)arg1 didFailCheckoutWithFlowId:(id)arg2 ;
-(void)didCancelFriendPickerViewController:(id)arg1 ;
-(void)friendPickerViewController:(id)arg1 didPickFriend:(id)arg2 ;
-(void)didTapCancelForFullScreenIntroductionViewController:(id)arg1 ;
-(void)didTapActionButtonForFullScreenIntroductionViewController:(id)arg1 ;
-(id)initWithSession:(id)arg1 userStore:(id)arg2 threadParticipantFilter:(id)arg3 peopleCellFactory:(id)arg4 suggestionsViewControllerCreationBlock:(/*^block*/id)arg5 sendFlowController:(id)arg6 ;
-(void)startNewP2PFriendPickingFlow:(id)arg1 ;
-(BOOL)_shouldShowIntroduction;
-(void)setDelegate:(id<MNPaymentsNewPeerToPeerFriendPickingFlowControllerDelegate>)arg1 ;
-(id<MNPaymentsNewPeerToPeerFriendPickingFlowControllerDelegate>)delegate;
-(void)_cleanup;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
@end

