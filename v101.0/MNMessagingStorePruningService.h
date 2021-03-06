/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNServiceControllable.h>

@class FBMessagingStore, MNThreadListFetchedTracker, MNMessageListFetchedTracker, MNFetchedThreadKeyTracker, NSString;

@interface MNMessagingStorePruningService : NSObject <FBClassProvidable, MNServiceControllable> {

	FBMessagingStore* _messagingStore;
	MNThreadListFetchedTracker* _threadListFetchedTracker;
	MNMessageListFetchedTracker* _messageListFetchedTracker;
	MNFetchedThreadKeyTracker* _fetchedThreadKeyTracker;
	BOOL _isRunning;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithMessagingStore:(id)arg1 threadListFetchedTracker:(id)arg2 messageListFetchedTracker:(id)arg3 fetchedThreadKeyTracker:(id)arg4 ;
-(void)_kickOffPruningJob;
-(void)_cleanUpAdditionalStatesForPrunedThreadKeys:(id)arg1 ;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
@end

