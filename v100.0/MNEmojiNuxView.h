/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol MNEmojiNuxViewDelegate;
@class UIView, UILabel, MNButton, FBRichTextView, MNStackedContainerView;

@interface MNEmojiNuxView : UIView {

	UIView* _imageView;
	UILabel* _titleLabel;
	UILabel* _contentLabel;
	MNButton* _tryItButton;
	FBRichTextView* _notNowTextView;
	MNStackedContainerView* _stackedButtonContainerView;
	id<MNEmojiNuxViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNEmojiNuxViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithImageView:(id)arg1 ;
-(void)_didTapTryItButton:(id)arg1 ;
-(void)_didTapNotNowTextView:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_isSmallScreenDevice;
-(void)setDelegate:(id<MNEmojiNuxViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNEmojiNuxViewDelegate>)delegate;
@end
