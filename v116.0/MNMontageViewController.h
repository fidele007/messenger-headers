/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:50 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/FBContainerViewController.h>
#import <FBSharedFramework/FBClassInjectable.h>
#import <Messenger/MNMontageOverlayViewDelegate.h>
#import <Messenger/MNComposeViewControllerDelegate.h>
#import <Messenger/MNComposeViewControllerListener.h>
#import <FBSharedFramework/FBKeyboardObserverDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <FBSharedFramework/FBDirectionalPanGestureRecognizerDelegate.h>
#import <Messenger/MNMediaPreviewActionSheetPresenterDelegate.h>
#import <Messenger/MNMontageMessageControllerDelegate.h>
#import <Messenger/MNForwardFlowControllerDelegate.h>
#import <Messenger/MNForwardFlowPresenter.h>
#import <Messenger/MNMontageSeenStateDetailsViewControllerDelegate.h>
#import <Messenger/MNMontageViewerCannedResponsesControllerDelegate.h>
#import <Messenger/MNMontageViewerReactionsBarControllerDelegate.h>
#import <Messenger/MNLikeComposingListener.h>
#import <FBSharedFramework/MNPresenceUpdateListening.h>
#import <Messenger/MNDayCameraControllerDelegate.h>
#import <Messenger/MNMultiMontagePlayable.h>

@protocol FBStickerResourceManager, MNMontageMessageController, FBCancelable, MNMontageViewControllerDelegate;
@class MNMontagePlaylistItem, MNMontageViewControllerInjector, FBDateFormatter, FBKeyboardObserver, MNMediaPreviewActionSheetPresenter, MNMuteSwitchController, MNComposeViewController, MNMontageOverlayView, UIView, MNTouchBeganGestureRecognizer, MNMontageViewModelIdentifier, NSString, NSNumber, MNMontageViewModel, MNMontageViewMessageCursor, MNMontageNux, FBDirectionalPanGestureRecognizer, UISwipeGestureRecognizer, UILongPressGestureRecognizer, UIAlertController, MNMontageSeenStateDetailsViewController, MNForwardFlowController, MNMontageViewAnalyticsLogger, FBTimer, MNMontageViewerPlaybackState, UIViewController, MNMontageViewerCannedResponsesController, MNMontageViewerReactionsBarController, MNMontageViewerCannedResponseCellViewModel, MNMontageReactionPresentationController, FBLazyCreator;

@interface MNMontageViewController : FBContainerViewController <FBClassInjectable, MNMontageOverlayViewDelegate, MNComposeViewControllerDelegate, MNComposeViewControllerListener, FBKeyboardObserverDelegate, UIGestureRecognizerDelegate, FBDirectionalPanGestureRecognizerDelegate, MNMediaPreviewActionSheetPresenterDelegate, MNMontageMessageControllerDelegate, MNForwardFlowControllerDelegate, MNForwardFlowPresenter, MNMontageSeenStateDetailsViewControllerDelegate, MNMontageViewerCannedResponsesControllerDelegate, MNMontageViewerReactionsBarControllerDelegate, MNLikeComposingListener, MNPresenceUpdateListening, MNDayCameraControllerDelegate, MNMultiMontagePlayable> {

