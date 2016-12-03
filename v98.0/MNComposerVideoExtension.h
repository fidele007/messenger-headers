/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBKeyboardObserverDelegate.h>
#import <Messenger/FBWebRTCActiveCallTrackerDelegate.h>
#import <Messenger/MNLongPressVideoExtensionControllerDelegate.h>
#import <Messenger/MNThreadPresenceListener.h>
#import <Messenger/MNNuxViewDelegate.h>
#import <Messenger/MNComposerPrimaryExtension.h>

@protocol MNComposerExtensionPresentationStrategy, MNComposerExtensionDelegate, MNComposerExtensionEditDelegate, MNComposerExtensionSendDelegate, MNActionNuxPresenter;
@class FBWebRTCCallStarter, FBWebRTCGroupCallStarter, MNThreadPresenceTracker, FBWebRTCActiveCallTracker, FBWebRTCCallButton, FBKeyboardObserver, MNSoundController, MNUserSettings, MNThreadParticipantNameFormatter, MNLongPressVideoExtensionController, MNComposerTextBannerView, MNNuxView, UIColor, NSString;

@interface MNComposerVideoExtension : NSObject <FBKeyboardObserverDelegate, FBWebRTCActiveCallTrackerDelegate, MNLongPressVideoExtensionControllerDelegate, MNThreadPresenceListener, MNNuxViewDelegate, MNComposerPrimaryExtension> {

	FBWebRTCCallStarter* _callStarter;
	FBWebRTCGroupCallStarter* _groupCallStarter;
	MNThreadPresenceTracker* _threadPresenceTracker;
	FBWebRTCActiveCallTracker* _activeCallTracker;
	id<MNComposerExtensionPresentationStrategy> _presentationStrategy;
	FBWebRTCCallButton* _callButton;
	FBKeyboardObserver* _keyboardObserver;
	MNSoundController* _soundController;
	MNUserSettings* _userSettings;
	MNThreadParticipantNameFormatter* _nameFormatter;
	MNLongPressVideoExtensionController* _longPressVideoExtensionController;
	id _sendingContextToken;
	MNComposerTextBannerView* _textBanenrView;
	MNNuxView* _nuxView;
	BOOL _nuxShownForCurrentThread;
	id<MNComposerExtensionDelegate> _delegate;
	id<MNComposerExtensionEditDelegate> _editDelegate;
	id<MNComposerExtensionSendDelegate> _sendDelegate;
	UIColor* _tintColor;
	id<MNActionNuxPresenter> _actionNuxPresenter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNComposerExtensionDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<MNComposerExtensionEditDelegate> editDelegate;              //@synthesize editDelegate=_editDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<MNComposerExtensionSendDelegate> sendDelegate;              //@synthesize sendDelegate=_sendDelegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * placeholderText; 
@property (nonatomic,copy,readonly) NSString * searchPlaceholderText; 
@property (nonatomic,retain) UIColor * tintColor;                                                  //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) id<MNActionNuxPresenter> actionNuxPresenter;                          //@synthesize actionNuxPresenter=_actionNuxPresenter - In the implementation block
@property (nonatomic,readonly) BOOL autoFocusSearchBar; 
@property (nonatomic,copy,readonly) id longPressGestureHandler; 
@property (nonatomic,readonly) UIView*<MNComposerActionButton> primaryActionButton; 
@property (nonatomic,readonly) long long primaryExtensionType; 
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserverKeyboardDidHide:(id)arg1 ;
-(id)_composerIcon;
-(void)setUpWithInitiator:(id)arg1 ;
-(void)applyOptions:(id)arg1 ;
-(id)extensionModule;
-(BOOL)shouldPromote;
-(BOOL)isInSegmentedControl;
-(void)didSelect:(BOOL)arg1 ;
-(BOOL)shouldPresent:(BOOL)arg1 ;
-(id)presentationStrategy;
-(long long)inputSource;
-(BOOL)isEligible;
-(id)activeSubExtension;
-(id)subExtensions;
-(id<MNComposerExtensionSendDelegate>)sendDelegate;
-(void)setSendDelegate:(id<MNComposerExtensionSendDelegate>)arg1 ;
-(NSString *)searchPlaceholderText;
-(void)threadPresenceDidChange;
-(id)initWithCallStarter:(id)arg1 groupCallStarter:(id)arg2 buttonImageProvider:(id)arg3 threadPresenceTracker:(id)arg4 activeCallTracker:(id)arg5 soundController:(id)arg6 nameFormatter:(id)arg7 userSettings:(id)arg8 longPressVideoControllerProvider:(id)arg9 ;
-(void)_showBannerText:(id)arg1 ;
-(void)_hideBannerText;
-(id)_bannerViewPresenter;
-(void)longPressVideoExtensionControllerWillStartRecording:(id)arg1 ;
-(void)longPressVideoExtensionController:(id)arg1 didFinishWithAttachment:(id)arg2 ;
-(void)longPressVideoExtensionControllerDidCancelRecording:(id)arg1 ;
-(void)longPressVideoExtensionControllerDidReachRecordingLimit:(id)arg1 ;
-(void)longPressVideoExtensionController:(id)arg1 showBannerText:(id)arg2 ;
-(void)longPressVideoExtensionControllerHideBannerText:(id)arg1 ;
-(id)longPressVideoExtensionControllerRequestTintColor:(id)arg1 ;
-(void)didUpdateComposingContext;
-(id<MNActionNuxPresenter>)actionNuxPresenter;
-(void)setActionNuxPresenter:(id<MNActionNuxPresenter>)arg1 ;
-(BOOL)autoFocusSearchBar;
-(id)longPressGestureHandler;
-(UIView*<MNComposerActionButton>)primaryActionButton;
-(long long)primaryExtensionType;
-(void)_startCall;
-(id)_threadComposingContext;
-(void)_updateNux;
-(void)_dismissNux;
-(id)_threadPresenceDataForCanonicalThread;
-(BOOL)_isPeerUserCoPresentOnCanonicalThread;
-(void)_presentInstantVideoNuxIfNeeded;
-(id)_canonicalThreadUserId;
-(BOOL)_showNuxWithText:(id)arg1 forTooltipKey:(id)arg2 ;
-(void)callTracker:(id)arg1 isInActiveCall:(BOOL)arg2 ;
-(void)nuxViewDidTapToDismiss:(id)arg1 ;
-(id)extensionIdentifier;
-(void)setDelegate:(id<MNComposerExtensionDelegate>)arg1 ;
-(void)dealloc;
-(id<MNComposerExtensionDelegate>)delegate;
-(long long)category;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(id)tabBarItem;
-(long long)soundName;
-(void)setEditDelegate:(id<MNComposerExtensionEditDelegate>)arg1 ;
-(id<MNComposerExtensionEditDelegate>)editDelegate;
-(void)_updateButton;
-(NSString *)placeholderText;
-(void)tearDown;
-(BOOL)isThirdParty;
@end
