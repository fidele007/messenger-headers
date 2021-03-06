/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewHeaderFooterView.h>

@protocol MNDismissableTableHeaderViewDelegate;
@class UIView, UILabel, UIButton, NSString;

@interface MNDismissableTableHeaderView : UITableViewHeaderFooterView {

	UIView* _coloredView;
	UILabel* _label;
	UIButton* _dismissButton;
	id<MNDismissableTableHeaderViewDelegate> _delegate;
	NSString* _text;

}

@property (assign,nonatomic,__weak) id<MNDismissableTableHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * text;                                                         //@synthesize text=_text - In the implementation block
-(void)_didTapDismiss;
-(void)setDelegate:(id<MNDismissableTableHeaderViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNDismissableTableHeaderViewDelegate>)delegate;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end

