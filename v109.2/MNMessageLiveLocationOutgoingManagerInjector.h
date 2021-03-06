/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBViewerContextInjecting.h>

@class FBProviderMapData, MNMessageLiveLocationConfigManager, FBUserSession, MNMessageLiveLocationThreadSummaryManager, MNUserSessionObservingCenter, MNPendingThreadRequestListeningAnnouncer, FBBackgroundingAnnouncer, NSString;

@interface MNMessageLiveLocationOutgoingManagerInjector : NSObject <FBViewerContextInjecting> {

	FBProviderMapData* _mapData;
	MNMessageLiveLocationConfigManager* _configManager;
	FBUserSession* _session;
	MNMessageLiveLocationThreadSummaryManager* _threadSummaryManager;
	MNUserSessionObservingCenter* _userSessionObservingCenter;
	MNPendingThreadRequestListeningAnnouncer* _pendingThreadAnnouncer;
	FBBackgroundingAnnouncer* _backgroundingAnnouncer;

}

@property (nonatomic,readonly) MNMessageLiveLocationConfigManager * configManager;                             //@synthesize configManager=_configManager - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                                        //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) MNMessageLiveLocationThreadSummaryManager * threadSummaryManager;               //@synthesize threadSummaryManager=_threadSummaryManager - In the implementation block
@property (nonatomic,readonly) MNUserSessionObservingCenter * userSessionObservingCenter;                      //@synthesize userSessionObservingCenter=_userSessionObservingCenter - In the implementation block
@property (nonatomic,readonly) MNPendingThreadRequestListeningAnnouncer * pendingThreadAnnouncer;              //@synthesize pendingThreadAnnouncer=_pendingThreadAnnouncer - In the implementation block
@property (nonatomic,readonly) FBBackgroundingAnnouncer * backgroundingAnnouncer;                              //@synthesize backgroundingAnnouncer=_backgroundingAnnouncer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(MNMessageLiveLocationConfigManager *)configManager;
-(MNUserSessionObservingCenter *)userSessionObservingCenter;
-(MNPendingThreadRequestListeningAnnouncer *)pendingThreadAnnouncer;
-(FBBackgroundingAnnouncer *)backgroundingAnnouncer;
-(MNMessageLiveLocationThreadSummaryManager *)threadSummaryManager;
-(id)initWithProviderMapData:(id)arg1 ;
-(FBUserSession *)session;
@end

