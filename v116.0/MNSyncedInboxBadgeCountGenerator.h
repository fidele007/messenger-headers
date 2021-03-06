/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:47 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassInjectable.h>

@class MNSyncedInboxBadgeCountGeneratorInjector, NSString;

@interface MNSyncedInboxBadgeCountGenerator : NSObject <FBClassInjectable> {

	MNSyncedInboxBadgeCountGeneratorInjector* _injector;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(id)_unreadThreadKeysFromClientState;
-(id)_computeNewBadgeCountFromIgnorableServerBadgeCount:(long long)arg1 ;
-(id)_computeNewBadgeCountFromPreferredBadgeCount:(long long)arg1 ;
-(BOOL)_canUseCandidateCount:(long long)arg1 givenAlternateCount:(long long)arg2 ;
-(BOOL)_isBadgeableThreadSummary:(id)arg1 ;
-(id)computeNewBadgeCountStateGivenServerBadgeCount:(id)arg1 ;
-(id)initWithInjector:(id)arg1 ;
@end

