/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAbstractComposerTrayExtension.h>
#import <Messenger/MNMediaTrayWrapperViewControllerDelegate.h>
#import <Messenger/MNMediaAttachmentPickerDelegate.h>
#import <Messenger/MNMediaPickerControllerDelegate.h>
#import <Messenger/FBMediaVideoEditorViewControllerDelegate.h>
#import <UIKit/UIDocumentPickerDelegate.h>
#import <Messenger/MNPermissionsViewControllerDelegate.h>
#import <Messenger/MNDayCameraControllerDelegate.h>
#import <Messenger/MNComposerPrimaryExtension.h>

@protocol FBProvider, MNModalPresentation, MNAlertControllerPresenting, MNPhotosDataRequesting, MNActionNuxPresenter;
@class MNMediaTrayWrapperViewController, ZRTariffedUxSentry, FBUserSession, MNImageUploadCandidateStore, MNMediaPickerPresentationListenerAnnouncer, MNLocalAssetAccessibilityLabelGenerator, NSString, FBLazyCreator, MNLocalAssetAttachmentPreparer, MNMediaPickerController, MNPermissionsViewController, MNMediaVideoEditorViewControllerFactory, MNPhotoEditingViewController, FBMobileConfigContextManager, MNMediaPreuploadHandler, UIColor;

@interface MNComposerMediaExtension : MNAbstractComposerTrayExtension <MNMediaTrayWrapperViewControllerDelegate, MNMediaAttachmentPickerDelegate, MNMediaPickerControllerDelegate, FBMediaVideoEditorViewControllerDelegate, UIDocumentPickerDelegate, MNPermissionsViewControllerDelegate, MNDayCameraControllerDelegate, MNComposerPrimaryExtension> {

