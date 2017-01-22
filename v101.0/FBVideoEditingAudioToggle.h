/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIControl.h>

@class FBVideoEditingConfiguration, UIView, UIButton;

@interface FBVideoEditingAudioToggle : UIControl {

	FBVideoEditingConfiguration* _editingConfiguration;
	UIView* _backgroundView;
	UIButton* _button;

}

@property (nonatomic,retain) UIView * backgroundView;                //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIButton * button;                      //@synthesize button=_button - In the implementation block
@property (assign,getter=isMuted,nonatomic) BOOL muted; 
+(id)videoEditingAudioToggleWithConfiguration:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 withConfiguration:(id)arg2 ;
-(void)_setupButton;
-(UIButton *)button;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(void)setButton:(UIButton *)arg1 ;
-(void)_handleTap:(id)arg1 ;
-(BOOL)isMuted;
-(void)setMuted:(BOOL)arg1 ;
-(void)_setupBackground;
@end
