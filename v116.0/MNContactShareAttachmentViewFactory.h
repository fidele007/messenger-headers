/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:50 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAttachmentStyleViewFactory.h>
#import <FBSharedFramework/FBViewerContextClassProvidable.h>

@protocol FBIntentHandler, MNAvatarImageDecorating, MNModalPresentation, MNContactShareCardHandler;
@class MNThreadImageManager, MNProfileImageViewController, FBMobileConfigContextManager, FBWebRTCCallStarter, MNAddMessengerContactController, MNUserStore, NSString;

@interface MNContactShareAttachmentViewFactory : NSObject <MNAttachmentStyleViewFactory, FBViewerContextClassProvidable> {

	id<FBIntentHandler> _intentHandler;
	id<MNAvatarImageDecorating> _avatarImageDecoration;
	id<MNModalPresentation> _modalPresenter;
	MNThreadImageManager* _threadImageManager;
	MNProfileImageViewController* _profileImageViewController;
	FBMobileConfigContextManager* _configManager;
	FBWebRTCCallStarter* _callStarter;
	MNAddMessengerContactController* _addMessengerContactController;
	id<MNContactShareCardHandler> _contactShareCardHandler;
	MNUserStore* _userStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)newAttachmentView;
-(id)newAttachmentCellElementController;
-(id)initWithIntentHandlerProvider:(id)arg1 threadImageManager:(id)arg2 profileImageViewController:(id)arg3 avatarImageDecoration:(id)arg4 modalPresenter:(id)arg5 configManager:(id)arg6 callStarter:(id)arg7 addMessengerContactController:(id)arg8 contactShareCardHandlerProvider:(id)arg9 userStore:(id)arg10 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(Class)attachmentViewClass;
@end

