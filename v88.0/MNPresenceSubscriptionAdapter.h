/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNServiceControllable.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@protocol FBProvider, FBPresenceUpdateListener;
@class MNPresenceSubscriptionService, NSString;

@interface MNPresenceSubscriptionAdapter : NSObject <MNServiceControllable, FBViewerContextClassProvidable> {

	id<FBProvider> _presenceSubscriptionServiceProvider;
	MNPresenceSubscriptionService* _presenceSubscriptionService;
	id<FBProvider> _threadLastActivityTrackerProvider;
	id<FBProvider> _typingLastActivityTrackerProvider;
	id<FBProvider> _userProviderProvider;
	id<FBProvider> _presenceUpdaterProvider;
	id<FBProvider> _presenceUpdateListenerProvider;
	id<FBPresenceUpdateListener> _presenceUpdateListener;
	id<FBProvider> _contactSyncPolicyProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithPresenceSubscriptionServiceProvider:(id)arg1 threadLastActivityTrackerProvider:(id)arg2 threadTypingActivityTrackerProvider:(id)arg3 userProviderProvider:(id)arg4 presenceUpdaterProvider:(id)arg5 contactSyncPolicyProvider:(id)arg6 ;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
@end
