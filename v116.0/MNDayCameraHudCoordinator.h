/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:51 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMontageComposerHudNavigationListener.h>
#import <Messenger/MNMontageComposerHudPreviewListener.h>
#import <Messenger/MNMontageComposerHudCoordinating.h>

@protocol MNCameraSettingsInterface, MNDayCameraHudCoordinatorDelegate;
@class FBMobileConfigContextManager, MNMontageComposerEditingListenerAnnouncer, MNMontageArtPickerStateListenerAnnouncer, MNMontageCameraStateListenerAnnouncer, MNMontageMediaPickerListenerAnnouncer, FBLazyCreator, NSString;

@interface MNDayCameraHudCoordinator : NSObject <MNMontageComposerHudNavigationListener, MNMontageComposerHudPreviewListener, MNMontageComposerHudCoordinating> {

	FBMobileConfigContextManager* _configManager;
	id<MNCameraSettingsInterface> _cameraSettings;
	/*^block*/id _hudCreator;
	MNMontageComposerEditingListenerAnnouncer* _editingAnnouncer;
	MNMontageArtPickerStateListenerAnnouncer* _artPickerStateAnnouncer;
	MNMontageCameraStateListenerAnnouncer* _cameraStateAnnouncer;
	MNMontageMediaPickerListenerAnnouncer* _mediaPickerAnnouncer;
	FBLazyCreator* _mediaPickerHudControllerCreator;
	FBLazyCreator* _cameraHudControllerCreator;
	FBLazyCreator* _colorBackgroundHudControllerCreator;
	FBLazyCreator* _previewHudControllerCreator;
	id<MNDayCameraHudCoordinatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNDayCameraHudCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addEditingStateListener:(id)arg1 ;
-(void)montageComposerHudDidTapClose;
-(void)montageComposerHudDidTapBack;
-(void)montageComposerHudDidTapNextWithBadgeCount:(long long)arg1 ;
-(void)montageComposerHudDidTapCamera;
-(void)montageComposerHudDidTapCanvas;
-(void)montageComposerHudDidTapMedia;
-(void)montageComposerHudDidTapFeaturedSectionButton;
-(void)montageComposerHudDidTapXRayButton;
-(void)montageComposerHudDidTapBackgroundColor;
-(void)montageComposerHudDidTapSave;
-(void)montageComposerHudDidTapMute;
-(void)montageComposerHudDidTapHDButton;
-(void)montageComposerHudDidTapMoreActionButton:(id)arg1 ;
-(void)montageComposerHudDidTapShare;
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
-(void)didSetEditingState:(id)arg1 ;
-(void)didUpdateOverlayContent:(BOOL)arg1 ;
-(void)didSetArtPickerState:(id)arg1 ;
-(void)montageMediaPickerDidUpdateSelectedAssetsCount:(long long)arg1 ;
-(void)montageMediaPickerDidCancelMultiSelection;
-(void)montageMediaPickerDidSelectAsset:(id)arg1 ;
-(void)montageMediaPickerDidDeselectAsset:(id)arg1 ;
-(id)initWithConfigManager:(id)arg1 cameraSettings:(id)arg2 ;
-(id)_newComposerMediaPickerHudController;
-(id)_newComposerCameraHudController;
-(id)_newComposerColorBackgroundHudController;
-(id)_newComposerPreviewHudController;
-(id)_newHudControllerWithDisplayStrategy:(id)arg1 ;
-(void)_addListenersForHudController:(id)arg1 ;
-(void)addCameraStateListener:(id)arg1 ;
-(void)addArtPickerStateListener:(id)arg1 ;
-(void)setDelegate:(id<MNDayCameraHudCoordinatorDelegate>)arg1 ;
-(id<MNDayCameraHudCoordinatorDelegate>)delegate;
@end

