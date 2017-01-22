/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMontageComposerHudCameraListener.h>
#import <Messenger/MNMontageComposerHudEditListener.h>
#import <Messenger/MNMontageComposerHudNavigationListener.h>
#import <Messenger/MNMontageComposerHudPreviewListener.h>
#import <Messenger/MNMontageComposerHudCoordinating.h>

@protocol MNDayCameraContainerHudCoordinatorDelegate;
@class FBMobileConfigContextManager, MNMontageComposerEditingListenerAnnouncer, MNMontageArtPickerStateListenerAnnouncer, MNMontageCameraStateListenerAnnouncer, MNMontageMediaPickerListenerAnnouncer, FBLazyCreator, NSString;

@interface MNDayCameraContainerHudCoordinator : NSObject <MNMontageComposerHudCameraListener, MNMontageComposerHudEditListener, MNMontageComposerHudNavigationListener, MNMontageComposerHudPreviewListener, MNMontageComposerHudCoordinating> {

	FBMobileConfigContextManager* _configManager;
	/*^block*/id _hudCreator;
	MNMontageComposerEditingListenerAnnouncer* _editingAnnouncer;
	MNMontageArtPickerStateListenerAnnouncer* _artPickerStateAnnouncer;
	MNMontageCameraStateListenerAnnouncer* _cameraStateAnnouncer;
	MNMontageMediaPickerListenerAnnouncer* _mediaPickerAnnouncer;
	FBLazyCreator* _composerMediaPickerHudControllerCreator;
	FBLazyCreator* _composerCameraHudControllerCreator;
	FBLazyCreator* _composerColorBackgroundHudControllerCreator;
	FBLazyCreator* _composerPreviewHudControllerCreator;
	FBLazyCreator* _containerCameraNavigationHudControllerCreator;
	FBLazyCreator* _containerCameraControlHudControllerCreator;
	FBLazyCreator* _containerPreviewNavigationHudControllerCreator;
	FBLazyCreator* _containerMediaPickerHudControllerCreator;
	BOOL _shouldForceNonCombo;
	id<MNDayCameraContainerHudCoordinatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNDayCameraContainerHudCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConfigManager:(id)arg1 shouldForceNonCombo:(BOOL)arg2 ;
-(void)montageComposerHudDidTapClose;
-(void)montageComposerHudDidTapBack;
-(void)montageComposerHudDidTapNextWithBadgeCount:(long long)arg1 ;
-(void)montageComposerHudDidTapCamera;
-(void)montageComposerHudDidTapCanvas;
-(void)montageComposerHudDidTapMedia;
-(void)montageComposerHudDidTapArt;
-(void)montageComposerHudDidTapText;
-(void)montageComposerHudDidTapDrawing;
-(void)montageComposerHudDidChangeTextColorTo:(id)arg1 withValue:(double)arg2 ;
-(void)montageComposerHudDidTapUndo;
-(void)montageComposerHudDidChangeDrawColorTo:(id)arg1 ;
-(void)montageComposerHudDidChangeDrawBrushSize:(double)arg1 ;
-(void)didSetArtPickerState:(id)arg1 ;
-(void)didSetEditingState:(id)arg1 ;
-(void)didUpdateOverlayContent:(BOOL)arg1 ;
-(void)setHudCreator:(/*^block*/id)arg1 ;
-(unsigned long long)dismissOption;
-(id)mediaPickerHudController;
-(id)cameraHudController;
-(id)cameraHudControllerWithCaptureButton;
-(id)cameraHudControllerWithEditControls;
-(id)colorBackgroundHudController;
-(id)previewHudController;
-(id)previewHudControllerWithEditControls;
-(void)didSetCameraState:(id)arg1 ;
-(void)montageMediaPickerDidUpdateSelectedAssetsCount:(long long)arg1 ;
-(void)montageMediaPickerDidCancelMultiSelection;
-(void)montageMediaPickerDidSelectAsset:(id)arg1 ;
-(void)montageMediaPickerDidDeselectAsset:(id)arg1 ;
-(void)addEditingStateListener:(id)arg1 ;
-(id)_newComposerMediaPickerHudController;
-(id)_newComposerCameraHudController;
-(id)_newComposerColorBackgroundHudController;
-(id)_newComposerPreviewHudController;
-(id)_newContainerCameraNavigationHudController;
-(id)_newContainerCameraControlHudController;
-(id)_newContainerPreviewNavigationHudController;
-(id)_newContainerMediaPickerHudController;
-(id)_newHudControllerWithDisplayStrategy:(id)arg1 ;
-(BOOL)_dayCameraAndMediaPickerComboEnabled;
-(void)_addListenersForHudController:(id)arg1 ;
-(void)montageComposerHudDidTapFlip;
-(void)montageComposerHudDidTapFlash;
-(void)montageComposerHudDidTapBackgroundColor;
-(void)montageComposerHudDidTapSave;
-(void)montageComposerHudDidTapMute;
-(id)containerCameraNavigationHudController;
-(id)containerCameraControlHudController;
-(id)containerPreviewNavigationHudController;
-(id)containerMediaPickerHudController;
-(void)addCameraStateListener:(id)arg1 ;
-(void)addArtPickerStateListener:(id)arg1 ;
-(void)setDelegate:(id<MNDayCameraContainerHudCoordinatorDelegate>)arg1 ;
-(id<MNDayCameraContainerHudCoordinatorDelegate>)delegate;
@end