	MNMontageViewControllerInjector* _injector;
	id<FBStickerResourceManager> _stickerResourceManager;
	FBDateFormatter* _dateFormatter;
	FBKeyboardObserver* _keyboardObserver;
	MNMediaPreviewActionSheetPresenter* _actionSheetPresenter;
	MNMuteSwitchController* _muteSwitchController;
	id<MNMontageMessageController> _montageMessageController;
	id<MNMontageMessageController> _nextMontageMessageController;
	MNComposeViewController* _composeViewController;
	MNMontageOverlayView* _montageOverlayView;
	UIView* _montageComposerShadowView;
	UIView* _montageMessageViewContainer;
	UIView* _loadingView;
	MNTouchBeganGestureRecognizer* _dismissalRecognizer;
	unsigned long long _appearanceState;
	MNMontageViewModelIdentifier* _montageIdentifier;
	NSString* _messageId;
	BOOL _showOnlySpecificMessage;
	NSString* _entryPoint;
	NSNumber* _montageViewModelSubscriptionId;
	NSNumber* _montageViewModelSubscriptionIdForThumbnail;
	MNMontageViewModel* _montageViewModel;
	BOOL _montageViewModelUpdatesPaused;
	MNMontageViewModel* _bufferedMontageViewModel;
	MNMontageViewModel* _montageViewModelFromCachedThumbnail;
	MNMontageViewMessageCursor* _currentMontageMessageCursor;
	unsigned long long _montageViewModelRequestedTime;
	MNMontageNux* _montageNux;
	NSString* _queueType;
	MNMontageViewMessageCursor* _firstMontageMessageCursor;
	NSString* _presenceListenerActiveForFBID;
	BOOL _shouldAnimatePresenceUpdate;
	FBDirectionalPanGestureRecognizer* _montageDismissalRecognizer;
	UISwipeGestureRecognizer* _montageSeenStatePresentationRecognizer;
	UILongPressGestureRecognizer* _pressGestureRecognizer;
	FBDirectionalPanGestureRecognizer* _panLeftGestureRecognizer;
	FBDirectionalPanGestureRecognizer* _panRightGestureRecognizer;
	BOOL _shouldDismiss;
	BOOL _animatingToDismiss;
	UIAlertController* _overflowAlertController;
	MNMontageSeenStateDetailsViewController* _seenStateDetailsViewController;
	MNForwardFlowController* _activeForwardFlowController;
	BOOL _initialized;
	MNMontageViewAnalyticsLogger* _analyticsLogger;
	BOOL _isPlaying;
	BOOL _modalPresentationLayerPresented;
	double _pressStartTime;
	CGPoint _pressStartLocation;
	FBTimer* _hideOverlayTimer;
	id<FBCancelable> _currentSendProgressSubscription;
	id<FBCancelable> _cancelableShowLoadingIndicator;
	MNMontageViewerPlaybackState* _playbackState;
	unsigned long long _pauseStartTime;
	unsigned long long _pauseDuration;
	UIViewController* _montageAudienceSettingsNavigationController;
	MNMontageViewerCannedResponsesController* _cannedResponsesController;
	MNMontageViewerReactionsBarController* _reactionsBarController;
	NSString* _viewSessionID;
	MNMontageViewerCannedResponseCellViewModel* _selectedCannedResponse;
	MNMontageReactionPresentationController* _reactionPresentationController;
	FBLazyCreator* _montageComposerViewControllerCreator;
	FBLazyCreator* _dayCameraControllerCreator;
	MNMontagePlaylistItem* playlistItem;
	id<MNMontageViewControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNMontageViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) MNMontageViewModelIdentifier * montageIdentifier;               //@synthesize montageIdentifier=_montageIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * currentMessageId; 
