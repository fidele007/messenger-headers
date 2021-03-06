/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class MNDayCameraContainerHudCoordinator, MNDayCameraHudView, MNMontageCameraCaptureButton;

@interface MNDayCameraHudViewController : UIViewController {

	MNDayCameraContainerHudCoordinator* _hudCoordinator;
	MNDayCameraHudView* _hudView;
	MNMontageCameraCaptureButton* _captureButton;

}

@property (nonatomic,readonly) MNMontageCameraCaptureButton * captureButton;              //@synthesize captureButton=_captureButton - In the implementation block
-(MNMontageCameraCaptureButton *)captureButton;
-(void)setFloatingHudContainerViewBottomMargin:(double)arg1 ;
-(void)showCameraHud;
-(id)initWithHudCoordinator:(id)arg1 ;
-(void)showPreviewHud;
-(void)setAlphaForHudViewsWithVisibilityChangeWhenIntelayIsInitial:(double)arg1 ;
-(void)setAlphaForHudViewsWithVisibilityChangeWhenIntelayIsFullscreen:(double)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
@end

