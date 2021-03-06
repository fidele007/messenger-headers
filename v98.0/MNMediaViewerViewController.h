/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/FBAnalyticsInfoSource.h>
#import <Messenger/FBKeyCommandSource.h>
#import <Messenger/FBDirectionalPanGestureRecognizerDelegate.h>
#import <Messenger/FBPagingViewDelegate.h>
#import <Messenger/FBPagingViewInfiniteDataSource.h>
#import <Messenger/MNMediaViewerHudContainerInteractionListener.h>
#import <Messenger/MNMediaViewerTransitionControllerDelegate.h>
#import <Messenger/MNMediaViewerTransitionContextProviding.h>
#import <Messenger/MNMediaViewerTransitionListener.h>
#import <Messenger/MNMontageComposerEditingListener.h>
#import <Messenger/MNMontageComposerViewControllerDelegate.h>
#import <Messenger/MNZoomingPhotoViewDelegate.h>

@protocol MNPhotoViewImageDownloadControlling, MNMediaViewerViewControllerDelegate, MNMediaViewerViewControllerDataSource, MNMediaViewerActionHandling;
@class FBLazyCreator, MNImageUploadCandidateStore, FBProvider, MNMediaViewerTransitionController, MNPhotoViewModel, MNImage, NSArray, MNMediaViewerState, MNMediaViewerStateListenerAnnouncer, MNMontageComposerEditingState, NSString;

@interface MNMediaViewerViewController : UIViewController <FBAnalyticsInfoSource, FBKeyCommandSource, FBDirectionalPanGestureRecognizerDelegate, FBPagingViewDelegate, FBPagingViewInfiniteDataSource, MNMediaViewerHudContainerInteractionListener, MNMediaViewerTransitionControllerDelegate, MNMediaViewerTransitionContextProviding, MNMediaViewerTransitionListener, MNMontageComposerEditingListener, MNMontageComposerViewControllerDelegate, MNZoomingPhotoViewDelegate> {

	FBLazyCreator* _pagingViewCreator;
	FBLazyCreator* _panGestureRecognizerCreator;
	FBLazyCreator* _mediaViewerHudContainerControllerCreator;
	FBLazyCreator* _composerViewControllerCreator;
	id<MNPhotoViewImageDownloadControlling> _imageDownloadController;
	MNImageUploadCandidateStore* _imageUploadCandidateStore;
	FBProvider* _composerViewControllerProvider;
	MNMediaViewerTransitionController* _transitionController;
	MNPhotoViewModel* _initialPhotoViewModel;
	MNImage* _initialImage;
	NSArray* _keyCommands;
	MNMediaViewerState* _state;
	MNMediaViewerStateListenerAnnouncer* _stateAnnouncer;
	BOOL _hasOverlayContent;
	MNMontageComposerEditingState* _editingState;
	id<MNMediaViewerViewControllerDelegate> _delegate;
	id<MNMediaViewerViewControllerDataSource> _dataSource;
	id<MNMediaViewerActionHandling> _actionHandler;

}

