/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:01 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <FBSharedFramework/FBUIConfigurable.h>

@protocol FBInterstitialViewDelegate;
@class UILabel, UIButton, NSString;

@interface FBInterstitialView : UIView <FBUIConfigurable> {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIButton* _primaryButton;
	UIButton* _secondaryButton;
	UIButton* _dismissButton;
	struct {
		unsigned delegateDidSelectPrimaryButton : 1;
		unsigned delegateDidSelectSecondaryButton : 1;
		unsigned delegateDidSelectDismissButton : 1;
	}  _delegateFlags;
	id<FBInterstitialViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBInterstitialViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithTitle:(id)arg1 subtitle:(id)arg2 contentView:(id)arg3 primaryButtonTitle:(id)arg4 secondaryButtonTitle:(id)arg5 hasDismissButton:(BOOL)arg6 ;
+(id)newWithConfig:(id)arg1 ;
+(id)defaultFBUIConfig;
-(void)didTapDismissButton:(id)arg1 ;
-(void)didTapPrimaryButton:(id)arg1 ;
-(void)didTapSecondaryButton:(id)arg1 ;
-(void)oldConfig:(id)arg1 configDidChange:(id)arg2 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBInterstitialViewDelegate>)arg1 ;
-(id<FBInterstitialViewDelegate>)delegate;
-(id)_init;
-(id)config;
-(CGRect)contentRectForBounds:(CGRect)arg1 ;
-(void)applyConfig:(id)arg1 ;
@end

