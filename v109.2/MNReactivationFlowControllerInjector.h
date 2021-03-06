/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBViewerContextInjecting.h>

@protocol MNModalPresentation;
@class FBProviderMapData, FBUserSession, MNPendingAccountStore, FBAnalytics, MNPendingAccountController, NSString;

@interface MNReactivationFlowControllerInjector : NSObject <FBViewerContextInjecting> {

	FBProviderMapData* _mapData;
	id<MNModalPresentation> _modalPresenter;
	FBUserSession* _session;
	MNPendingAccountStore* _pendingAccountStore;
	FBAnalytics* _analytics;
	MNPendingAccountController* _pendingAccountController;

}

@property (nonatomic,readonly) id<MNModalPresentation> modalPresenter;                             //@synthesize modalPresenter=_modalPresenter - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                            //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) MNPendingAccountStore * pendingAccountStore;                        //@synthesize pendingAccountStore=_pendingAccountStore - In the implementation block
@property (nonatomic,readonly) FBAnalytics * analytics;                                            //@synthesize analytics=_analytics - In the implementation block
@property (nonatomic,readonly) MNPendingAccountController * pendingAccountController;              //@synthesize pendingAccountController=_pendingAccountController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(MNPendingAccountStore *)pendingAccountStore;
-(id)nonCachedLoginViewController;
-(MNPendingAccountController *)pendingAccountController;
-(id)nonCachedLogoutManager;
-(id)initWithProviderMapData:(id)arg1 ;
-(FBAnalytics *)analytics;
-(id<MNModalPresentation>)modalPresenter;
-(FBUserSession *)session;
@end

