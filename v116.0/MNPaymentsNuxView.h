/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBPaymentsViewModelConfigurable.h>

@protocol MNPaymentsNuxViewDelegate;
@class MNProfileImageView, UIImageView, FBRichTextView, FBPaymentsLoadingStatusButton, MNPaymentsNuxViewModel, NSString;

@interface MNPaymentsNuxView : UIView <FBPaymentsViewModelConfigurable> {

	MNProfileImageView* _profileImageView;
	UIImageView* _maskImageView;
	FBRichTextView* _titleView;
	FBRichTextView* _descriptionView;
	FBPaymentsLoadingStatusButton* _primaryButton;
	FBPaymentsLoadingStatusButton* _secondaryButton;
	MNPaymentsNuxViewModel* _viewModel;
	id<MNPaymentsNuxViewDelegate> _delegate;

}

@property (nonatomic,copy) MNPaymentsNuxViewModel * viewModel;                           //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,copy) MNProfileImageView * profileImageView;                        //@synthesize profileImageView=_profileImageView - In the implementation block
@property (assign,nonatomic,__weak) id<MNPaymentsNuxViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setProfileImageView:(MNProfileImageView *)arg1 ;
-(void)didTapPrimaryButton:(id)arg1 ;
-(void)didTapSecondaryButton:(id)arg1 ;
-(MNProfileImageView *)profileImageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNPaymentsNuxViewDelegate>)arg1 ;
-(id<MNPaymentsNuxViewDelegate>)delegate;
-(MNPaymentsNuxViewModel *)viewModel;
-(void)setViewModel:(MNPaymentsNuxViewModel *)arg1 ;
@end

