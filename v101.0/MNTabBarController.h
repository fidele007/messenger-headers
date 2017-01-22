/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITabBarController.h>
#import <Messenger/MNContainerViewController.h>
#import <Messenger/FBClassProvidable.h>

@class NSMutableDictionary, UIView, NSString;

@interface MNTabBarController : UITabBarController <MNContainerViewController, FBClassProvidable> {

	NSMutableDictionary* _tabBarItemsOverlayViews;
	UIView* _floatingCameraCaptureButton;

}

@property (nonatomic,retain) UIView * floatingCameraCaptureButton;              //@synthesize floatingCameraCaptureButton=_floatingCameraCaptureButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)setTabBarItemOverlayView:(id)arg1 forViewController:(id)arg2 ;
-(id)mn_visibleContentViewControllers;
-(void)setFloatingCameraCaptureButton:(UIView *)arg1 ;
-(void)_scheduleRotationIfSupportedOrientationDifferent:(id)arg1 ;
-(void)_initTabBarItemsOverlayViewsDictionaryIfNeeded;
-(void)_clearTabBarItemsOverlayViewsDictionary;
-(id)tabBarItemOverlayViewForViewController:(id)arg1 ;
-(UIView *)floatingCameraCaptureButton;
-(long long)preferredStatusBarStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(void)setViewControllers:(id)arg1 ;
-(void)setSelectedViewController:(id)arg1 ;
-(void)setSelectedIndex:(unsigned long long)arg1 ;
@end
