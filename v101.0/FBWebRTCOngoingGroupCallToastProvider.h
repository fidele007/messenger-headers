/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWebRTCOngoingGroupCallToastCoordinatorDelegate.h>
#import <Messenger/MNThreadToastProvider.h>

@class MNThreadToastProviderListenerAnnouncer, FBWebRTCOngoingGroupCallToastCoordinator, NSString;

@interface FBWebRTCOngoingGroupCallToastProvider : NSObject <FBWebRTCOngoingGroupCallToastCoordinatorDelegate, MNThreadToastProvider> {

	MNThreadToastProviderListenerAnnouncer* _announcer;
	FBWebRTCOngoingGroupCallToastCoordinator* _toastCoordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)toastProviderIdentifier;
-(id)initWithActiveCallTracker:(id)arg1 callStarter:(id)arg2 configManager:(id)arg3 ;
-(void)didUpdateToast;
-(BOOL)isEligibleForThreadContext:(id)arg1 ;
-(id)toastForThreadContext:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

