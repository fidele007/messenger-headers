/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBUIConfigurable.h>

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
+(id)newWithConfig:(id)arg1 ;
+(id)defaultFBUIConfig;
+(id)newWithTitle:(id)arg1 subtitle:(id)arg2 contentView:(id)arg3 primaryButtonTitle:(id)arg4 secondaryButtonTitle:(id)arg5 hasDismissButton:(BOOL)arg6 ;
-(void)didTapDismissButton:(id)arg1 ;
-(void)oldConfig:(id)arg1 configDidChange:(id)arg2 ;
-(void)didTapPrimaryButton:(id)arg1 ;
-(void)didTapSecondaryButton:(id)arg1 ;
-(void)setDelegate:(id<FBInterstitialViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBInterstitialViewDelegate>)delegate;
-(id)_init;
-(id)config;
-(CGRect)contentRectForBounds:(CGRect)arg1 ;
-(void)applyConfig:(id)arg1 ;
@end
