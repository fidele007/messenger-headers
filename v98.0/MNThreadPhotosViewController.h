/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNThreadPhotosViewControllerBase.h>
#import <Messenger/FBClassInjectable.h>
#import <Messenger/FBModalFullscreenControllerDelegate.h>
#import <Messenger/FBModalFullscreenControllerDataSource.h>
#import <Messenger/MNMosaicLayoutDelegate.h>
#import <Messenger/MNThreadPhotosOverlayViewControllerDelegate.h>
#import <Messenger/MNPhotoViewNodeDelegate.h>
#import <Messenger/MNThreadPhotoViewNodeTouchForwardingViewDelegate.h>
#import <Messenger/MNMediaViewerViewControllerDelegate.h>
#import <Messenger/MNMediaViewerViewControllerDataSource.h>

@protocol MNThreadPhotosViewControllerDelegate;
@class MNThreadPhotosViewControllerInjector, FBLazyCreator, UIView, FBOpenableAttachmentNode, MNNoPhotosInThreadView, MNThreadPhotoViewNodeTouchForwardingView, NSString;

@interface MNThreadPhotosViewController : MNThreadPhotosViewControllerBase <FBClassInjectable, FBModalFullscreenControllerDelegate, FBModalFullscreenControllerDataSource, MNMosaicLayoutDelegate, MNThreadPhotosOverlayViewControllerDelegate, MNPhotoViewNodeDelegate, MNThreadPhotoViewNodeTouchForwardingViewDelegate, MNMediaViewerViewControllerDelegate, MNMediaViewerViewControllerDataSource> {

	MNThreadPhotosViewControllerInjector* _injector;
	FBLazyCreator* _modalFullscreenControllerCreator;
	FBLazyCreator* _openedAttachmentNodeFrameObserverCreator;
	UIView* _touchBlockingUnderlayView;
	FBOpenableAttachmentNode* _openedAttachmentNode;
	MNNoPhotosInThreadView* _noPhotosView;
	long long _modalPresentationState;
	MNThreadPhotoViewNodeTouchForwardingView* _forwardView;
	BOOL _photoControlsOpen;
	BOOL _mediaViewerPresented;
	BOOL _fullScreenMode;
	id<MNThreadPhotosViewControllerDelegate> _delegate;
	FBLazyCreator* _noPhotosViewCreator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) FBLazyCreator * noPhotosViewCreator;                                   //@synthesize noPhotosViewCreator=_noPhotosViewCreator - In the implementation block
