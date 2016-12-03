/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBContainerViewController.h>
#import <Messenger/MNPhotoEditingTabViewControllerDelegate.h>
#import <Messenger/FBKeyboardObserverDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNDismissableViewController.h>

@protocol FBProvider;
@class UIView, MNPhotoEditingView, MNPhotoEditingTabViewController, FBKeyboardObserver, MNPhotoEditingControlsViewController, UIImage, MNPhotoEditInfo, MNAppThemeConfiguration, NSString;

@interface MNPhotoEditingViewController : FBContainerViewController <MNPhotoEditingTabViewControllerDelegate, FBKeyboardObserverDelegate, FBClassProvidable, MNDismissableViewController> {

	UIView* _mediaView;
	MNPhotoEditingView* _photoEditingView;
	id<FBProvider> _photoEditingTabViewControllerProvider;
	MNPhotoEditingTabViewController* _photoEditingTabViewController;
	FBKeyboardObserver* _keyboardObserver;
	MNPhotoEditingControlsViewController* _controlsViewController;
	UIImage* _originalImage;
	MNPhotoEditInfo* _initialEditInfo;
	MNAppThemeConfiguration* _appThemeConfiguration;
	NSString* _rightBarButtonTitle;
	/*^block*/id _completionBlock;
	/*^block*/id _dismissBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id dismissBlock;                         //@synthesize dismissBlock=_dismissBlock - In the implementation block
-(id)initWithProviderMapData:(id)arg1 ;
-(id)analyticsModule;
-(void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardFrameDidChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)setDismissBlock:(id)arg1 ;
-(id)analyticsExtras;
-(id)dismissBlock;
-(long long)dismissButtonItem;
-(long long)dismissButtonPosition;
-(void)_updateKeyboardWithBeginFrame:(CGRect)arg1 endFrame:(CGRect)arg2 duration:(double)arg3 curve:(long long)arg4 ;
-(void)configureWithImage:(id)arg1 initialEditInfo:(id)arg2 rightBarButtonTitle:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)photoTabViewController:(id)arg1 didChangeTab:(long long)arg2 isMutuallyExclusive:(BOOL)arg3 isSelected:(BOOL)arg4 ;
-(void)_didPressRightBarButton:(id)arg1 ;
-(void)dealloc;
-(long long)preferredStatusBarStyle;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)shouldDismiss;
-(void)willDismiss;
@end

