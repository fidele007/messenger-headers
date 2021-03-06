/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBInjecting.h>

@protocol MNSaveAttachmentControlling;
@class FBProviderMapData, MNPhotoViewImageDownloadController, MNVideoAttachmentGetterCoordinator, MNForwardMessageHandler, MNSavePhotoController, MNLoadingViewController, MNMessagesViewPresenter, MNNavigationCoordinator, MNThreadNavigationCoordinator, MNIntentHandler, MNStickerStorePresenter, MNMessengerCodeImageDownloader, MNProfileImageViewController, MNUserStore, MNThreadStore, MNThreadContextManager, FBUserSession, FBMAppProperties, MNSecureMessagingServiceProvider, NSString;

@interface MNViewPreviewingHandlerInjector : NSObject <FBInjecting> {

	FBProviderMapData* _mapData;
	MNPhotoViewImageDownloadController* _photoViewImageDownloadController;
	MNVideoAttachmentGetterCoordinator* _videoAttachmentGetterCoordinator;
	MNForwardMessageHandler* _forwardMessageHandler;
	id<MNSaveAttachmentControlling> _saveAttachmentController;
	MNSavePhotoController* _savePhotoController;
	MNLoadingViewController* _loadingViewController;
	MNMessagesViewPresenter* _messagesViewPresenter;
	MNNavigationCoordinator* _navigationCoordinator;
	MNThreadNavigationCoordinator* _threadNavigationCoordinator;
	MNIntentHandler* _intentHandler;
	MNStickerStorePresenter* _stickerStorePresenter;
	MNMessengerCodeImageDownloader* _messengerCodeImageDownloader;
	MNProfileImageViewController* _profileImageViewController;
	MNUserStore* _userStore;
	MNThreadStore* _threadStore;
	MNThreadContextManager* _threadContextManager;
	FBUserSession* _session;
	FBMAppProperties* _appProperties;
	MNSecureMessagingServiceProvider* _secureMessagingServiceProvider;

}

@property (nonatomic,readonly) MNPhotoViewImageDownloadController * photoViewImageDownloadController;              //@synthesize photoViewImageDownloadController=_photoViewImageDownloadController - In the implementation block
@property (nonatomic,readonly) MNVideoAttachmentGetterCoordinator * videoAttachmentGetterCoordinator;              //@synthesize videoAttachmentGetterCoordinator=_videoAttachmentGetterCoordinator - In the implementation block
@property (nonatomic,readonly) MNForwardMessageHandler * forwardMessageHandler;                                    //@synthesize forwardMessageHandler=_forwardMessageHandler - In the implementation block
@property (nonatomic,readonly) id<MNSaveAttachmentControlling> saveAttachmentController;                           //@synthesize saveAttachmentController=_saveAttachmentController - In the implementation block
@property (nonatomic,readonly) MNSavePhotoController * savePhotoController;                                        //@synthesize savePhotoController=_savePhotoController - In the implementation block
@property (nonatomic,readonly) MNLoadingViewController * loadingViewController;                                    //@synthesize loadingViewController=_loadingViewController - In the implementation block
@property (nonatomic,readonly) MNMessagesViewPresenter * messagesViewPresenter;                                    //@synthesize messagesViewPresenter=_messagesViewPresenter - In the implementation block
@property (nonatomic,readonly) MNNavigationCoordinator * navigationCoordinator;                                    //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,readonly) MNThreadNavigationCoordinator * threadNavigationCoordinator;                        //@synthesize threadNavigationCoordinator=_threadNavigationCoordinator - In the implementation block
@property (nonatomic,readonly) MNIntentHandler * intentHandler;                                                    //@synthesize intentHandler=_intentHandler - In the implementation block
@property (nonatomic,readonly) MNStickerStorePresenter * stickerStorePresenter;                                    //@synthesize stickerStorePresenter=_stickerStorePresenter - In the implementation block
@property (nonatomic,readonly) MNMessengerCodeImageDownloader * messengerCodeImageDownloader;                      //@synthesize messengerCodeImageDownloader=_messengerCodeImageDownloader - In the implementation block
@property (nonatomic,readonly) MNProfileImageViewController * profileImageViewController;                          //@synthesize profileImageViewController=_profileImageViewController - In the implementation block
@property (nonatomic,readonly) MNUserStore * userStore;                                                            //@synthesize userStore=_userStore - In the implementation block
@property (nonatomic,readonly) MNThreadStore * threadStore;                                                        //@synthesize threadStore=_threadStore - In the implementation block
@property (nonatomic,readonly) MNThreadContextManager * threadContextManager;                                      //@synthesize threadContextManager=_threadContextManager - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                                            //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) FBMAppProperties * appProperties;                                                   //@synthesize appProperties=_appProperties - In the implementation block
@property (nonatomic,readonly) MNSecureMessagingServiceProvider * secureMessagingServiceProvider;                  //@synthesize secureMessagingServiceProvider=_secureMessagingServiceProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(MNNavigationCoordinator *)navigationCoordinator;
-(MNThreadNavigationCoordinator *)threadNavigationCoordinator;
-(MNThreadStore *)threadStore;
-(MNProfileImageViewController *)profileImageViewController;
-(MNUserStore *)userStore;
-(MNPhotoViewImageDownloadController *)photoViewImageDownloadController;
-(MNSecureMessagingServiceProvider *)secureMessagingServiceProvider;
-(MNStickerStorePresenter *)stickerStorePresenter;
-(id<MNSaveAttachmentControlling>)saveAttachmentController;
-(MNVideoAttachmentGetterCoordinator *)videoAttachmentGetterCoordinator;
-(FBMAppProperties *)appProperties;
-(MNThreadContextManager *)threadContextManager;
-(MNSavePhotoController *)savePhotoController;
-(MNMessagesViewPresenter *)messagesViewPresenter;
-(id)nonCachedMessagesViewByDescriptorPresentationStrategy;
-(id)nonCachedMontageNavigationCoordinator;
-(MNForwardMessageHandler *)forwardMessageHandler;
-(MNMessengerCodeImageDownloader *)messengerCodeImageDownloader;
-(MNIntentHandler *)intentHandler;
-(id)initWithProviderMapData:(id)arg1 ;
-(MNLoadingViewController *)loadingViewController;
-(FBUserSession *)session;
@end

