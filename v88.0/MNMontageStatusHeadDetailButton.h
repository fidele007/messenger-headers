/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNMontageStatusHeadDetailButtonDelegate;
@class FBRichTextView, UILabel, UIButton;

@interface MNMontageStatusHeadDetailButton : UIView {

	FBRichTextView* _primaryLabel;
	UILabel* _secondaryLabel;
	UIButton* _button;
	id<MNMontageStatusHeadDetailButtonDelegate> _delegate;
	double _primaryTitleFontSize;
	double _secondaryTitleFontSize;

}

@property (assign,nonatomic,__weak) id<MNMontageStatusHeadDetailButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double primaryTitleFontSize;                                              //@synthesize primaryTitleFontSize=_primaryTitleFontSize - In the implementation block
@property (assign,nonatomic) double secondaryTitleFontSize;                                            //@synthesize secondaryTitleFontSize=_secondaryTitleFontSize - In the implementation block
-(void)_didTapButton:(id)arg1 ;
-(id)initWithPrimaryTitleFontSize:(double)arg1 secondaryTitleFontSize:(double)arg2 titleAlignment:(long long)arg3 ;
-(void)setPrimaryTitle:(id)arg1 prependsGlyph:(BOOL)arg2 ;
-(double)primaryTitleFontSize;
-(void)setPrimaryTitleFontSize:(double)arg1 ;
-(double)secondaryTitleFontSize;
-(void)setSecondaryTitleFontSize:(double)arg1 ;
-(void)setDelegate:(id<MNMontageStatusHeadDetailButtonDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNMontageStatusHeadDetailButtonDelegate>)delegate;
-(void)setSecondaryTitle:(id)arg1 ;
@end

