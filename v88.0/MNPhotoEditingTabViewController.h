/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNPhotoEditingTabControllerDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNPhotoEditingTabViewControllerDelegate;
@class MNPhotoEditingTabController, MNPhotoEditingTabContainerView, MNTabBar, NSString;

@interface MNPhotoEditingTabViewController : UIViewController <MNPhotoEditingTabControllerDelegate, FBClassProvidable> {

	MNPhotoEditingTabController* _photoEditingTabController;
	MNPhotoEditingTabContainerView* _containerView;
	MNTabBar* _composerTabBar;
	id<MNPhotoEditingTabViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNPhotoEditingTabViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_initComposeContainerView;
-(void)photoEditingTabController:(id)arg1 didSelectTab:(long long)arg2 isMutuallyExclusive:(BOOL)arg3 isSelected:(BOOL)arg4 ;
-(void)_initComposerTabBarIfNeeded;
-(void)setDelegate:(id<MNPhotoEditingTabViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNPhotoEditingTabViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
@end
