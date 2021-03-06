/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:32 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBViewerContextInjecting.h>

@protocol FBMPaymentsBridge, FBMAttachmentURLFormatting;
@class FBProviderMapData, MNNavigationCoordinator, MNThreadNavigationCoordinator, MNForwardMessageViewControllerFactory, FBUserSession, MNImageRequester, FBMobileConfigContextManager, MNLocalNotificationController, MNBroadcastThreadPresenter, MNSoundController, NSString;

@interface MNForwardMessageHandlerInjector : NSObject <FBViewerContextInjecting> {

	FBProviderMapData* _mapData;
	MNNavigationCoordinator* _navigationCoordinator;
	MNThreadNavigationCoordinator* _threadNavigationCoordinator;
	MNForwardMessageViewControllerFactory* _forwardMessageViewControllerFactory;
	FBUserSession* _session;
	id<FBMPaymentsBridge> _paymentBridge;
	MNImageRequester* _imageRequester;
	FBMobileConfigContextManager* _configManager;
	id<FBMAttachmentURLFormatting> _attachmentURLFormatter;
	MNLocalNotificationController* _localNotificationController;
	MNBroadcastThreadPresenter* _broadcastThreadPresenter;
	MNSoundController* _soundController;

}

@property (nonatomic,readonly) MNNavigationCoordinator * navigationCoordinator;                                          //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,readonly) MNThreadNavigationCoordinator * threadNavigationCoordinator;                              //@synthesize threadNavigationCoordinator=_threadNavigationCoordinator - In the implementation block
@property (nonatomic,readonly) MNForwardMessageViewControllerFactory * forwardMessageViewControllerFactory;              //@synthesize forwardMessageViewControllerFactory=_forwardMessageViewControllerFactory - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                                                  //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) id<FBMPaymentsBridge> paymentBridge;                                                      //@synthesize paymentBridge=_paymentBridge - In the implementation block
@property (nonatomic,readonly) MNImageRequester * imageRequester;                                                        //@synthesize imageRequester=_imageRequester - In the implementation block
@property (nonatomic,readonly) FBMobileConfigContextManager * configManager;                                             //@synthesize configManager=_configManager - In the implementation block
@property (nonatomic,readonly) id<FBMAttachmentURLFormatting> attachmentURLFormatter;                                    //@synthesize attachmentURLFormatter=_attachmentURLFormatter - In the implementation block
@property (nonatomic,readonly) MNLocalNotificationController * localNotificationController;                              //@synthesize localNotificationController=_localNotificationController - In the implementation block
@property (nonatomic,readonly) MNBroadcastThreadPresenter * broadcastThreadPresenter;                                    //@synthesize broadcastThreadPresenter=_broadcastThreadPresenter - In the implementation block
@property (nonatomic,readonly) MNSoundController * soundController;                                                      //@synthesize soundController=_soundController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(FBMobileConfigContextManager *)configManager;
-(MNNavigationCoordinator *)navigationCoordinator;
-(MNThreadNavigationCoordinator *)threadNavigationCoordinator;
-(id<FBMAttachmentURLFormatting>)attachmentURLFormatter;
-(id<FBMPaymentsBridge>)paymentBridge;
-(id)suggestedContactsRetrieverProvider;
-(MNBroadcastThreadPresenter *)broadcastThreadPresenter;
-(id)initWithProviderMapData:(id)arg1 ;
-(id)forwardSenderProvider;
-(MNLocalNotificationController *)localNotificationController;
-(MNForwardMessageViewControllerFactory *)forwardMessageViewControllerFactory;
-(MNSoundController *)soundController;
-(FBUserSession *)session;
-(MNImageRequester *)imageRequester;
@end