@property (assign,nonatomic,__weak) id<MNMediaViewerViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<MNMediaViewerViewControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<MNMediaViewerActionHandling> actionHandler;                     //@synthesize actionHandler=_actionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)analyticsExtras;
-(id)fb_keyCommands;
-(void)_didTapNextButton:(id)arg1 ;
-(void)_didTapPrevButton:(id)arg1 ;
-(void)_didTapCloseButton:(id)arg1 ;
-(void)setTransitionContextProvider:(id)arg1 transitionListener:(id)arg2 initialPhotoViewModel:(id)arg3 initialImage:(id)arg4 ;
-(id)transitionContextForPhotoViewModel:(id)arg1 ;
-(void)montageComposerViewControllerDidDismiss:(id)arg1 userInitiated:(BOOL)arg2 withContentPostedToContacts:(id)arg3 ;
-(void)montageComposerViewControllerDidBecomeReadyToRecord:(id)arg1 ;
-(BOOL)montageComposerViewControllerShouldUseBuiltinBroadcastFlow:(id)arg1 ;
-(BOOL)montageComposerViewControllerShouldPreselectMontageContact:(id)arg1 ;
-(id)montageComposerViewControllerContactsToHoistAndPreselect:(id)arg1 ;
-(id)montageComposerViewControllerExtraClientTags:(id)arg1 ;
-(BOOL)montageComposerViewControllerCanScrollToSwitchState:(id)arg1 ;
-(void)montageComposerViewController:(id)arg1 didSetState:(id)arg2 ;
-(void)montageComposerViewController:(id)arg1 didUpdateIsCameraAuthorized:(BOOL)arg2 ;
-(void)mediaViewerTransitionStateDidUpdate:(long long)arg1 ;
-(id)initWithImageDownloadController:(id)arg1 imageUploadCandidateStore:(id)arg2 composerViewControllerProvider:(id)arg3 ;
-(void)didTapActionButton:(id)arg1 ;
-(void)pagingView:(id)arg1 didEndDisplayingView:(id)arg2 ;
-(void)pagingViewDidChangePageIndex:(id)arg1 ;
-(void)didTapDismissButton:(id)arg1 ;
-(void)didTapNextButton;
-(void)didSetEditingState:(id)arg1 ;
-(void)didUpdateOverlayContent:(BOOL)arg1 ;
-(id)_createNewPagingView;
-(id)_createNewPanGestureRecognizer;
-(id)_createNewMediaViewerHudContainerController;
-(id)_createNewComposerViewController;
-(void)_setMediaViewerState:(id)arg1 ;
-(void)_logMediaViewerOpened;
-(id)_currentPhotoViewModel;
-(id)_initialPhotoViewModel;
-(id)_photoViewForPhotoViewModel:(id)arg1 initialImage:(id)arg2 ;
-(void)_didTapToClose:(id)arg1 ;
-(void)_handleActionButton:(id)arg1 onViewingStateWithPhotoViewModel:(id)arg2 ;
-(void)_handleActionButtonOnEditingState:(id)arg1 ;
-(void)_handleActionButton:(id)arg1 onComposedImage:(id)arg2 ;
-(void)_logMediaViewerSendTapped;
-(void)_logMediaViewerGenerateComposedImageFailed;
-(void)_commitSendingWithAttachment:(id)arg1 ;
-(void)_editingStateDidUpdate;
-(void)_handlePanForInteractiveDismissal:(id)arg1 ;
-(void)addStateListener:(id)arg1 ;
-(void)_setEditingEnabled:(BOOL)arg1 ;
-(void)_updateComposerContent;
-(id)pagingView:(id)arg1 previousViewForView:(id)arg2 ;
-(id)pagingView:(id)arg1 nextViewForView:(id)arg2 ;
-(id)mediaViewerTransitionControllerNeedsPhotoViewModelForAnimation:(id)arg1 ;
-(void)mediaViewerTransitionControllerNeedsDismissal:(id)arg1 ;
-(void)zoomingPhotoViewWillBeginZoom:(id)arg1 ;
-(void)zoomingPhotoViewDidEndZoom:(id)arg1 ;
-(void)zoomingPhotoViewWillBeginLoading:(id)arg1 ;
-(void)zoomingPhotoViewDidEndLoading:(id)arg1 ;
-(void)removeStateListener:(id)arg1 ;
-(BOOL)montageComposerViewControllerShouldUseBuiltinMediaPicker:(id)arg1 ;
-(void)montageComposerViewControllerDidTapMedia:(id)arg1 ;
-(void)setDataSource:(id<MNMediaViewerViewControllerDataSource>)arg1 ;
-(void)setDelegate:(id<MNMediaViewerViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNMediaViewerViewControllerDataSource>)dataSource;
-(id<MNMediaViewerViewControllerDelegate>)delegate;
-(BOOL)prefersStatusBarHidden;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id<MNMediaViewerActionHandling>)actionHandler;
-(void)setActionHandler:(id<MNMediaViewerActionHandling>)arg1 ;
@end

