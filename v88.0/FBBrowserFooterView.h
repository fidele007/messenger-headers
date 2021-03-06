/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Messenger/FBBrowserRelatedStoriesViewDelegate.h>

@protocol FBBrowserFooterViewDelegate, FBBrowserChromeDelegate;
@class FBBrowserLayoutConfig, UIButton, UIToolbar, FBBrowserPulseView, FBBrowserRelatedStoriesView, FBUserSession, NSArray, NSString;

@interface FBBrowserFooterView : UIView <UIScrollViewDelegate, FBBrowserRelatedStoriesViewDelegate> {

	FBBrowserLayoutConfig* _layoutConfig;
	UIButton* _backButton;
	UIButton* _forwardButton;
	UIToolbar* _containerView;
	UIButton* _moreButton;
	UIButton* _saveButton;
	UIButton* _switcherButton;
	FBBrowserPulseView* _pulseView;
	FBBrowserRelatedStoriesView* _relatedStoriesView;
	FBUserSession* _session;
	BOOL _isRelatedStoriesHidden;
	id<FBBrowserFooterViewDelegate> _footerViewDelegate;
	BOOL _isSaved;
	unsigned long long _pulseShareCount;
	NSArray* _suggestedStories;
	double _chromeState;
	id<FBBrowserChromeDelegate> _delegate;

}

@property (assign,nonatomic) BOOL hasBackNavigationAction; 
@property (assign,nonatomic) BOOL hasForwardNavigationAction; 
@property (assign,nonatomic) unsigned long long pulseShareCount;                       //@synthesize pulseShareCount=_pulseShareCount - In the implementation block
@property (nonatomic,copy) NSArray * suggestedStories;                                 //@synthesize suggestedStories=_suggestedStories - In the implementation block
@property (assign,nonatomic) BOOL isSaved;                                             //@synthesize isSaved=_isSaved - In the implementation block
@property (assign,nonatomic) double chromeState;                                       //@synthesize chromeState=_chromeState - In the implementation block
@property (assign,nonatomic,__weak) id<FBBrowserChromeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIButton * saveButtonForNux; 
@property (nonatomic,readonly) UIButton * moreButtonForNux; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_backButtonTapped;
-(void)_moreActionsButtonTapped;
-(void)_didTapPulseView;
-(void)_saveButtonTapped;
-(void)_switcherButtonTapped;
-(void)setHasBackNavigationAction:(BOOL)arg1 ;
-(void)setHasForwardNavigationAction:(BOOL)arg1 ;
-(BOOL)hasBackNavigationAction;
-(BOOL)hasForwardNavigationAction;
-(void)setPulseShareCount:(unsigned long long)arg1 ;
-(void)setIsSaved:(BOOL)arg1 ;
-(UIButton *)saveButtonForNux;
-(UIButton *)moreButtonForNux;
-(unsigned long long)pulseShareCount;
-(double)chromeState;
-(void)setChromeState:(double)arg1 ;
-(id)initWithLayoutConfig:(id)arg1 footerViewDelegate:(id)arg2 session:(id)arg3 ;
-(CGSize)sizeThatFits:(CGSize)arg1 chromeState:(double)arg2 ;
-(void)setSuggestedStories:(NSArray *)arg1 ;
-(void)relatedStoryTapped:(id)arg1 ;
-(void)relatedStoriesMinimizeToggled;
-(void)_forwardButtonTapped;
-(NSArray *)suggestedStories;
-(void)setDelegate:(id<FBBrowserChromeDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<FBBrowserChromeDelegate>)delegate;
-(BOOL)isSaved;
@end

