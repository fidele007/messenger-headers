/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:32 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
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
-(void)layoutSubviews;
-(void)setDelegate:(id<MNEphemeralMessagingLifetimePickerViewDelegate>)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNEphemeralMessagingLifetimePickerViewDelegate>)delegate;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(id)accessibilityElements;
-(void)_doneButtonTapped;
-(void)_cancelButtonTapped;
@end

