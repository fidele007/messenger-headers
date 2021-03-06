/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:52 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNComposerActionBarDelegate.h>
#import <Messenger/MNComposerActionViewDelegate.h>
#import <FBSharedFramework/FBKeyboardPresenting.h>
#import <Messenger/MNComposerPrimaryExtensionViewing.h>
#import <Messenger/MNComposerSearchBarContaining.h>
#import <Messenger/MNComposerTextViewContaining.h>

@protocol MNComposerConfiguring, MNComposerActionButton, MNComposerBarDelegate;
@class MNComposerActionBar, MNComposerBadgedAddButton, UIView, MNComposerSearchBar, MNComposerTextInputView, MNComposerActionView, UIPanGestureRecognizer, NSSet, NSString;

@interface MNComposerBar : UIView <MNComposerActionBarDelegate, MNComposerActionViewDelegate, FBKeyboardPresenting, MNComposerPrimaryExtensionViewing, MNComposerSearchBarContaining, MNComposerTextViewContaining> {

	id<MNComposerConfiguring> _composerConfiguration;
	MNComposerActionBar* _actionBar;
	MNComposerBadgedAddButton* _addButton;
	UIView*<MNComposerActionButton> _collapseButton;
	UIView* _controlsView;
	UIView*<MNComposerActionButton> _emojiButton;
	UIView* _expandTapView;
	UIView* _textInputContainerView;
	MNComposerSearchBar* _composerSearchBar;
	MNComposerTextInputView* _textInputView;
	BOOL _forceAddButtonHidden;
	BOOL _actionBarHidden;
	BOOL _addButtonHidden;
	BOOL _collapseButtonHidden;
	BOOL _composerActionViewHidden;
	BOOL _composerSearchBarHidden;
	BOOL _controlsViewHidden;
	BOOL _emojiButtonHidden;
	BOOL _expandTapViewHidden;
	BOOL _textInputViewHidden;
	MNComposerActionView* _composerActionView;
	id<MNComposerBarDelegate> _delegate;
	long long _leftButtonMode;
	long long _mode;
	UIPanGestureRecognizer* _moreDrawerPanGestureRecognizer;

}

@property (assign,getter=isAddButtonHidden,nonatomic) BOOL addButtonHidden; 
@property (nonatomic,readonly) MNComposerActionView * composerActionView;                            //@synthesize composerActionView=_composerActionView - In the implementation block
@property (nonatomic,retain) UIView * controlsView;                                                  //@synthesize controlsView=_controlsView - In the implementation block
@property (assign,nonatomic,__weak) id<MNComposerBarDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long leftButtonMode;                                               //@synthesize leftButtonMode=_leftButtonMode - In the implementation block
@property (assign,nonatomic) long long mode;                                                         //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) UIPanGestureRecognizer * moreDrawerPanGestureRecognizer;              //@synthesize moreDrawerPanGestureRecognizer=_moreDrawerPanGestureRecognizer - In the implementation block
@property (nonatomic,copy) NSSet * primaryExtensionItems; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView*<FBTextInputView> textInputView; 
@property (assign,nonatomic) BOOL showsKeyboard; 
@property (nonatomic,readonly) id<MNComposerSearchBarConfiguring> composerSearchBar; 
@property (nonatomic,readonly) id<MNComposerTextViewConfiguring> textView; 
-(void)composerActionViewDidPressSend:(id)arg1 ;
-(void)composerActionViewDidPressMenu:(id)arg1 ;
-(void)composerActionViewNeedResize:(id)arg1 ;
-(void)_handleTextSwipeGesture:(id)arg1 ;
-(void)_handleExpandButton:(id)arg1 ;
-(void)_handleEmojiButton:(id)arg1 ;
-(void)_handleAddButton:(id)arg1 ;
-(void)_voiceOverStatusChanged:(id)arg1 ;
-(void)_updateSubviewsForModeAnimated:(BOOL)arg1 force:(BOOL)arg2 ;
-(void)setLeftButtonMode:(long long)arg1 animated:(BOOL)arg2 ;
-(NSSet *)primaryExtensionItems;
-(void)setPrimaryExtensionItems:(NSSet *)arg1 ;
-(void)_updateSubviewsForModeAnimated:(BOOL)arg1 duration:(double)arg2 force:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(MNComposerBarLayout)_buildLayoutForSize:(CGSize)arg1 ;
-(BOOL)_shouldHideControlsViewWithTextInputWidth:(double)arg1 ;
-(void)_updateTextInsets;
-(id)_growingTextView;
-(id)composerActionButtonForPrimaryExtensionType:(long long)arg1 ;
-(void)composerPrimaryExtensionDeselected;
-(void)composerPrimaryExtensionTypeSelected:(long long)arg1 ;
-(void)setComposerActionButton:(id)arg1 forPrimaryExtensionType:(long long)arg2 ;
-(void)addTextViewFocusHandler:(/*^block*/id)arg1 ;
-(void)composerActionBar:(id)arg1 didTapButtonWithType:(long long)arg2 ;
-(id<MNComposerSearchBarConfiguring>)composerSearchBar;
-(id)initWithFrame:(CGRect)arg1 composerConfiguration:(id)arg2 ;
-(BOOL)isAddButtonHidden;
-(void)setAddButtonHidden:(BOOL)arg1 ;
-(void)setLeftButtonMode:(long long)arg1 ;
-(void)setAddButtonBadgeCount:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setControlsView:(UIView *)arg1 ;
-(MNComposerActionView *)composerActionView;
-(UIView *)controlsView;
-(long long)leftButtonMode;
-(UIPanGestureRecognizer *)moreDrawerPanGestureRecognizer;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNComposerBarDelegate>)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNComposerBarDelegate>)delegate;
-(UIView*<FBTextInputView>)textInputView;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(BOOL)showsKeyboard;
-(id<MNComposerTextViewConfiguring>)textView;
-(void)setShowsKeyboard:(BOOL)arg1 ;
-(void)setMode:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_handleCollapseButton:(id)arg1 ;
@end

