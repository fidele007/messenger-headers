/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol SPAccessPhotoPermissionOptions;
@class UIView, UILabel, UIButton;

@interface SPAccessPhotoPermissionPromptView : UIView {

	UIView* _containerView;
	UILabel* _headerLabel;
	UILabel* _descLabelWhenDenied;
	UILabel* _descLabelWhenUndertermined;
	UIView* _settingsView;
	id<SPAccessPhotoPermissionOptions> _options;
	BOOL _canPromptUser;
	UIButton* _authorizeButton;
	UIButton* _closeButton;
	UIButton* _linkToSettingsButton;
	double _topLayoutGuideLength;

}

@property (nonatomic,readonly) UIButton * authorizeButton;                   //@synthesize authorizeButton=_authorizeButton - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                         //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,readonly) UIButton * linkToSettingsButton;              //@synthesize linkToSettingsButton=_linkToSettingsButton - In the implementation block
@property (assign,nonatomic) BOOL canPromptUser;                             //@synthesize canPromptUser=_canPromptUser - In the implementation block
@property (nonatomic,readonly) int style; 
@property (assign,nonatomic) double topLayoutGuideLength;                    //@synthesize topLayoutGuideLength=_topLayoutGuideLength - In the implementation block
-(double)topLayoutGuideLength;
-(void)setTopLayoutGuideLength:(double)arg1 ;
-(UIButton *)authorizeButton;
-(UIButton *)linkToSettingsButton;
-(void)setCanPromptUser:(BOOL)arg1 ;
-(id)_headerShadowColor;
-(id)_headerTextColor;
-(id)_descriptionLabelWithText:(id)arg1 ;
-(id)_experimentSettingsView;
-(BOOL)_shouldUseiOS8SettingsView;
-(id)_iOS8SettingsView;
-(id)_defaultSettingsView;
-(id)_descriptionFont;
-(id)_descriptionTextColor;
-(id)_settingFont;
-(id)_settingTextColor;
-(id)_stepLabelWithDescription:(id)arg1 ;
-(id)_listNumberLabelForNumber:(unsigned long long)arg1 atX:(double)arg2 Y:(double)arg3 ;
-(id)_stepLabelWithDescription:(id)arg1 atX:(double)arg2 Y:(double)arg3 ;
-(id)_iconWithImage:(id)arg1 atX:(double)arg2 Y:(double)arg3 ;
-(void)setSettingsViewVisibility:(BOOL)arg1 ;
-(void)setDescriptionLabelVisibility:(BOOL)arg1 ;
-(BOOL)canPromptUser;
-(void)layoutSubviews;
-(int)style;
-(id)initWithFrame:(CGRect)arg1 options:(id)arg2 ;
-(UIButton *)closeButton;
-(void)setCloseButton:(UIButton *)arg1 ;
@end

