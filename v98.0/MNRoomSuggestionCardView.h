/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol MNRoomSuggestionCardViewDelegate;
@class UIImageView, UIView, UIButton;

@interface MNRoomSuggestionCardView : UIView {

	UIImageView* _backgroundView;
	UIView* _imageView;
	UIImageView* _imageOverlayView;
	UIView* _contentView;
	UIView* _buttonSeparatorView;
	UIButton* _actionButton;
	id<MNRoomSuggestionCardViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNRoomSuggestionCardViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_buttonTapped;
-(id)initWithImageView:(id)arg1 contentView:(id)arg2 buttonTitle:(id)arg3 ;
-(void)setDelegate:(id<MNRoomSuggestionCardViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNRoomSuggestionCardViewDelegate>)delegate;
@end
