/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
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
