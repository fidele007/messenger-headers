/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNEphemeralMessagingLifetimePickerViewDelegate;
@class UIPickerView, UIButton, UILabel, NSArray;

@interface MNEphemeralMessagingLifetimePickerView : UIView {

	UIPickerView* _timePickerView;
	UIButton* _cancelButton;
	UIButton* _doneButton;
	UILabel* _titleLabel;
	NSArray* _accessibilityElements;
	id<MNEphemeralMessagingLifetimePickerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNEphemeralMessagingLifetimePickerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithTimePickerView:(id)arg1 ;
-(void)setDelegate:(id<MNEphemeralMessagingLifetimePickerViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNEphemeralMessagingLifetimePickerViewDelegate>)delegate;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(id)accessibilityElements;
-(void)_cancelButtonTapped;
-(void)_doneButtonTapped;
@end
