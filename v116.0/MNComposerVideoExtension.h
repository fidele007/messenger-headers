/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWebRTCActiveCallTrackerDelegate.h>
#import <Messenger/FBWebRTCCallStarterDelegate.h>
#import <Messenger/MNComposerLongPressVideoControllerDelegate.h>
#import <Messenger/MNThreadPresenceListener.h>
#import <Messenger/MNComposerPrimaryExtension.h>
#import <Messenger/MNComposerLongPressTriggerExtensionDelegate.h>

@protocol MNComposerExtensionPresentationStrategy, MNComposerExtensionDelegate, MNComposerExtensionEditDelegate, MNComposerExtensionSendDelegate, MNActionNuxPresenter, MNComposerTooltipPresenting;
@class FBWebRTCCallStarter, FBWebRTCGroupCallStarter, MNThreadPresenceTracker, FBWebRTCActiveCallTracker, FBWebRTCCallButton, MNUserSettings, MNThreadParticipantNameFormatter, FBTimer, FBMobileConfigContextManager, MNComposerLongPressVideoController, MNComposerLongPressTriggerExtension, UIColor, NSString;

@interface MNComposerVideoExtension : NSObject <FBWebRTCActiveCallTrackerDelegate, FBWebRTCCallStarterDelegate, MNComposerLongPressVideoControllerDelegate, MNThreadPresenceListener, MNComposerPrimaryExtension, MNComposerLongPressTriggerExtensionDelegate> {

	FBWebRTCCallStarter* _callStarter;
	FBWebRTCGroupCallStarter* _groupCallStarter;
	MNThreadPresenceTracker* _threadPresenceTracker;
	FBWebRTCActiveCallTracker* _activeCallTracker;
	id<MNComposerExtensionPresentationStrategy> _presentationStrategy;
	FBWebRTCCallButton* _callButton;
	MNUserSettings* _userSettings;
	MNThreadParticipantNameFormatter* _nameFormatter;
	FBTimer* _activeCallTooltipDismissTimer;
	FBMobileConfigContextManager* _configManager;
	MNComposerLongPressVideoController* _longPressVideoController;
	id _sendingContextToken;
	BOOL _nuxShownForCurrentThread;
	MNComposerLongPressTriggerExtension* _longPressTriggerExtension;
	id<MNComposerExtensionDelegate> _delegate;
	id<MNComposerExtensionEditDelegate> _editDelegate;
	id<MNComposerExtensionSendDelegate> _sendDelegate;
	UIColor* _tintColor;
	id<MNActionNuxPresenter> _actionNuxPresenter;
	id<MNComposerTooltipPresenting> _tooltipPresenter;

}

