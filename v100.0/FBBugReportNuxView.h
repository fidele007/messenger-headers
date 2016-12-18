/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIView, UIButton;

@interface FBBugReportNuxView : UIView {

	UIImageView* _imageView;
	UILabel* _labelView;
	UIView* _longDividerBottom;
	UIButton* _cancelButton;
	UIView* _verticalDividerBetweenButtons;
	double _margin;
	double _imageWidth;
	double _imageHeight;
	double _dividerHeight;
	double _buttonHeight;
	double _dialogMaxWidth;
	UIButton* _okButton;

}

@property (nonatomic,retain) UIButton * okButton;                  //@synthesize okButton=_okButton - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;              //@synthesize cancelButton=_cancelButton - In the implementation block
-(void)initializeLayoutParameters;
-(double)heightForLabelText;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(UIButton *)okButton;
-(void)setOkButton:(UIButton *)arg1 ;
@end
