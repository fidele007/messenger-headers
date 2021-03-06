/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:37 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBRichTextView, FBNetworkImageView, MNPhotoMaskView, UIImageView, UIButton, MNPaymentsSaleItemViewModel;

@interface MNPaymentsSaleItemView : UIView {

	FBRichTextView* _titleTextView;
	FBRichTextView* _subtitleTextView;
	FBNetworkImageView* _itemImageView;
	MNPhotoMaskView* _itemImageMaskView;
	UIImageView* _subtitleGlyphView;
	UIButton* _dismissButton;
	MNPaymentsSaleItemViewModel* _viewModel;

}

@property (nonatomic,retain) MNPaymentsSaleItemViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
-(id)initWithImageDownloader:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(MNPaymentsSaleItemViewModel *)viewModel;
-(void)setViewModel:(MNPaymentsSaleItemViewModel *)arg1 ;
@end

