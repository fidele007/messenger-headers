/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:00 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
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
-(void)setCancelButton:(UIButton *)arg1 ;
-(UIButton *)cancelButton;
-(UIButton *)okButton;
-(void)setOkButton:(UIButton *)arg1 ;
@end