@property (nonatomic,readonly) MNComposerLongPressTriggerExtension * longPressTriggerExtension; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNComposerExtensionDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<MNComposerExtensionEditDelegate> editDelegate;                        //@synthesize editDelegate=_editDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<MNComposerExtensionSendDelegate> sendDelegate;                        //@synthesize sendDelegate=_sendDelegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * placeholderText; 
@property (nonatomic,copy,readonly) NSString * searchPlaceholderText; 
@property (nonatomic,retain) UIColor * tintColor;                                                            //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) id<MNActionNuxPresenter> actionNuxPresenter;                                    //@synthesize actionNuxPresenter=_actionNuxPresenter - In the implementation block
@property (nonatomic,readonly) BOOL autoFocusSearchBar; 
@property (nonatomic,copy,readonly) id longPressGestureHandler; 
@property (nonatomic,readonly) UIView*<MNComposerActionButton> primaryActionButton; 
@property (nonatomic,readonly) long long primaryExtensionType; 
@property (nonatomic,retain) id<MNComposerTooltipPresenting> tooltipPresenter;                               //@synthesize tooltipPresenter=_tooltipPresenter - In the implementation block
-(MNComposerLongPressTriggerExtension *)longPressTriggerExtension;
-(id)_composerIcon;
-(void)setUpWithInitiator:(id)arg1 ;
-(id)extensionModule;
-(BOOL)shouldPromote;
-(unsigned long long)segmentedControlStrategy;
-(void)didSelect:(BOOL)arg1 withInitiator:(id)arg2 ;
-(BOOL)shouldPresent:(BOOL)arg1 ;
-(id)presentationStrategy;
-(long long)inputSource;
-(BOOL)isEligible;
-(id)activeSubExtension;
-(id)subExtensions;
-(void)didUpdateComposingContext:(BOOL)arg1 ;
-(NSString *)searchPlaceholderText;
-(void)callStarterDidUpdateCallState:(id)arg1 ;
-(void)callStarter:(id)arg1 canMakeOutboundCallDidChange:(BOOL)arg2 ;
-(void)threadPresenceDidChange;
-(id)initWithCallStarter:(id)arg1 groupCallStarter:(id)arg2 buttonImageProvider:(id)arg3 threadPresenceTracker:(id)arg4 activeCallTracker:(id)arg5 nameFormatter:(id)arg6 userSettings:(id)arg7 configManager:(id)arg8 longPressVideoControllerProvider:(id)arg9 ;
-(long long)primaryExtensionType;
-(void)_dismissTooltip:(BOOL)arg1 activeCallTooltip:(BOOL)arg2 longPressTooltip:(BOOL)arg3 nuxTooltip:(BOOL)arg4 animated:(BOOL)arg5 ;
-(UIView*<MNComposerActionButton>)primaryActionButton;
-(void)_startCall;
-(id)_threadComposingContext;
-(BOOL)_updateNux;
-(void)_stopActiveCallTooltipDismissTimer;
-(void)_showActiveCallTooltipWithAutoDismissal;
-(id)_threadPresenceDataForCanonicalThread;
-(BOOL)_isPeerUserCoPresentOnCanonicalThread;
-(void)_presentInstantVideoNuxIfNeeded;
-(id)_canonicalThreadUserId;
-(void)_presentTooltipWithIdentifier:(id)arg1 seenCountKey:(id)arg2 text:(id)arg3 context:(id)arg4 ;
-(void)_startActiveCallTooltipDismissTimer;
-(void)callTracker:(id)arg1 isInActiveCall:(BOOL)arg2 ;
-(void)composerLongPressVideoControllerWillStartRecording:(id)arg1 ;
-(void)composerLongPressVideoController:(id)arg1 didFinishWithAttachment:(id)arg2 ;
-(void)composerLongPressVideoControllerDidCancelRecording:(id)arg1 ;
-(void)composerLongPressVideoControllerDidReachRecordingLimit:(id)arg1 ;
-(void)composerLongPressVideoController:(id)arg1 showBannerText:(id)arg2 ;
-(void)composerLongPressVideoControllerHideBannerText:(id)arg1 ;
-(void)didPresentMoreDrawer;
-(id<MNActionNuxPresenter>)actionNuxPresenter;
-(void)setActionNuxPresenter:(id<MNActionNuxPresenter>)arg1 ;
-(BOOL)autoFocusSearchBar;
-(id)longPressGestureHandler;
-(id<MNComposerTooltipPresenting>)tooltipPresenter;
-(void)setTooltipPresenter:(id<MNComposerTooltipPresenting>)arg1 ;
-(void)applyOptions:(id)arg1 ;
-(id)extensionIdentifier;
-(void)setDelegate:(id<MNComposerExtensionDelegate>)arg1 ;
-(id<MNComposerExtensionDelegate>)delegate;
-(long long)category;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(id)tabBarItem;
-(long long)soundName;
-(id<MNComposerExtensionEditDelegate>)editDelegate;
-(void)setEditDelegate:(id<MNComposerExtensionEditDelegate>)arg1 ;
-(void)_updateButton;
-(NSString *)placeholderText;
-(void)tearDown;
-(id<MNComposerExtensionSendDelegate>)sendDelegate;
-(void)setSendDelegate:(id<MNComposerExtensionSendDelegate>)arg1 ;
-(BOOL)isThirdParty;
@end

