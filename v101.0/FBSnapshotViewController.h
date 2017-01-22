/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol FBSnapshotViewControllerDelegate;
@class UIView, NSString;

@interface FBSnapshotViewController : UIViewController {

	UIView* _snapshotView;
	NSString* _analyticsModule;
	BOOL _previousStatusBarVisibility;
	long long _previousStatusBarStyle;
	id<FBSnapshotViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBSnapshotViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * snapshotView;                                             //@synthesize snapshotView=_snapshotView - In the implementation block
-(id)analyticsModule;
-(BOOL)fb_showNavBarSearchField;
-(BOOL)fb_hidesTabBar;
-(BOOL)fb_hidesNavigationBar;
-(BOOL)fb_showAuxiliaryViewController;
-(id)initWithWindow:(id)arg1 analyticsModule:(id)arg2 ;
-(void)setDelegate:(id<FBSnapshotViewControllerDelegate>)arg1 ;
-(id<FBSnapshotViewControllerDelegate>)delegate;
-(UIView *)snapshotView;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setSnapshotView:(UIView *)arg1 ;
@end
