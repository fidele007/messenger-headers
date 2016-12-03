/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBMediaTopNavigationBarDelegation.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Messenger/FBMediaGalleryTopBarDelegate.h>
#import <Messenger/FBMoveAndScaleViewDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <Messenger/FBMediaGalleryToolProtocol.h>

@protocol FBMediaGalleryBannerProviderProtocol, FBMoveAndScaleViewProtocol, FBComposerCropViewControllerDelegate;
@class FBComposerCropView, UIPanGestureRecognizer, FBPhotoCropInfo, UIView, UIViewController, FBMediaGalleryTopBarConfiguration, FBUserSession, FBCropLogger, FBPhotoAssetEdits, UIImage, NSString, UIImageView;

@interface FBComposerCropViewController : UIViewController <FBMediaTopNavigationBarDelegation, UIGestureRecognizerDelegate, FBMediaGalleryTopBarDelegate, FBMoveAndScaleViewDelegate, UIViewControllerAnimatedTransitioning, FBMediaGalleryToolProtocol> {

	FBComposerCropView* _cropView;
	CGRect _contentFrame;
	UIPanGestureRecognizer* _panGestureRecognizer;
	FBPhotoCropInfo* _previousCropInfo;
	BOOL _fixedAspectRatioCroppingEnabled;
	CGRect _animationDirectionFrame;
	CGRect _animationFrame;
	UIView* _animationDirectionView;
	BOOL _applyCrop;
	BOOL _squareCropRequired;
	id<FBMediaGalleryBannerProviderProtocol> _bannerProvider;
	UIViewController* _bannerViewController;
	CGPoint _previousGestureRecognizerDelta;
	CGPoint _remainingGestureRecognizerDelta;
	double _photoRotationAngle;
	CGRect _prevConstraintFrame;
	UIView* _privacyMessageView;
	int _behavior;
	unsigned long long _style;
	FBMediaGalleryTopBarConfiguration* _topBarConfiguration;
	FBUserSession* _userSession;
	BOOL _presentationTransitionPerformed;
	FBCropLogger* _logger;
	FBPhotoAssetEdits* _assetEdits;
	id<FBMoveAndScaleViewProtocol> _moveAndScaleView;
	BOOL _moveAndScaleViewShown;
	/*^block*/id _moveAndScaleFactory;
	UIImage* _cropOverlay;
	unsigned long long _mediaPickerStyle;
	BOOL _underlayEnabled;
	id<FBComposerCropViewControllerDelegate> _delegate;
	FBPhotoCropInfo* _currentCropInfo;
	NSString* _assetID;
	UIImage* _imageToCrop;
	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImageView * imageView;                                               //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic,__weak) id<FBComposerCropViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBPhotoCropInfo * currentCropInfo;                                     //@synthesize currentCropInfo=_currentCropInfo - In the implementation block
@property (nonatomic,copy) NSString * assetID;                                                      //@synthesize assetID=_assetID - In the implementation block
@property (nonatomic,readonly) UIImage * imageToCrop;                                               //@synthesize imageToCrop=_imageToCrop - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(/*^block*/id)createDefaultMoveAndScaleFactory;
-(NSString *)assetID;
-(void)setAssetID:(NSString *)arg1 ;
-(FBPhotoCropInfo *)currentCropInfo;
-(void)mediaGalleryDidPressCurrentTool;
-(void)mediaGalleryWillPresentTool:(unsigned long long)arg1 ;
-(id)initWithImage:(id)arg1 contentFrame:(CGRect)arg2 imageView:(id)arg3 assetEdits:(id)arg4 behavior:(int)arg5 assetID:(id)arg6 fixedAspectRatioCroppingEnabled:(BOOL)arg7 style:(unsigned long long)arg8 topBarConfiguration:(id)arg9 userSession:(id)arg10 logger:(id)arg11 bannerProvider:(id)arg12 cropOverlay:(id)arg13 mediaPickerStyle:(unsigned long long)arg14 underlayEnabled:(BOOL)arg15 ;
-(unsigned long long)getMediaGalleryToolType;
-(void)galleryTopBarDidTapSelectButton:(id)arg1 ;
-(void)prepareForAnimationWithDirectionFrame:(CGRect)arg1 directionView:(id)arg2 applyCrop:(BOOL)arg3 animationFrame:(CGRect)arg4 ;
-(void)performDismissalTransitionInView:(id)arg1 toView:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)galleryTopBarDidTapBackButton:(id)arg1 ;
-(void)didTapLeftButton:(id)arg1 ;
-(void)didTapRightButton:(id)arg1 ;
-(void)_setupMoveAndScaleView;
-(void)_setupCropView;
-(void)_performPresentationTransitionToView:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_selectOriginalCropButton;
-(void)_performPresentationTransition:(id)arg1 ;
-(void)_performDismissalTransition:(id)arg1 ;
-(void)_cropboxAnimateToFrame:(CGRect)arg1 rotate:(BOOL)arg2 angle:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)swapInHighResolutionImage:(id)arg1 ;
-(void)_didChangeAspectRatio;
-(id)_getCurrentCropPointsInImageCoordinates;
-(void)_resetOriginalConstraintFrame;
-(void)_resetSquareConstraintFrame;
-(void)_selectSquareCropButton;
-(void)rotationButtonDidPress;
-(void)originalCropButtonDidPress;
-(void)squareCropButtonDidPress;
-(id)_portraitPictureStartingCropConfiguration;
-(void)fixedCropFrameRotationButtonDidPress;
-(void)moveAndScaleViewDidCancel:(id)arg1 ;
-(void)moveAndScaleViewDidConfirm:(id)arg1 ;
-(void)moveAndScaleViewDidDrag;
-(void)moveAndScaleViewDidZoom;
-(BOOL)editedPhotoUsingFixedCropFrame;
-(void)setCurrentCropInfo:(FBPhotoCropInfo *)arg1 ;
-(UIImage *)imageToCrop;
-(void)setDelegate:(id<FBComposerCropViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBComposerCropViewControllerDelegate>)delegate;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(UIImageView *)imageView;
-(BOOL)accessibilityPerformEscape;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)panReceived:(id)arg1 ;
@end

