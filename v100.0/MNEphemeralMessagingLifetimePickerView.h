/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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
