/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNMontageProgressIndicatorViewDelegate.h>
#import <Messenger/MNMontageSendBeeperViewDelegate.h>
#import <Messenger/MNMontageSendStateViewDelegate.h>
#import <Messenger/MNMontageLoadingErrorViewDelegate.h>

@protocol MNMontageOverlayViewDelegate;
@class FBGradientView, UILabel, UIImageView, UIButton, MNMontageProgressIndicatorView, MNMontageSendBeeperView, MNMontageSendStateView, MNMontageLoadingErrorView, UIActivityIndicatorView, FBTimer, NSArray, UIView, NSString, UIImage;

@interface MNMontageOverlayView : UIView <MNMontageProgressIndicatorViewDelegate, MNMontageSendBeeperViewDelegate, MNMontageSendStateViewDelegate, MNMontageLoadingErrorViewDelegate> {

	FBGradientView* _upperScrimView;
	FBGradientView* _lowerScrimView;
	UILabel* _montageAuthorLabel;
	UILabel* _subtitleLabel;
	UIImageView* _profileImageView;
	UIButton* _composerCallToActionButton;
	UIButton* _seenHeadButton;
	MNMontageProgressIndicatorView* _progressIndicatorView;
	MNMontageSendBeeperView* _sendBeeperView;
	MNMontageSendStateView* _sendStateView;
	UIButton* _overflowMenuButton;
	MNMontageLoadingErrorView* _loadingErrorView;
	UIActivityIndicatorView* _contentLoadingIndicator;
	BOOL _sendBeeperDisplayed;
	FBTimer* _timer;
	BOOL _showsV2ReplyUI;
	NSArray* _v2ReplyUIExtensionTypes;
	NSArray* _composerReplyButtons;
	UIButton* _openComposerButton;
	BOOL _showsScrim;
	BOOL _showOverflowMenu;
	BOOL _overflowMenuAlignedTop;
	BOOL _showComposer;
	BOOL _showsContentLoadingIndicator;
	BOOL _showsContentLoadingError;
	id<MNMontageOverlayViewDelegate> _delegate;
	NSArray* _seenHeadViews;
	double _seenHeadSize;
	UIView* _composeView;
	CGRect _keyboardFrame;

}

@property (assign,nonatomic,__weak) id<MNMontageOverlayViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsScrim;                                               //@synthesize showsScrim=_showsScrim - In the implementation block
@property (nonatomic,copy) NSString * montageAuthorName; 
@property (nonatomic,copy) NSString * subtitleText; 
@property (assign,nonatomic) unsigned long long currentMessageIndex; 
@property (assign,nonatomic) unsigned long long totalMessageCount; 
@property (nonatomic,retain) UIImage * profileImage; 
@property (nonatomic,copy) NSArray * seenHeadViews;                                         //@synthesize seenHeadViews=_seenHeadViews - In the implementation block
@property (assign,nonatomic) double seenHeadSize;                                           //@synthesize seenHeadSize=_seenHeadSize - In the implementation block
@property (assign,nonatomic) BOOL showOverflowMenu;                                         //@synthesize showOverflowMenu=_showOverflowMenu - In the implementation block
@property (assign,nonatomic) BOOL overflowMenuAlignedTop;                                   //@synthesize overflowMenuAlignedTop=_overflowMenuAlignedTop - In the implementation block
@property (assign,nonatomic) BOOL showComposer;                                             //@synthesize showComposer=_showComposer - In the implementation block
@property (nonatomic,copy) NSString * composerCallToActionPrompt; 
@property (nonatomic,retain) UIView * composeView;                                          //@synthesize composeView=_composeView - In the implementation block
@property (assign,nonatomic) CGRect keyboardFrame;                                          //@synthesize keyboardFrame=_keyboardFrame - In the implementation block
@property (assign,nonatomic) BOOL showsContentLoadingIndicator;                             //@synthesize showsContentLoadingIndicator=_showsContentLoadingIndicator - In the implementation block
@property (assign,nonatomic) BOOL showsContentLoadingError;                                 //@synthesize showsContentLoadingError=_showsContentLoadingError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSeenHeadSize:(double)arg1 ;
-(double)_keyboardTopY;
-(void)montageLoadingErrorViewDidTap:(id)arg1 ;
-(void)_didTapOpenComposerButton;
-(id)_createAndAddV2ComposerButtonForExtensionType:(long long)arg1 ;
-(void)_didTapComposerCallToAction:(id)arg1 ;
-(void)_didTapSeenHeadButton:(id)arg1 ;
-(void)_didTapOverflowButton:(id)arg1 ;
-(void)_layoutSeenHeadViews;
-(void)_layoutComposerReplyButtons;
-(unsigned long long)currentMessageIndex;
-(void)setCurrentMessageIndex:(unsigned long long)arg1 ;
-(unsigned long long)totalMessageCount;
-(void)setTotalMessageCount:(unsigned long long)arg1 ;
-(void)_updateBottomViewsVisibility;
-(void)startProgressIndicatorWithDuration:(double)arg1 ;
-(void)pauseProgressIndicator;
-(void)resumeProgressIndicator;
-(void)resetProgressIndicator;
-(void)_scheduleSendBeeperDismissalAfterDuration:(double)arg1 ;
-(void)hideSendBeeperAnimated:(BOOL)arg1 ;
-(void)montageProgressIndicatorViewDidFinish:(id)arg1 ;
-(void)montageSendBeeperViewDidTapClose:(id)arg1 ;
-(void)montageSendStateViewDidTap:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 v2ReplyUIExtensionTypes:(id)arg2 ;
-(void)setShowsScrim:(BOOL)arg1 ;
-(NSString *)montageAuthorName;
-(void)setMontageAuthorName:(NSString *)arg1 ;
-(void)setSeenHeadViews:(NSArray *)arg1 ;
-(NSString *)composerCallToActionPrompt;
-(void)setComposerCallToActionPrompt:(NSString *)arg1 ;
-(void)setShowOverflowMenu:(BOOL)arg1 ;
-(void)setOverflowMenuAlignedTop:(BOOL)arg1 ;
-(void)setShowComposer:(BOOL)arg1 ;
-(void)setShowsContentLoadingIndicator:(BOOL)arg1 ;
-(void)setShowsContentLoadingError:(BOOL)arg1 ;
-(void)updateSendState:(unsigned long long)arg1 ;
-(void)updateSendProgress:(double)arg1 ;
-(void)displaySendBeeperWithText:(id)arg1 duration:(double)arg2 ;
-(BOOL)showsScrim;
-(NSArray *)seenHeadViews;
-(double)seenHeadSize;
-(BOOL)showOverflowMenu;
-(BOOL)overflowMenuAlignedTop;
-(BOOL)showsContentLoadingIndicator;
-(BOOL)showsContentLoadingError;
-(void)setDelegate:(id<MNMontageOverlayViewDelegate>)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id<MNMontageOverlayViewDelegate>)delegate;
-(void)setSubtitleText:(NSString *)arg1 ;
-(void)setComposeView:(UIView *)arg1 ;
-(UIView *)composeView;
-(NSString *)subtitleText;
-(void)_layoutComposeView;
-(CGRect)keyboardFrame;
-(BOOL)showComposer;
-(void)setProfileImage:(UIImage *)arg1 ;
-(UIImage *)profileImage;
-(void)setKeyboardFrame:(CGRect)arg1 ;
-(void)updateProgressIndicator:(double)arg1 ;
@end

