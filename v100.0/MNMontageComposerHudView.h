/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNMontageColorSliderDelegate.h>
#import <Messenger/FBDrawColorScrubberDelegate.h>

@class FBLazyCreator, MNMontageComposerHudCameraListenerAnnouncer, MNMontageComposerHudEditListenerAnnouncer, MNMontageComposerHudNavigationListenerAnnouncer, MNMontageComposerHudPreviewListenerAnnouncer, MNMontageComposerHudCameraConfig, MNMontageComposerHudEditConfig, MNMontageComposerHudNavigationConfig, MNMontageComposerHudDrawingConfig, MNMontageComposerHudHintConfig, MNMontageCameraCaptureButton, UIButton, NSString;

@interface MNMontageComposerHudView : UIView <MNMontageColorSliderDelegate, FBDrawColorScrubberDelegate> {

	FBLazyCreator* _closeButtonCreator;
	FBLazyCreator* _backButtonCreator;
	FBLazyCreator* _cameraFlashButtonCreator;
	FBLazyCreator* _cameraFlipButtonCreator;
	FBLazyCreator* _trashIconCreator;
	FBLazyCreator* _changeColorButtonCreator;
	FBLazyCreator* _stickerButtonCreator;
	FBLazyCreator* _textButtonCreator;
	FBLazyCreator* _drawingButtonCreator;
	FBLazyCreator* _undoButtonCreator;
	FBLazyCreator* _textColorSliderCreator;
	FBLazyCreator* _saveButtonCreator;
	FBLazyCreator* _leftViewSwitchButtonCreator;
	FBLazyCreator* _cameraCaptureButtonCreator;
	FBLazyCreator* _badgeViewCreator;
	FBLazyCreator* _rightViewSwitchButtonCreator;
	FBLazyCreator* _nextButtonCreator;
	FBLazyCreator* _muteButtonCreator;
	FBLazyCreator* _placeholderLabelCreator;
	FBLazyCreator* _colorScrubberCreator;
	FBLazyCreator* _badgedNextButtonCreator;
	FBLazyCreator* _bottomHintViewCreator;
	MNMontageComposerHudCameraListenerAnnouncer* _cameraAnnouncer;
	MNMontageComposerHudEditListenerAnnouncer* _editAnnouncer;
	MNMontageComposerHudNavigationListenerAnnouncer* _navigationAnnouncer;
	MNMontageComposerHudPreviewListenerAnnouncer* _previewAnnouncer;
	MNMontageComposerHudCameraConfig* _cameraConfig;
	MNMontageComposerHudEditConfig* _editConfig;
	MNMontageComposerHudNavigationConfig* _navigationConfig;
	MNMontageComposerHudDrawingConfig* _drawingConfig;
	MNMontageComposerHudHintConfig* _hintConfig;
	CGRect _keyboardFrame;

}

@property (nonatomic,retain) MNMontageComposerHudCameraConfig * cameraConfig;                      //@synthesize cameraConfig=_cameraConfig - In the implementation block
@property (nonatomic,retain) MNMontageComposerHudEditConfig * editConfig;                          //@synthesize editConfig=_editConfig - In the implementation block
@property (nonatomic,retain) MNMontageComposerHudNavigationConfig * navigationConfig;              //@synthesize navigationConfig=_navigationConfig - In the implementation block
@property (nonatomic,retain) MNMontageComposerHudDrawingConfig * drawingConfig;                    //@synthesize drawingConfig=_drawingConfig - In the implementation block
@property (nonatomic,retain) MNMontageComposerHudHintConfig * hintConfig;                          //@synthesize hintConfig=_hintConfig - In the implementation block
@property (assign,nonatomic) CGRect keyboardFrame;                                                 //@synthesize keyboardFrame=_keyboardFrame - In the implementation block
@property (nonatomic,readonly) MNMontageCameraCaptureButton * captureButton; 
@property (nonatomic,readonly) UIButton * textButton; 
@property (nonatomic,readonly) UIButton * drawingButton; 
@property (nonatomic,readonly) UIButton * stickerButton; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)heightForBottomToolbarWithBadge:(BOOL)arg1 ;
+(double)heightForTopToolbar;
-(void)addNavigationListener:(id)arg1 ;
-(MNMontageCameraCaptureButton *)captureButton;
-(void)_didTapSave;
-(void)_didTapClose;
-(void)addEditListener:(id)arg1 ;
-(UIButton *)drawingButton;
-(UIButton *)stickerButton;
-(void)addCameraListener:(id)arg1 ;
-(void)addPreviewListener:(id)arg1 ;
-(BOOL)rectIntersectWithTrashIcon:(CGRect)arg1 ;
-(void)montageColorSliderColorChanged:(id)arg1 to:(id)arg2 ;
-(id)_buttonCreatorWithImageName:(id)arg1 accessibilityLabel:(id)arg2 alpha:(double)arg3 action:(SEL)arg4 ;
-(void)_didTapBack;
-(void)_didTapFlash;
-(void)_didTapFlip;
-(void)_didTapColorBackground;
-(void)_didTapArt;
-(void)_didTapText;
-(void)_didTapDrawing;
-(void)_didTapUndo;
-(void)_didTapViewSwitchLeft;
-(void)_didTapViewSwitchRight;
-(void)_didTapNext;
-(void)_didTapMute;
-(BOOL)_shouldUseLargeWidthLayout;
-(void)_layoutColorSlider;
-(void)_updateStickerButton;
-(void)_updateTextButton;
-(void)_updateDrawingButton;
-(void)_updateEditModeButtonCreator:(id)arg1 buttonMode:(long long)arg2 ;
-(void)_updateEditButtons;
-(void)_updateTrashIcon;
-(void)colorScrubber:(id)arg1 didChooseColor:(id)arg2 ;
-(void)colorScrubber:(id)arg1 didChooseSize:(double)arg2 ;
-(void)_didTapCapture;
-(void)setNavigationConfig:(MNMontageComposerHudNavigationConfig *)arg1 ;
-(void)setDrawingConfig:(MNMontageComposerHudDrawingConfig *)arg1 ;
-(void)setCameraConfig:(MNMontageComposerHudCameraConfig *)arg1 ;
-(void)setEditConfig:(MNMontageComposerHudEditConfig *)arg1 ;
-(void)setHintConfig:(MNMontageComposerHudHintConfig *)arg1 ;
-(MNMontageComposerHudCameraConfig *)cameraConfig;
-(MNMontageComposerHudEditConfig *)editConfig;
-(MNMontageComposerHudNavigationConfig *)navigationConfig;
-(MNMontageComposerHudDrawingConfig *)drawingConfig;
-(MNMontageComposerHudHintConfig *)hintConfig;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)_layoutPlaceholder;
-(CGRect)keyboardFrame;
-(UIButton *)textButton;
-(void)setKeyboardFrame:(CGRect)arg1 ;
@end

