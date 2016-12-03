/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNAttachmentView.h>

@protocol FBPaymentAttachmentViewDelegate;
@class FBPaymentAttachmentTopContainerView, FBPaymentAttachmentBottomContainerView, FBPaymentsHorizontalSeparatorView, UITapGestureRecognizer, FBPaymentAttachmentViewModel, NSString;

@interface FBPaymentAttachmentView : UIView <MNAttachmentView> {

	FBPaymentAttachmentTopContainerView* _topContainerView;
	FBPaymentAttachmentBottomContainerView* _bottomContainerView;
	FBPaymentsHorizontalSeparatorView* _seperatorView;
	UITapGestureRecognizer* _tapGestureRecognizer;
	FBPaymentAttachmentViewModel* _viewModel;
	id<FBPaymentAttachmentViewDelegate> _delegate;

}

@property (nonatomic,copy) FBPaymentAttachmentViewModel * viewModel;                           //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentAttachmentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
+(CGSize)sizeWithViewModel:(id)arg1 forWidth:(double)arg2 ;
-(id)initWithFrame:(CGRect)arg1 imageDownloader:(id)arg2 ;
-(void)_onTapAction:(id)arg1 ;
-(void)_onTapOtherButton:(id)arg1 ;
-(void)setDelegate:(id<FBPaymentAttachmentViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBPaymentAttachmentViewDelegate>)delegate;
-(FBPaymentAttachmentViewModel *)viewModel;
-(void)_handleTap:(id)arg1 ;
-(void)setViewModel:(FBPaymentAttachmentViewModel *)arg1 ;
@end

