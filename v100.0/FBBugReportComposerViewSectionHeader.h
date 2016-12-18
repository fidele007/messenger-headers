/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel, UIButton;

@interface FBBugReportComposerViewSectionHeader : UIView {

	UILabel* _summary;
	BOOL _showRequired;
	BOOL _sectionIsSelected;
	BOOL _showBorder;
	BOOL _doneButtonCanBeDisplayed;
	UIButton* _button;
	UILabel* _title;
	UIButton* _doneButton;

}

@property (nonatomic,readonly) UIButton * button;                  //@synthesize button=_button - In the implementation block
@property (nonatomic,readonly) UILabel * title;                    //@synthesize title=_title - In the implementation block
@property (assign) BOOL showBorder;                                //@synthesize showBorder=_showBorder - In the implementation block
@property (nonatomic,readonly) UIButton * doneButton;              //@synthesize doneButton=_doneButton - In the implementation block
@property (assign) BOOL doneButtonCanBeDisplayed;                  //@synthesize doneButtonCanBeDisplayed=_doneButtonCanBeDisplayed - In the implementation block
-(id)initWithTitle:(id)arg1 showRequired:(BOOL)arg2 ;
-(void)setDoneButtonCanBeDisplayed:(BOOL)arg1 ;
-(void)setSectionIsSelected:(BOOL)arg1 ;
-(void)setSummaryAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(void)setSummaryText:(id)arg1 ;
-(BOOL)showBorder;
-(BOOL)doneButtonCanBeDisplayed;
-(UIButton *)button;
-(void)layoutSubviews;
-(UILabel *)title;
-(UIButton *)doneButton;
-(void)setShowBorder:(BOOL)arg1 ;
@end
