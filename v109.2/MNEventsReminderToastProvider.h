/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:34 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadToastProvider.h>
#import <FBSharedFramework/FBClassProvidable.h>

@class MNThreadToastProviderListenerAnnouncer, FBMobileConfigContextManager, MNEventsReminderToastCoordinator, NSString;

@interface MNEventsReminderToastProvider : NSObject <MNThreadToastProvider, FBClassProvidable> {

	MNThreadToastProviderListenerAnnouncer* _announcer;
	FBMobileConfigContextManager* _configManager;
	MNEventsReminderToastCoordinator* _toastCoordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)toastProviderIdentifier;
-(BOOL)isEligibleForThreadContext:(id)arg1 ;
-(id)toastForThreadContext:(id)arg1 ;
-(id)initWithConfigManager:(id)arg1 actionHandler:(id)arg2 toastCoordinator:(id)arg3 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end