@property (nonatomic,copy) MNMontagePlaylistItem * playlistItem; 
+(Class)injectorClass;
-(void)didTransitionToExtension:(id)arg1 ;
-(void)_presentActionSheetWithContent:(id)arg1 delay:(double)arg2 ;
-(void)didBeginComposingLikeStickerWithType:(unsigned long long)arg1 maxDuration:(double)arg2 emoji:(id)arg3 ;
-(void)didCancelComposingLikeStickerTimedOut:(BOOL)arg1 ;
-(void)didEndComposingLikeStickerWithType:(unsigned long long)arg1 emoji:(id)arg2 sender:(id)arg3 ;
-(void)composeViewControllerNeedResize:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)composeViewControllerCanPresentExtension:(id)arg1 ;
-(id)composeViewControllerDidBeginSending:(id)arg1 ;
-(id)composeViewController:(id)arg1 didCommitSendingWithText:(id)arg2 attachment:(id)arg3 attribution:(id)arg4 clientTags:(id)arg5 extensibleMessageData:(id)arg6 sendingContextToken:(id)arg7 loggingBlock:(/*^block*/id)arg8 ;
-(void)composeViewControllerDidCancelSending:(id)arg1 ;
-(BOOL)composeViewControllerShouldResetDuringSend:(id)arg1 ;
-(void)composeViewControllerDidAttemptSendWhenDisabled:(id)arg1 ;
-(BOOL)composeViewControllerCanSelectContent:(id)arg1 ;
-(void)composeViewControllerWillSelectContent:(id)arg1 ;
-(void)composeViewController:(id)arg1 didSelectContent:(id)arg2 ;
-(void)composeViewController:(id)arg1 didPasteContent:(id)arg2 ;
-(void)composeViewControllerNuxVisibilityDidChange:(id)arg1 ;
-(void)composeViewController:(id)arg1 didChangeComposerControlExtensionModeEnabledWithCompletionBlock:(/*^block*/id)arg2 ;
-(void)composeViewController:(id)arg1 didPressControlExtensionIconWithControlExtension:(id)arg2 ;
-(void)composeViewControllerDismissPresentedViewController:(id)arg1 ;
-(void)composeViewController:(id)arg1 presentViewController:(id)arg2 ;
-(void)composeViewController:(id)arg1 didCommitSendingLightweightActionType:(id)arg2 ;
-(BOOL)composeViewControllerMenuEnabled:(id)arg1 ;
-(void)composeViewControllerDidPressMenu:(id)arg1 ;
-(id)threadViewModelForComposeViewController:(id)arg1 ;
-(void)composeViewControllerWillBeginLongPressMediaInteraction:(id)arg1 ;
-(void)composeViewControllerDidEndLongPressMediaInteraction:(id)arg1 ;
-(void)composeViewControllerDidChangeText:(id)arg1 ;
-(void)composeViewController:(id)arg1 didChangeSearchMode:(long long)arg2 toSearchMode:(long long)arg3 ;
-(void)actionSheetPresenter:(id)arg1 didTapSendWithContent:(id)arg2 recipientFBIDs:(id)arg3 conversationInitiator:(id)arg4 ;
-(void)actionSheetPresenter:(id)arg1 didTapSendWithCustomPreviewView:(id)arg2 ;
-(void)actionSheetPresenter:(id)arg1 didTapEditWithContent:(id)arg2 recipientFBIDs:(id)arg3 conversationInitiator:(id)arg4 ;
-(void)actionSheetPresenter:(id)arg1 didTapCancelWithRecipientFBIDs:(id)arg2 conversationInitiator:(id)arg3 ;
-(void)actionSheetPresenter:(id)arg1 didPresentWithRecipientFBIDs:(id)arg2 conversationInitiator:(id)arg3 ;
-(void)actionSheetPresenter:(id)arg1 didDismissContentViewController:(id)arg2 ;
-(MNMontageViewModelIdentifier *)montageIdentifier;
-(void)_updateProgressIndicator;
-(void)montageMessageController:(id)arg1 didUpdateProgress:(double)arg2 ;
-(void)montageMessageControllerDidFinish:(id)arg1 ;
-(void)montageMessageControllerDidFail:(id)arg1 withError:(id)arg2 ;
-(void)montageMessageControllerDidStart:(id)arg1 ;
-(void)montageMessageControllerDidResume:(id)arg1 ;
-(void)montageMessageControllerDidStall:(id)arg1 ;
-(BOOL)montageSeenStateDetailsViewControllerCanRemoveAudience:(id)arg1 ;
-(void)montageSeenStateDetailsViewControllerDidTapUser:(id)arg1 ;
-(void)montageSeenStateDetailsViewControllerDidTapAudienceSettingsButton:(id)arg1 ;
-(void)montageSeenStateDetailsViewControllerWillDismiss:(id)arg1 ;
-(void)montageSeenStateDetailsViewController:(id)arg1 didTapToRemoveAudienceWithFbId:(id)arg2 ;
-(void)_updateSendState;
-(id)_createDayCameraController;
-(void)_finishCleanup;
-(void)_didDismissComposeViewController;
-(void)didPress:(id)arg1 ;
-(void)didPanLeft:(id)arg1 ;
-(void)didPanRight:(id)arg1 ;
-(void)didPanDown:(id)arg1 ;
-(void)_setUpDirectionalPanGestureRecognizer:(id)arg1 ;
-(void)didSwipeUp:(id)arg1 ;
-(void)_updateGestureRecognizersEnabledState;
-(void)_updatePlaybackState:(id)arg1 ;
-(void)_updateIfVisibleAndMontageViewModelLoaded;
-(id)_currentMessage;
-(void)_tearDownViewModelSubscriptions;
-(long long)_nuxMessageCount;
-(void)_setUpViewModelSubscriptionsForThreadKey:(id)arg1 ;
-(void)_configureWithMontageViewModel:(id)arg1 ;
-(void)_showContentLoadingError;
-(void)_scheduleContentLoadingIndicator;
-(void)_hideContentLoadingIndicator;
-(void)_configureWithMontageViewModelFromCachedThumbnail:(id)arg1 ;
-(void)_hideContentLoadingError;
-(void)_dismissMontage:(id)arg1 ;
-(void)_updateMontageOverlayView;
-(id)_initialMessageCursor;
-(void)_displayMontageMessageWithCursor:(id)arg1 exitAction:(id)arg2 ;
-(void)_updateMessageCursors;
-(void)_updateShowsReplyUI;
-(void)_updateComposeViewController;
-(void)_updateMessageTimestamp;
-(void)_updateOverlayScrim;
-(void)_updateSeenHeads;
-(void)_updatePresenceListener;
-(void)_tearDownComposeViewControllerIfNeeded;
-(void)_resetMontageOverlayView;
-(void)_stopCurrentMessageController;
-(unsigned long long)_requestedTimeForCurrentMessage;
-(unsigned long long)_pauseDurationForCurrentMessage;
-(long long)_currentPositionForAnalytics;
-(long long)_queueLengthForAnalytics;
-(id)_currentNuxMessage;
-(void)_tearDownMontageViewModel;
-(BOOL)_shouldEnableDoodle;
-(void)_pageToNextMontageMessage:(id)arg1 ;
-(void)_presentSeenStateModalAnimated:(BOOL)arg1 flexibleHeight:(BOOL)arg2 ;
-(void)_presentOverflowMenuForMessage:(id)arg1 fromView:(id)arg2 ;
-(id)_createSendingContextToken;
-(id)_sendMessageToSendTarget:(id)arg1 text:(id)arg2 attachment:(id)arg3 attribution:(id)arg4 clientTags:(id)arg5 extensibleMessageData:(id)arg6 ;
-(id)_userIdToUserMapWithOnlyMontageAuthor;
-(id)_currentMontageAuthorShortName;
-(void)_markRead;
-(void)_dismissSeenState;
-(void)_didDismissMontageAudienceSettings:(id)arg1 ;
-(void)_selectedCannedResponse:(id)arg1 ;
-(void)_selectedDoodle;
-(id)_composingContextForCurrentViewModel;
-(long long)_positionForInitialMessageForAnalytics;
-(id)_allMessages;
-(id)_allNuxMessages;
-(long long)_currentNuxIndex;
-(void)_resetPlaybackState;
-(void)_updateNextMontageMessageController;
-(void)_downloadCurrentMessage;
-(void)_showContentLoadingIndicator;
-(void)_pausePaginationTimer;
-(void)_resumePaginationTimer;
-(id)_subsequentMontageMessageCursors;
-(void)_cleanupAndDismissWithCompletion:(/*^block*/id)arg1 canPlayMoreMontages:(BOOL)arg2 exitAction:(id)arg3 ;
-(id)_currentMontageAuthor;
-(void)_handleProfileImageLoad:(id)arg1 forUserId:(id)arg2 ;
-(void)_resetSendState;
-(void)_updateSendProgress:(double)arg1 ;
-(void)_updateSeenHeadImage:(id)arg1 forView:(id)arg2 ;
-(void)_updateProfileImage:(id)arg1 forUserId:(id)arg2 ;
-(void)_setupComposeViewControllerIfNeeded;
-(void)_updateComposeViewControllerForViewModel;
-(void)_presentSeenStateModalForMessage:(id)arg1 animated:(BOOL)arg2 flexibleHeight:(BOOL)arg3 ;
-(BOOL)_messageCanBeDeleted:(id)arg1 ;
-(void)_deleteMessage:(id)arg1 ;
-(void)_resetOverflowMenuWithoutResumingTimer;
-(BOOL)_messageCanBeSavedToCameraRoll:(id)arg1 ;
-(void)_saveMessageToCameraRoll:(id)arg1 ;
-(void)_resetOverflowMenu;
-(BOOL)_messageCanBeForwarded:(id)arg1 ;
-(void)_forwardMessage:(id)arg1 ;
-(void)_reportMessage:(id)arg1 ;
-(void)_presentLoadingView;
-(void)_dismissLoadingView;
-(void)_reportReportableMessage:(id)arg1 ;
-(void)_deleteMessageWithMessageId:(id)arg1 threadKey:(id)arg2 ;
-(void)_deleteMessageWithOfflineThreadingId:(id)arg1 ;
-(void)_deleteMessageWithOfflineThreadingId:(id)arg1 pendingThreadId:(id)arg2 ;
-(void)_pauseMontageViewModelUpdates;
-(void)_resumeMontageViewModelUpdates;
-(id)_generateSendBeeperText:(BOOL)arg1 ;
-(id)_currentMontageMessage;
-(void)_animateViewToFrame:(CGRect)arg1 speed:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)_setOverlayHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_attemptPageToPreviousMontageMessage;
-(void)_handlePanGesture:(id)arg1 direction:(BOOL)arg2 ;
-(void)montageOverlayViewProgressIndicatorDidFinish:(id)arg1 ;
-(void)montageOverlayViewDidTapSeenHeads:(id)arg1 ;
-(void)montageOverlayView:(id)arg1 didTapOverflowMenuButton:(id)arg2 ;
-(void)montageOverlayViewDidTapSendState:(id)arg1 ;
-(void)montageOverlayViewDidTapLoadingError:(id)arg1 ;
-(void)montageOverlayViewDidTapProfile:(id)arg1 ;
-(void)montageViewerCannedResponsesControllerDidSelectCannedResponse:(id)arg1 ;
-(id)dayCameraControllerWillSend:(id)arg1 ;
-(void)dayCameraController:(id)arg1 didGenerateAttachments:(id)arg2 clientTags:(id)arg3 extensibleMessageData:(id)arg4 sendingContextToken:(id)arg5 shouldShowBroadcastFlowAfterSend:(BOOL)arg6 ;
-(void)dayCameraControllerDidDismiss:(id)arg1 shouldPopToInbox:(BOOL)arg2 ;
-(id)dayCameraControllerContactsToPreselect:(id)arg1 ;
-(id)dayCameraControllerThreadName:(id)arg1 ;
-(void)dayCameraController:(id)arg1 didSelectAsset:(id)arg2 ;
-(void)dayCameraController:(id)arg1 didUnselectAsset:(id)arg2 ;
-(void)dayCameraControllerDidCancelMultiSelection:(id)arg1 ;
-(MNMontagePlaylistItem *)playlistItem;
-(void)setPlaylistItem:(MNMontagePlaylistItem *)arg1 ;
-(void)setMuteSwitchController:(id)arg1 ;
-(NSString *)currentMessageId;
-(void)setMontageIdentifier:(id)arg1 messageId:(id)arg2 showOnlySpecificMessage:(BOOL)arg3 entryPoint:(id)arg4 viewSessionID:(id)arg5 ;
-(void)composeViewController:(id)arg1 didPresentPickerForExtension:(id)arg2 ;
-(BOOL)composeViewController:(id)arg1 canPresentPickerForExtension:(id)arg2 ;
-(void)setModalPresentationLayerPresented:(BOOL)arg1 ;
-(void)montageViewerReactionsBarControllerDidPressCamera:(id)arg1 ;
-(void)montageViewerReactionsBarControllerDidPressTextReply:(id)arg1 ;
-(void)montageViewerReactionsBarController:(id)arg1 didPressReaction:(id)arg2 ;
-(id)initWithInjector:(id)arg1 ;
-(void)presentForwardFlowViewController:(id)arg1 ;
-(void)dismissForwardFlowViewController;
-(void)forwardFlowControllerDidCancel:(id)arg1 ;
-(BOOL)forwardFlowController:(id)arg1 shouldHandleForwardWithRecipientInfos:(id)arg2 ;
-(void)forwardFlowController:(id)arg1 willForwardWithRecipientInfos:(id)arg2 forwardContent:(id)arg3 ;
-(void)forwardFlowController:(id)arg1 didForwardMessageWithRecipientInfos:(id)arg2 didCompleteFlow:(BOOL)arg3 ;
-(void)_updateKeyboardFrame:(CGRect)arg1 duration:(double)arg2 curve:(long long)arg3 ;
-(void)keyboardObserverKeyboardDidHide:(id)arg1 ;
-(void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)didReceivePresenceUpdate:(id)arg1 ;
-(void)setDelegate:(id<MNMontageViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNMontageViewControllerDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)setIsPlaying:(BOOL)arg1 ;
-(void)_setKeyboardFrame:(CGRect)arg1 ;
@end

