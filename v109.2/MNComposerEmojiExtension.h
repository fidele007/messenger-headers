/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:35 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAbstractComposerTrayExtension.h>
#import <FBSharedFramework/FBReachabilityListener.h>
#import <Messenger/MNEmojiTrayViewControllerDelegate.h>
#import <Messenger/MNLikePressing.h>
#import <FBSharedFramework/FBClassProvidable.h>
#import <Messenger/MNComposerPrimaryExtension.h>

@protocol FBProvider, MNModalPresentation, MNComposerConfiguring, MNComposerExtensionPresentationStrategy, MNActionNuxPresenter, MNComposerTooltipPresenting, MNComposerEmojiExtensionDelegate;
@class MNEmojiTrayViewController, MNLikePressingListenerAnnouncer, MNEmojiNuxViewController, MNEmojiOmnistore, MNComposerExtensionPresentationStrategyFactory, NSString, UIColor;

@interface MNComposerEmojiExtension : MNAbstractComposerTrayExtension <FBReachabilityListener, MNEmojiTrayViewControllerDelegate, MNLikePressing, FBClassProvidable, MNComposerPrimaryExtension> {

	id<FBProvider> _emojiTrayViewControllerProvider;
	MNEmojiTrayViewController* _emojiTrayViewController;
	MNLikePressingListenerAnnouncer* _hawtEmojiPressingAnnouncer;
	BOOL _needsPresentingNux;
	MNEmojiNuxViewController* _emojiNuxViewController;
	MNEmojiOmnistore* _emojiOmnistore;
	id<MNModalPresentation> _modalPresenter;
	id<MNComposerConfiguring> _composerConfiguration;
	MNComposerExtensionPresentationStrategyFactory* _presentationStrategyFactory;
	id<MNComposerExtensionPresentationStrategy> _presentationStrategy;
	id<MNActionNuxPresenter> _actionNuxPresenter;
	id<MNComposerTooltipPresenting> _tooltipPresenter;
	id<MNComposerEmojiExtensionDelegate> _emojiExtensionDelegate;

}

@property (assign,nonatomic,__weak) id<MNComposerEmojiExtensionDelegate> emojiExtensionDelegate;              //@synthesize emojiExtensionDelegate=_emojiExtensionDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNComposerExtensionDelegate> delegate; 
@property (assign,nonatomic,__weak) id<MNComposerExtensionEditDelegate> editDelegate; 
@property (assign,nonatomic,__weak) id<MNComposerExtensionSendDelegate> sendDelegate; 
@property (nonatomic,copy,readonly) NSString * placeholderText; 
@property (nonatomic,copy,readonly) NSString * searchPlaceholderText; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,retain) id<MNActionNuxPresenter> actionNuxPresenter;                                     //@synthesize actionNuxPresenter=_actionNuxPresenter - In the implementation block
@property (nonatomic,readonly) BOOL autoFocusSearchBar; 
@property (nonatomic,copy,readonly) id longPressGestureHandler; 
@property (nonatomic,readonly) UIView*<MNComposerActionButton> primaryActionButton; 
@property (nonatomic,readonly) long long primaryExtensionType; 
@property (nonatomic,retain) id<MNComposerTooltipPresenting> tooltipPresenter;                                //@synthesize tooltipPresenter=_tooltipPresenter - In the implementation block
-(id)_composerIcon;
-(id)extensionModule;
-(BOOL)isInSegmentedControl;
-(void)didSelect:(BOOL)arg1 ;
-(id)presentationStrategy;
-(long long)inputSource;
-(void)didUpdateComposingContext:(BOOL)arg1 ;
-(id)viewControllerForPresentation;
-(void)_onReachabilityStateChangedToState:(unsigned long long)arg1 ;
-(long long)primaryExtensionType;
-(UIView*<MNComposerActionButton>)primaryActionButton;
-(void)didPresentMoreDrawer;
-(id<MNActionNuxPresenter>)actionNuxPresenter;
-(void)setActionNuxPresenter:(id<MNActionNuxPresenter>)arg1 ;
-(BOOL)autoFocusSearchBar;
-(id)longPressGestureHandler;
-(id<MNComposerTooltipPresenting>)tooltipPresenter;
-(void)setTooltipPresenter:(id<MNComposerTooltipPresenting>)arg1 ;
-(id<MNComposerEmojiExtensionDelegate>)emojiExtensionDelegate;
-(void)_initEmojiTrayViewControllerIfNeeded;
-(void)_presentEmojiNuxViewControllerIfPossible;
-(void)_presentEmojiNuxViewController;
-(void)_dismissEmojiNuxViewController:(BOOL)arg1 ;
-(void)_didPresentEmojiNuxViewController;
-(void)_didDismissEmojiNuxViewController:(BOOL)arg1 ;
-(void)emojiTrayViewControllerDidLoadView:(id)arg1 ;
-(void)emojiTrayViewController:(id)arg1 didSelectEmoji:(id)arg2 ;
-(void)emojiTrayViewControllerDidSelectBackspace:(id)arg1 ;
-(void)emojiTrayViewControllerDidSelectText:(id)arg1 ;
-(BOOL)emojiTrayViewControllerToggleTextEnabled:(id)arg1 ;
-(void)emojiTrayViewController:(id)arg1 didBeginLongPressingEmoji:(id)arg2 ;
-(void)emojiTrayViewControllerDidCancelLongPressingEmoji:(id)arg1 ;
-(void)emojiTrayViewController:(id)arg1 didEndLongPressingEmoji:(id)arg2 deepPress:(BOOL)arg3 ;
-(id)likeSourceName;
-(void)addLikePressingListener:(id)arg1 ;
-(void)setEmojiExtensionDelegate:(id<MNComposerEmojiExtensionDelegate>)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)reachabilityStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2 ;
-(id)extensionIdentifier;
-(long long)category;
-(id)tabBarItem;
@end

