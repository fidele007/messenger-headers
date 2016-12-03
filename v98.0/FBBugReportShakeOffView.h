/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:08 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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
-(void)initializeLayoutParameters;
-(double)heightForLabelText:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIButton *)okButton;
-(void)setOkButton:(UIButton *)arg1 ;
@end

