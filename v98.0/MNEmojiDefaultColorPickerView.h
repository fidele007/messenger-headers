/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNEmojiDefaultColorPickerViewDelegate;
@class FBPickerView, FBStackedView, UIButton, MNEmojiDefaultColorPickerTitleView;

@interface MNEmojiDefaultColorPickerView : UIView {

	FBPickerView* _pickerView;
	FBStackedView* _stackedView;
	UIButton* _cancelButton;
	MNEmojiDefaultColorPickerTitleView* _titleView;
	id<MNEmojiDefaultColorPickerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNEmojiDefaultColorPickerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithPickerView:(id)arg1 title:(id)arg2 subtitle:(id)arg3 ;
-(void)setDelegate:(id<MNEmojiDefaultColorPickerViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNEmojiDefaultColorPickerViewDelegate>)delegate;
-(void)_cancelButtonTapped;
@end

