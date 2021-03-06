/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:00 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIView, UIButton;

@interface FBBugReportShakeOffView : UIView {

	UILabel* _shakeOffLabel;
	UIView* _divider;
	double _margin;
	double _dividerHeight;
	double _buttonHeight;
	UIButton* _okButton;

}

@property (nonatomic,retain) UIButton * okButton;              //@synthesize okButton=_okButton - In the implementation block
-(double)heightForLabelText:(CGSize)arg1 ;
-(void)initializeLayoutParameters;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIButton *)okButton;
-(void)setOkButton:(UIButton *)arg1 ;
@end

