/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:55 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBComposerDoodlesViewDelegate.h>
#import <Messenger/FBDrawViewControllerDelegate.h>
#import <Messenger/FBMediaGalleryToolProtocol.h>

@protocol FBMediaGalleryBannerProviderProtocol, FBComposerDoodlesViewControllerDelegate;
@class NSString, UIViewController, UIImage, FBComposerDoodlesView, FBDrawViewController, FBDoodlesInPhotosLogger, FBPhotoCropInfo, UIView, FBUserSession, FBMediaGalleryTopBarConfiguration;

@interface FBComposerDoodlesViewController : UIViewController <FBComposerDoodlesViewDelegate, FBDrawViewControllerDelegate, FBMediaGalleryToolProtocol> {

	NSString* _assetID;
	BOOL _didChangeDoodles;
	id<FBMediaGalleryBannerProviderProtocol> _bannerProvider;
	UIViewController* _bannerViewController;
	UIImage* _doodlesLayer;
	FBComposerDoodlesView* _doodlesView;
	FBDrawViewController* _drawViewController;
	UIImage* _imageToAddDoodles;
	FBDoodlesInPhotosLogger* _logger;
	FBPhotoCropInfo* _photoCropInfo;
	UIImage* _photoOverlayLayer;
	UIView* _privacyMessageView;
	FBUserSession* _session;
	FBMediaGalleryTopBarConfiguration* _topBarConfiguration;
	BOOL _showRevertButton;
	id<FBComposerDoodlesViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBComposerDoodlesViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showRevertButton;                                                    //@synthesize showRevertButton=_showRevertButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)drawViewController:(id)arg1 didChooseColor:(id)arg2 ;
-(void)drawViewControllerDidChangeUndoState:(id)arg1 ;
-(void)drawViewControllerDidStartDrawing:(id)arg1 withAnimationDuration:(double)arg2 ;
-(void)drawViewControllerDidFinishDrawing:(id)arg1 withAnimationDuration:(double)arg2 ;
-(void)mediaGalleryDidPressCurrentTool;
-(void)setShowRevertButton:(BOOL)arg1 ;
-(void)mediaGalleryWillPresentTool:(unsigned long long)arg1 ;
-(id)initWithImage:(id)arg1 photoOverlayLayer:(id)arg2 doodlesLayer:(id)arg3 photoCropInfo:(id)arg4 photoAssetID:(id)arg5 topBarConfiguration:(id)arg6 session:(id)arg7 logger:(id)arg8 bannerProvider:(id)arg9 ;
-(unsigned long long)getMediaGalleryToolType;
-(id)getDoodlesLayer;
-(BOOL)showRevertButton;
-(id)_mergeOldAndNewDoodlesLayer:(id)arg1 newDoodlesLayer:(id)arg2 size:(CGSize)arg3 cropInfo:(id)arg4 ;
-(void)_doodlesControllerDoneWithNavBarHit:(BOOL)arg1 ;
-(void)composerDoodlesViewDidTapDone:(id)arg1 ;
-(void)composerDoodlesViewDidTapCancel:(id)arg1 ;
-(void)composerDoodlesViewDidTapRevert:(id)arg1 ;
-(void)undoPressed;
-(void)resetPressed;
-(void)setDelegate:(id<FBComposerDoodlesViewControllerDelegate>)arg1 ;
-(id<FBComposerDoodlesViewControllerDelegate>)delegate;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
@end

