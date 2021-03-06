/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:52 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNComposerContentContainerView.h>
#import <Messenger/MNComposerDismissable.h>
#import <Messenger/MNComposerKeyboardAccessoryViewContaining.h>
#import <Messenger/MNComposerViewScrolling.h>

@protocol MNComposerDismissableDelegate;
@class UIView, NSArray, MNComposerDragHeaderView, UIScrollView, NSString;

@interface MNComposerDrawerView : UIView <MNComposerContentContainerView, MNComposerDismissable, MNComposerKeyboardAccessoryViewContaining, MNComposerViewScrolling> {

	NSArray* _backgroundViews;
	UIView* _contentContainerView;
	UIView* _contentOverflowBackgroundView;
	UIView* _dismissView;
	MNComposerDragHeaderView* _headerView;
	UIScrollView* _scrollView;
	UIEdgeInsets _scrollViewAdditionalContentInsets;
	UIView* _contentView;
	id<MNComposerDismissableDelegate> _dismissableDelegate;
	UIView* _keyboardAccessoryView;
	long long _drawerMode;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic) CGPoint contentOffset; 
@property (nonatomic,readonly) long long drawerMode;                                                    //@synthesize drawerMode=_drawerMode - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                                //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                      //@synthesize contentView=_contentView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNComposerDismissableDelegate> dismissableDelegate;              //@synthesize dismissableDelegate=_dismissableDelegate - In the implementation block
@property (nonatomic,retain) UIView * keyboardAccessoryView;                                            //@synthesize keyboardAccessoryView=_keyboardAccessoryView - In the implementation block
-(void)mn_invalidateLayoutForView:(id)arg1 animated:(BOOL)arg2 ;
-(id<MNComposerDismissableDelegate>)dismissableDelegate;
-(void)setDismissableDelegate:(id<MNComposerDismissableDelegate>)arg1 ;
-(UIView *)keyboardAccessoryView;
-(void)_updateContentContainerView;
-(SCD_Struct_MN122)_layoutForSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 drawerMode:(long long)arg2 ;
-(void)setKeyboardAccessoryView:(UIView *)arg1 ;
-(double)transitionDistanceForSize:(CGSize)arg1 ;
-(long long)drawerMode;
-(void)setContentView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(UIView *)contentView;
-(id)panGestureRecognizer;
-(CGPoint)contentOffset;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)_handleBackgroundTap:(id)arg1 ;
@end

