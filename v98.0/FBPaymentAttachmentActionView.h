/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBPaymentAttachmentViewModel, UIView, UIButton;

@interface FBPaymentAttachmentActionView : UIView {

	FBPaymentAttachmentViewModel* _viewModel;
	UIView* _middleSeparator;
	UIButton* _actionButton;
	UIButton* _otherButton;

}

@property (nonatomic,readonly) UIButton * actionButton;              //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,readonly) UIButton * otherButton;               //@synthesize otherButton=_otherButton - In the implementation block
+(CGSize)sizeWithViewModel:(id)arg1 forWidth:(double)arg2 ;
-(void)updateWithViewModel:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)tintColorDidChange;
-(UIButton *)actionButton;
-(UIButton *)otherButton;
@end