	id<FBProvider> _mediaAttachmentPickerProvider;
	id<FBProvider> _photoEditingViewControllerProvider;
	MNMediaTrayWrapperViewController* _mediaTrayWrapperViewController;
	id<MNModalPresentation> _navigationCoordinator;
	id<MNAlertControllerPresenting> _alertControllerPresenter;
	ZRTariffedUxSentry* _zeroRatingSentry;
	FBUserSession* _userSession;
	MNImageUploadCandidateStore* _imageUploadCandidateStore;
	MNMediaPickerPresentationListenerAnnouncer* _mediaPickerPresentationAnnouncer;
	MNLocalAssetAccessibilityLabelGenerator* _assetAccessibilityLabelGenerator;
	NSString* _applicationName;
	FBLazyCreator* _composerIconCreator;
	MNLocalAssetAttachmentPreparer* _nativeMediaAttachmentPreparer;
	BOOL _editingEnabledForPhoto;
	BOOL _editingEnabledForVideo;
	BOOL _photoOnly;
	MNMediaPickerController* _mediaPickerController;
	id<FBProvider> _mediaPickerControllerProvider;
	MNPermissionsViewController* _permissionsViewController;
	MNMediaVideoEditorViewControllerFactory* _mediaVideoEditorViewControllerFactory;
	MNPhotoEditingViewController* _photoEditingViewController;
	FBMobileConfigContextManager* _configManager;
	id<MNPhotosDataRequesting> _photoDataRequester;
	FBLazyCreator* _photosDataSourceCreator;
	FBLazyCreator* _dayCameraControllerCreator;
	FBLazyCreator* _montageComposerViewControllerCreator;
	MNMediaPreuploadHandler* _mediaPreuploadHandler;
	id<MNActionNuxPresenter> _actionNuxPresenter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNComposerExtensionDelegate> delegate; 
@property (assign,nonatomic,__weak) id<MNComposerExtensionEditDelegate> editDelegate; 
@property (assign,nonatomic,__weak) id<MNComposerExtensionSendDelegate> sendDelegate; 
@property (nonatomic,copy,readonly) NSString * placeholderText; 
@property (nonatomic,copy,readonly) NSString * searchPlaceholderText; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,retain) id<MNActionNuxPresenter> actionNuxPresenter;                          //@synthesize actionNuxPresenter=_actionNuxPresenter - In the implementation block
@property (nonatomic,readonly) BOOL autoFocusSearchBar; 
@property (nonatomic,copy,readonly) id longPressGestureHandler; 
@property (nonatomic,readonly) UIView*<MNComposerActionButton> primaryActionButton; 
@property (nonatomic,readonly) long long primaryExtensionType; 
-(id)_composerIcon;
-(id)extensionModule;
-(void)didSelect:(BOOL)arg1 ;
-(BOOL)shouldPresent:(BOOL)arg1 ;
-(id)viewControllerForPresentation;
-(id)initWithPhotoEditingViewControllerProvider:(id)arg1 navigationCoordinator:(id)arg2 alertControllerPresenter:(id)arg3 userSession:(id)arg4 configManager:(id)arg5 imageUploadCandidateStore:(id)arg6 mediaPickerPresentationAnnouncer:(id)arg7 mediaAttachmentPickerProvider:(id)arg8 assetAccessibilityLabelGenerator:(id)arg9 mediaPickerControllerProvider:(id)arg10 applicationName:(id)arg11 composerIconCreatorProvider:(id)arg12 editingEnabledForPhoto:(BOOL)arg13 editingEnabledForVideo:(BOOL)arg14 isPhotoOnly:(BOOL)arg15 photoDataRequester:(id)arg16 dayCameraComposerViewControllerProvider:(id)arg17 mediaPreuploadHandler:(id)arg18 ;
-(id)dayCameraControllerSendingContextToken:(id)arg1 ;
-(void)dayCameraController:(id)arg1 didGenerateAttachments:(id)arg2 clientTags:(id)arg3 sendingContextToken:(id)arg4 ;
-(void)dayCameraControllerDidDismiss:(id)arg1 shouldPopToInbox:(BOOL)arg2 ;
-(id)dayCameraControllerContactsToPreselect:(id)arg1 ;
-(void)didUpdateComposingContext;
-(id<MNActionNuxPresenter>)actionNuxPresenter;
-(void)setActionNuxPresenter:(id<MNActionNuxPresenter>)arg1 ;
-(BOOL)autoFocusSearchBar;
-(id)longPressGestureHandler;
-(UIView*<MNComposerActionButton>)primaryActionButton;
-(long long)primaryExtensionType;
-(void)_presentPhotoPicker;
-(void)_initMediaTrayWrapperViewControllerIfNeeded;
-(void)_sendPhotoAssets:(id)arg1 withSendingContextToken:(id)arg2 ;
-(void)_sendVideoAssets:(id)arg1 withSendingContextToken:(id)arg2 ;
-(void)_prepareAndSendAttachmentsFromAssets:(id)arg1 withSendingContextToken:(id)arg2 ;
-(void)_didloadAssets:(id)arg1 withSendingContextToken:(id)arg2 ;
-(void)_sendAttachment:(id)arg1 withSendingContextToken:(id)arg2 ;
-(void)_photoEditingViewControllerDidCompleteEditingWithImage:(id)arg1 ;
-(void)_loadAndSendSelectedAssets;
-(void)_mediaPickerControllerPresentMediaPicker;
-(void)_presentPermissionsViewController;
-(void)_initPermissionsViewControllerIfNecessary;
-(void)_sendPhotoAttachments:(id)arg1 withSendingContextToken:(id)arg2 ;
-(void)_sendVideoAttachments:(id)arg1 withSendingContextToken:(id)arg2 ;
-(void)_delegateComposerExtensionDidDismissVC:(id)arg1 ;
-(void)_showNotSupportedImageFormatError;
-(void)_sendFileWithURL:(id)arg1 ;
-(void)_showLoadingError:(id)arg1 forFileWithURL:(id)arg2 ;
-(void)_sendWithAttachmentContent:(id)arg1 logEvent:(id)arg2 analyticsModule:(id)arg3 analyticsExtras:(id)arg4 ;
-(void)mediaTrayWrapperViewControllerDidSelectEditPhoto:(id)arg1 image:(id)arg2 identifier:(id)arg3 ;
-(void)mediaTrayWrapperViewControllerDidSelectEditVideo:(id)arg1 fbVideoAsset:(id)arg2 urlAsset:(id)arg3 thumbnail:(id)arg4 identifier:(id)arg5 ;
-(void)mediaTrayWrapperViewControllerDidSelectSendAssets:(id)arg1 ;
-(void)mediaTrayWrapperViewControllerDidSelectPhotoPicker:(id)arg1 ;
-(void)mediaAttachmentPicker:(id)arg1 presentMediaPicker:(id)arg2 mediaPickerController:(id)arg3 animated:(BOOL)arg4 ;
-(void)mediaAttachmentPicker:(id)arg1 dismissMediaPicker:(id)arg2 withAttachment:(id)arg3 animated:(BOOL)arg4 ;
-(void)mediaAttachmentPicker:(id)arg1 didUpdateSelectionState:(BOOL)arg2 forAttachment:(id)arg3 ;
-(void)mediaPickerControllerPresentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)mediaPickerControllerDismissViewController:(id)arg1 didSendAttachments:(BOOL)arg2 animated:(BOOL)arg3 ;
-(id)mediaPickerControllerSendingContextToken:(id)arg1 ;
-(BOOL)mediaPickerControllerDidFinishLoadingAttachments:(id)arg1 withSendingContextToken:(id)arg2 ;
-(void)mediaPickerController:(id)arg1 didTapEditForAsset:(id)arg2 image:(id)arg3 initialEditInfo:(id)arg4 presentingViewController:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)videoEditorViewControllerFinished:(id)arg1 isCancelled:(BOOL)arg2 ;
-(void)videoEditorViewController:(id)arg1 didChangeHDUploadSelection:(BOOL)arg2 ;
-(void)permissionsViewControllerDidPressDismissButton:(id)arg1 ;
-(void)permissionsViewControllerDidPressRequest:(id)arg1 ;
-(id)_trayPresentationStrategy;
-(id)extensionIdentifier;
-(long long)category;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)documentPicker:(id)arg1 didPickDocumentAtURL:(id)arg2 ;
-(id)tabBarItem;
-(void)tearDown;
@end

