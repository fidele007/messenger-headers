/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIButton.h>

@protocol FBPaymentsLoadingIndicatorControlling;
@class FBPaymentsLoadingStatusButtonStyleModel, UIImageView, NSString;

@interface FBPaymentsLoadingStatusButton : UIButton {

	FBPaymentsLoadingStatusButtonStyleModel* _style;
	BOOL _shouldShowCheckmarkAnimation;
	id<FBPaymentsLoadingIndicatorControlling> _loadingIndicatorController;
	UIImageView* _checkmarkImageView;
	long long _loadingStatusButtonState;
	NSString* _loadingStatusButtonTitle;
	NSString* _actionIdentifier;

}

@property (assign,nonatomic) long long loadingStatusButtonState;              //@synthesize loadingStatusButtonState=_loadingStatusButtonState - In the implementation block
@property (nonatomic,copy) NSString * loadingStatusButtonTitle;               //@synthesize loadingStatusButtonTitle=_loadingStatusButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * actionIdentifier;                       //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
+(CGSize)sizeWithButtonTitle:(id)arg1 buttonStyle:(long long)arg2 constrainedSize:(CGSize)arg3 ;
-(void)setLoadingStatusButtonTitle:(NSString *)arg1 ;
-(void)setLoadingStatusButtonState:(long long)arg1 ;
-(NSString *)loadingStatusButtonTitle;
-(id)initWithButtonTitleForNormalState:(id)arg1 buttonStyle:(long long)arg2 loadingIndicatorFactory:(id)arg3 ;
-(long long)loadingStatusButtonState;
-(void)_configButton;
-(void)_configLoadingStatusButton;
-(void)_updateLoadingStatusButtonState:(long long)arg1 ;
-(void)_updateStatusAndShowCompletionAnimationIfNeeded:(long long)arg1 ;
-(void)_animateCheckmark;
-(void)_animateLoadingIndicator;
-(void)_handleLoadingIndicatorAnimationCompletion;
-(void)_configLoadingIndicator;
-(void)_configCheckMarkImageView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)actionIdentifier;
-(id)_checkmarkImageView;
-(void)setActionIdentifier:(NSString *)arg1 ;
@end

