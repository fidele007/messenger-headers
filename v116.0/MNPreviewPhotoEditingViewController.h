/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBContainerViewController.h>
#import <Messenger/MNPhotoEditingTextAnimatedViewControllerDelegate.h>
#import <Messenger/MNPhotoEditingControlsViewDelegate.h>

@protocol MNPreviewPhotoEditingControlsViewControllerDelegate;
@class FBDrawViewController, MNPhotoEditingTextAnimatedViewController, UIView, MNPhotoEditingControlsView;

@interface MNPreviewPhotoEditingViewController : FBContainerViewController <MNPhotoEditingTextAnimatedViewControllerDelegate, MNPhotoEditingControlsViewDelegate> {

	FBDrawViewController* _drawingController;
	MNPhotoEditingTextAnimatedViewController* _textController;
	UIView* _mediaView;
	MNPhotoEditingControlsView* _editingControlsView;
	BOOL _isFullscreen;
	id<MNPreviewPhotoEditingControlsViewControllerDelegate> _delegate;
	long long _currentlySelectedControl;

}

@property (assign,nonatomic,__weak) id<MNPreviewPhotoEditingControlsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long currentlySelectedControl;                                                   //@synthesize currentlySelectedControl=_currentlySelectedControl - In the implementation block
-(void)_updateEditingState;
-(id)initWithMediaView:(id)arg1 isFullScreen:(BOOL)arg2 ;
-(id)renderEditsOntoImage:(id)arg1 ;
-(BOOL)hasDrawingEdits;
-(BOOL)hasTextEdits;
-(void)photoEditingControlsViewDidPressDrawButton:(id)arg1 ;
-(void)photoEditingControlsViewDidPressTextButton:(id)arg1 ;
-(void)_initializeViewControllers;
-(void)_addEditingController:(id)arg1 ;
-(void)setCurrentlySelectedControl:(long long)arg1 ;
-(void)disableEditingMode;
-(long long)currentlySelectedControl;
-(id)renderEditsOntoImage:(id)arg1 shouldDownscale:(BOOL)arg2 ;
-(void)_initializeDrawViewControllerIfNeeded;
-(void)_initializeTextViewControllerIfNeeded;
-(id)_drawingTraits;
-(BOOL)photoEditingTextAnimatedViewController:(id)arg1 intersectsWithTrashButton:(id)arg2 ;
-(void)photoEditingTextAnimatedViewController:(id)arg1 showTrashButton:(BOOL)arg2 ;
-(void)setDelegate:(id<MNPreviewPhotoEditingControlsViewControllerDelegate>)arg1 ;
-(id<MNPreviewPhotoEditingControlsViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLoad;
-(void)clear;
@end

