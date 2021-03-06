/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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

