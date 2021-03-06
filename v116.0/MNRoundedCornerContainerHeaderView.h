/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:00 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNRoundedCornerContainerHeaderViewDelegate;
@class UIButton, UIImageView, FBRichTextView, UIView, MNRoundedCornerContainerConfig, FBImageDownloader;

@interface MNRoundedCornerContainerHeaderView : UIView {

	UIButton* _topRightButton;
	UIButton* _topLeftButton;
	UIImageView* _topLeftButtonIcon;
	FBRichTextView* _titleView;
	UIImageView* _roundedCornerDragIndicator;
	UIView* _separatorLine;
	BOOL _isModernHeaderStyle;
	MNRoundedCornerContainerConfig* _config;
	FBImageDownloader* _imageDownloader;
	UIView* _dragArea;
	id<MNRoundedCornerContainerHeaderViewDelegate> _delegate;

}

@property (nonatomic,readonly) UIView * dragArea;                                                         //@synthesize dragArea=_dragArea - In the implementation block
@property (assign,nonatomic,__weak) id<MNRoundedCornerContainerHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_SetUpModernHeaderButtons;
-(void)_SetUpTopLeftButton;
-(void)_SetUpTopLeftButtonIconWithImage:(id)arg1 ;
-(void)_handleImage:(id)arg1 ;
-(id)initWithConfig:(id)arg1 imageDownloader:(id)arg2 ;
-(void)_didTapTopRightButton:(id)arg1 ;
-(void)_didTapTopLeftButton:(id)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNRoundedCornerContainerHeaderViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNRoundedCornerContainerHeaderViewDelegate>)delegate;
-(UIView *)dragArea;
@end

