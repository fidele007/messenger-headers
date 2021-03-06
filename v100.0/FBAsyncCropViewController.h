/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBMediaTopNavigationBarDelegation.h>

@protocol FBCropViewControllerDelegate;
@class FBMediaTopNavigationBar, FBImageDownloader, FBCropViewController, UIActivityIndicatorView, NSString;

@interface FBAsyncCropViewController : UIViewController <FBMediaTopNavigationBarDelegation> {

	CGRect _contentFrame;
	FBMediaTopNavigationBar* _topBar;
	id<FBCropViewControllerDelegate> _delegate;
	FBImageDownloader* _imageDownloader;
	FBCropViewController* _cropViewController;
	UIActivityIndicatorView* _loadingSpinner;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_requestImageToDisplayWithURL:(id)arg1 ;
-(void)_presentLoadingSpinner;
-(void)_presentCropViewControllerWithImage:(id)arg1 ;
-(void)didTapLeftButton:(id)arg1 ;
-(void)didTapRightButton:(id)arg1 ;
-(id)initWithPhotoURL:(id)arg1 session:(id)arg2 delegate:(id)arg3 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end