@property (assign,nonatomic) BOOL fullScreenMode;                                                   //@synthesize fullScreenMode=_fullScreenMode - In the implementation block
@property (assign,nonatomic,__weak) id<MNThreadPhotosViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(id)analyticsModule;
-(void)handleIntent:(id)arg1 ;
-(id)analyticsExtras;
-(void)_registerForPreviewing;
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(void)tearDownThreadViewModelDependencies;
-(id)modalPresentationStackManager;
-(unsigned long long)scrollPositionForPhotoSelection;
-(void)attachmentNodeDidUnlift:(id)arg1 ;
-(void)attachmentNodeWillOpen:(id)arg1 animated:(BOOL)arg2 ;
-(void)attachmentNodeDidOpen:(id)arg1 ;
-(void)attachmentNodeWillClose:(id)arg1 animated:(BOOL)arg2 ;
-(id)existingModalLayerForAttachmentNode:(id)arg1 ;
-(void)modalFullscreenController:(id)arg1 willMoveToNode:(id)arg2 ;
-(void)modalFullscreenController:(id)arg1 didMoveToNode:(id)arg2 ;
-(void)modalFullscreenController:(id)arg1 didAddNodeToPagingRange:(id)arg2 ;
-(void)modalFullscreenController:(id)arg1 didRemoveNodeFromPagingRange:(id)arg2 ;
-(id)modalFullscreenController:(id)arg1 nodeBeforeNode:(id)arg2 ;
-(id)modalFullscreenController:(id)arg1 nodeAfterNode:(id)arg2 ;
-(void)threadPhotosOverlayViewController:(id)arg1 didTapBackBarButton:(id)arg2 ;
-(id)photoOverlayInfoViewControllerConfigurationForThreadPhotosOverlayViewController:(id)arg1 ;
-(void)threadPhotosOverlayViewController:(id)arg1 didTapAlbumViewButton:(id)arg2 ;
-(void)threadPhotosOverlayViewController:(id)arg1 didTapContextualActionButton:(id)arg2 ;
-(void)threadPhotosOverlayViewController:(id)arg1 didTapPreviousButton:(id)arg2 ;
-(void)threadPhotosOverlayViewController:(id)arg1 didTapNextButton:(id)arg2 ;
-(void)threadPhotosOverlayViewController:(id)arg1 didTapCloseButton:(id)arg2 ;
-(void)threadPhotosOverlayViewController:(id)arg1 didSelectPhotoAtIndexPath:(id)arg2 ;
-(void)threadPhotosOverlayViewController:(id)arg1 willShowPhotoControls:(BOOL)arg2 withDuration:(double)arg3 ;
-(void)setThreadSharedPhotosDataSource:(id)arg1 ;
-(id)initWithInjector:(id)arg1 underlayViewOpacity:(double)arg2 ;
-(void)setNoPhotosViewCreator:(FBLazyCreator *)arg1 ;
-(void)_createNoPhotosView;
-(FBLazyCreator *)noPhotosViewCreator;
-(void)_openedAttachmentNodeFrameDidChange;
-(id)photoViewNodeForPhotoViewModel:(id)arg1 ;
-(unsigned long long)_supportedPhotoGesturesForOpeningNode;
-(unsigned long long)_supportedPhotoGesturesForOpenNode;
-(unsigned long long)_supportedPhotoGesturesForClosingNode;
-(void)_prepareNodeToClose:(id)arg1 ;
-(unsigned long long)_supportedPhotoGesturesForClosedNode;
-(void)_setOpenedAttachmentNode:(id)arg1 ;
-(void)_prepareNodeToDisplayInFullscreen:(id)arg1 ;
-(BOOL)photoViewNodeShouldPerformDefaultSingleTapActionInOpenedState:(id)arg1 ;
-(BOOL)photoViewNodeShouldOpenInMediaViewer:(id)arg1 ;
-(BOOL)photoViewNodeMediaViewerIsInUse:(id)arg1 ;
-(void)_didDismissMediaViewerWithAttachment:(id)arg1 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 aspectRatioForItemAtIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 layout:(id)arg2 hasHeaderInSection:(long long)arg3 ;
-(id)photoViewNodeMask:(id)arg1 ;
-(CGRect)photoViewNodeCloseFrame:(id)arg1 ;
-(id)photoViewNodePresentationView:(id)arg1 ;
-(id)photoViewNodeHostView:(id)arg1 ;
-(void)photoViewNodeWillDisplayImage:(id)arg1 ;
-(void)photoViewNodeDidEndDisplayImage:(id)arg1 ;
-(void)photoViewNodeDidSingleTapInOpenedState:(id)arg1 ;
-(void)photoViewNodeWillOpenInMediaViewer:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)threadPhotoViewNodeTouchForwardingView:(id)arg1 pointInside:(CGPoint)arg2 withEvent:(id)arg3 ;
-(BOOL)mediaViewerViewControllerShouldEnablePhotoEditing:(id)arg1 ;
-(void)mediaViewerViewControllerDidSelectDismiss:(id)arg1 ;
-(id)mediaViewerViewController:(id)arg1 messageForPhotoViewModel:(id)arg2 ;
-(id)mediaViewerViewController:(id)arg1 closeMaskForPhotoViewModel:(id)arg2 ;
-(void)mediaViewerViewController:(id)arg1 didCommitSendingWithAttachment:(id)arg2 ;
-(id)mediaViewerViewController:(id)arg1 photoViewModelBeforePhotoViewModel:(id)arg2 ;
-(id)mediaViewerViewController:(id)arg1 photoViewModelAfterPhotoViewModel:(id)arg2 ;
-(void)takeOverPhotoViewNode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_userNameForUserWithId:(id)arg1 ;
-(void)_updateNoPhotosViewVisibility;
-(BOOL)fullScreenMode;
-(void)setFullScreenMode:(BOOL)arg1 ;
-(void)setDelegate:(id<MNThreadPhotosViewControllerDelegate>)arg1 ;
-(id<MNThreadPhotosViewControllerDelegate>)delegate;
-(id)collectionViewLayout;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(BOOL)prefersStatusBarHidden;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)collectionView;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end

