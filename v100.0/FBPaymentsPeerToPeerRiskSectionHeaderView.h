/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBRichTextView, UIButton;

@interface FBPaymentsPeerToPeerRiskSectionHeaderView : UIView {

	FBRichTextView* _titleTextView;
	FBRichTextView* _descriptionTextView;
	UIButton* _learnMoreButton;

}

@property (nonatomic,readonly) UIButton * learnMoreButton;              //@synthesize learnMoreButton=_learnMoreButton - In the implementation block
-(id)initWithTitle:(id)arg1 descriptionText:(id)arg2 hasLearnMoreButton:(BOOL)arg3 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIButton *)learnMoreButton;
@end
