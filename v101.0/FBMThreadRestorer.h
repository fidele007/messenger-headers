/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNLegacyThreadRestoring.h>

@protocol MNThreadDeletedAffirming, MNThreadMessageCaching, MNThreadSummaryCaching;
@class FBMThreadPendingDeleteTracker, NSString;

@interface FBMThreadRestorer : NSObject <FBViewerContextClassProvidable, MNLegacyThreadRestoring> {

	FBMThreadPendingDeleteTracker* _pendingThreadDeleteTracker;
	id<MNThreadDeletedAffirming> _threadDeletedAffirmer;
	id<MNThreadMessageCaching> _threadMessageCache;
	id<MNThreadSummaryCaching> _threadSummaryCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithPendingThreadDeleteTracker:(id)arg1 deletedThreadAffirmer:(id)arg2 threadMessageCache:(id)arg3 threadSummaryCache:(id)arg4 ;
-(long long)restoreThread:(id)arg1 ;
@end

