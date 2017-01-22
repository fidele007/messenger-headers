/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIControl.h>

@protocol FBCameraFlashModeToggleViewDelegate;
@class NSDictionary;

@interface FBCameraFlashModeToggleView : UIControl {

	NSDictionary* _modeButtons;
	id<FBCameraFlashModeToggleViewDelegate> _delegate;
	long long _flashMode;

}

@property (assign,nonatomic,__weak) id<FBCameraFlashModeToggleViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long flashMode;                                                  //@synthesize flashMode=_flashMode - In the implementation block
-(void)modeButtonTapped:(id)arg1 ;
-(void)_updateFlashMode:(long long)arg1 animated:(BOOL)arg2 triggeredByUserInteraction:(BOOL)arg3 ;
-(void)setFlashMode:(long long)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBCameraFlashModeToggleViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBCameraFlashModeToggleViewDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setFlashMode:(long long)arg1 ;
-(long long)flashMode;
@end
