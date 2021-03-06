/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:35 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPaymentsGroupCommercePlatformContextCoordinatorListener.h>
#import <Messenger/MNPaymentsGroupCommerceBannerActionHandlerDelegate.h>

@protocol FBNetworkDispatch, FBIntentHandler, MNPaymentsGroupCommerceToastCoordinatorDelegate;
@class NSString, MNUserStore, FBMobileConfigContextManager, MNPaymentsGroupCommerceGraphRequest, MNPaymentsGroupCommercePlatformContextCoordinator, MNPaymentsGroupCommerceBannerActionHandler, FBLazyCreator, FBMemPeerToPeerPlatformContext, NSMutableSet;

@interface MNPaymentsGroupCommerceToastCoordinator : NSObject <MNPaymentsGroupCommercePlatformContextCoordinatorListener, MNPaymentsGroupCommerceBannerActionHandlerDelegate> {

	NSString* _currentUserId;
	MNUserStore* _userStore;
	id<FBNetworkDispatch> _networkDispatch;
	id<FBIntentHandler> _intentHandler;
	FBMobileConfigContextManager* _configManager;
	MNPaymentsGroupCommerceGraphRequest* _graphRequest;
	MNPaymentsGroupCommercePlatformContextCoordinator* _platformContextCoordinator;
	MNPaymentsGroupCommerceBannerActionHandler* _bannerActionHandler;
	FBLazyCreator* _toastLazyCreator;
	FBMemPeerToPeerPlatformContext* _previouslyConsumedPlatformContext;
	NSString* _previouslyConsumedUserId;
	NSMutableSet* _blacklistedPlatformContextId;
	id<MNPaymentsGroupCommerceToastCoordinatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNPaymentsGroupCommerceToastCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCurrentUserId:(id)arg1 imageDownloader:(id)arg2 networkDispatch:(id)arg3 userStore:(id)arg4 intentHandler:(id)arg5 configManager:(id)arg6 platformContextCoordinator:(id)arg7 ;
-(id)toastForGroupThreadId:(id)arg1 otherParticipantIds:(id)arg2 ;
-(id)toastForUserId:(id)arg1 ;
-(id)_toastForPlatfromContext:(id)arg1 ;
-(void)_temporaryBlockPlatformContext:(id)arg1 ;
-(void)_deletePlatformContext:(id)arg1 ;
-(void)_logBannerCreationEventWithPlatformContext:(id)arg1 ;
-(void)didUpdatePlatformContexts:(id)arg1 ;
-(void)groupCommerceBannerActionHandler:(id)arg1 didTapDismissForPlatformContext:(id)arg2 ;
-(void)setDelegate:(id<MNPaymentsGroupCommerceToastCoordinatorDelegate>)arg1 ;
-(id<MNPaymentsGroupCommerceToastCoordinatorDelegate>)delegate;
@end

