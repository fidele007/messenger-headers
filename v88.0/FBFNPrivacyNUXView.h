/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIView, FBRichTextView, FBFNNUXShareWithButton;

@interface FBFNPrivacyNUXView : UIView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIView* _privacyInfoView;
	FBRichTextView* _descriptionTextView;
	FBFNNUXShareWithButton* _shareWithButton;

}

@property (nonatomic,readonly) FBFNNUXShareWithButton * shareWithButton;              //@synthesize shareWithButton=_shareWithButton - In the implementation block
@property (nonatomic,readonly) FBRichTextView * descriptionTextView;                  //@synthesize descriptionTextView=_descriptionTextView - In the implementation block
-(void)_configureAppearance:(id)arg1 ;
-(FBFNNUXShareWithButton *)shareWithButton;
-(id)initWithAppearance:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(FBRichTextView *)descriptionTextView;
@end
