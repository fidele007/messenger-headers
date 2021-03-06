/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAttachmentStyleViewFactory.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@protocol FBIntentHandler, MNAvatarImageDecorating, MNModalPresentation;
@class MNThreadImageManager, MNProfileImageViewController, FBMobileConfigContextManager, FBWebRTCCallabilityAwareCallController, MNAddMessengerContactController, NSString;

@interface MNContactShareAttachmentViewFactory : NSObject <MNAttachmentStyleViewFactory, FBViewerContextClassProvidable> {

	id<FBIntentHandler> _intentHandler;
	id<MNAvatarImageDecorating> _avatarImageDecoration;
	id<MNModalPresentation> _modalPresenter;
	MNThreadImageManager* _threadImageManager;
	MNProfileImageViewController* _profileImageViewController;
	FBMobileConfigContextManager* _configManager;
	FBWebRTCCallabilityAwareCallController* _callController;
	MNAddMessengerContactController* _addMessengerContactController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)newAttachmentView;
-(id)newAttachmentViewController;
-(id)initWithIntentHandlerProvider:(id)arg1 threadImageManager:(id)arg2 profileImageViewController:(id)arg3 avatarImageDecoration:(id)arg4 modalPresenter:(id)arg5 configManager:(id)arg6 callController:(id)arg7 addMessengerContactController:(id)arg8 ;
-(Class)attachmentViewClass;
@end

