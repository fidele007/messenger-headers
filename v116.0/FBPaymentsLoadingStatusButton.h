/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
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
	BOOL _enableTint;
	long long _loadingStatusButtonState;
	NSString* _loadingStatusButtonTitle;
	NSString* _actionIdentifier;

}

@property (assign,nonatomic) long long loadingStatusButtonState;              //@synthesize loadingStatusButtonState=_loadingStatusButtonState - In the implementation block
@property (nonatomic,copy) NSString * loadingStatusButtonTitle;               //@synthesize loadingStatusButtonTitle=_loadingStatusButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * actionIdentifier;                       //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL enableTint;                                 //@synthesize enableTint=_enableTint - In the implementation block
+(CGSize)sizeWithButtonTitle:(id)arg1 buttonStyle:(long long)arg2 constrainedSize:(CGSize)arg3 ;
-(void)setLoadingStatusButtonTitle:(NSString *)arg1 ;
-(void)setLoadingStatusButtonState:(long long)arg1 ;
-(NSString *)loadingStatusButtonTitle;
-(id)initWithButtonTitleForNormalState:(id)arg1 buttonStyle:(long long)arg2 loadingIndicatorFactory:(id)arg3 ;
-(long long)loadingStatusButtonState;
-(void)setEnableTint:(BOOL)arg1 ;
-(void)_configButton;
-(void)_configLoadingStatusButton;
-(void)_updateLoadingStatusButtonState:(long long)arg1 ;
-(void)_updateStatusAndShowCompletionAnimationIfNeeded:(long long)arg1 ;
-(void)_animateCheckmark;
-(void)_animateLoadingIndicator;
-(void)_handleLoadingIndicatorAnimationCompletion;
-(BOOL)_shouldUseTintColor;
-(void)_configLoadingIndicator;
-(void)_configCheckMarkImageView;
-(BOOL)enableTint;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)actionIdentifier;
-(void)setActionIdentifier:(NSString *)arg1 ;
@end

