/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNContactShareCardHandler.h>
#import <FBSharedFramework/FBViewerContextClassProvidable.h>

@protocol FBMProfileURLUtils, MNSecureMessagingDeviceInformation;
@class MNNewThreadNavigationCoordinator, MNSecureMessagingServiceProvider, MNThreadNavigationCoordinator, FBAlertViewCoordinator, MNSecureMessagingDeviceStatusOverrideAlertHandler, MNBlockUserFullScreenViewController, MNNavigationCoordinator, NSString;

@interface MNUserRelatedHandler : NSObject <MNContactShareCardHandler, FBViewerContextClassProvidable> {

	MNNewThreadNavigationCoordinator* _newThreadNavigationCoordinator;
	id<FBMProfileURLUtils> _profileURLUtils;
	MNSecureMessagingServiceProvider* _secureMessagingProvider;
	MNThreadNavigationCoordinator* _threadNavigationCoordinator;
	FBAlertViewCoordinator* _alertViewCoordinator;
	MNSecureMessagingDeviceStatusOverrideAlertHandler* _secureDeviceStatusOverrideHandler;
	id<MNSecureMessagingDeviceInformation> _secureDeviceInformation;
	MNBlockUserFullScreenViewController* _blockUserFullScreenViewController;
	MNNavigationCoordinator* _navigationCoordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithNewThreadNavigationCoordinator:(id)arg1 profileURLUtils:(id)arg2 secureMessagingProvider:(id)arg3 threadNavigationCoordinator:(id)arg4 alertViewCoordinator:(id)arg5 blockUserFullScreenViewController:(id)arg6 navigationCoordinator:(id)arg7 ;
-(void)_navigateToSecureThreadWithKey:(id)arg1 ;
-(void)_didFinishSecureDeviceStatusOverridePromptWithResponse:(BOOL)arg1 forOtherUserId:(id)arg2 ;
-(void)handleTapForCreateGroupWithUser:(id)arg1 ;
-(void)handleTapForViewTimeLineWithUser:(id)arg1 ;
-(void)handleTapForCreateSecretChat:(id)arg1 ;
-(void)handleTapForBlock:(id)arg1 fromViewController:(id)arg2 ;
-(id)initWithProviderMapData:(id)arg1 ;
@end

