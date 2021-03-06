/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNMessagesSyncIrisDeltaProcessing.h>

@protocol MNThreadMessageCacheReading, MNMessageListFetchedDiskStateAffirming, MNMessageIdNormalizing, MNAuthenticationManager;
@class MNThreadUpdateService, FBMSPDeleteMessageListenerAnnouncer, NSString;

@interface FBMSPMessageDeleteDeltaHandler : NSObject <FBViewerContextClassProvidable, MNMessagesSyncIrisDeltaProcessing> {

	id<MNThreadMessageCacheReading> _threadMessageCache;
	id<MNMessageListFetchedDiskStateAffirming> _messageListFetchedAffirmer;
	MNThreadUpdateService* _threadUpdateService;
	id<MNMessageIdNormalizing> _messageIdFormatter;
	FBMSPDeleteMessageListenerAnnouncer* _announcer;
	id<MNAuthenticationManager> _authManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithThreadMessageCache:(id)arg1 messageListFetchedAffirmer:(id)arg2 threadUpdateService:(id)arg3 messageIdFormatter:(id)arg4 announcer:(id)arg5 authManager:(id)arg6 ;
-(id)_incrementalPersistenceJobDescriptionsForDelta:(id)arg1 shouldRetainThreadIfMessageSetBecomesEmpty:(BOOL)arg2 ;
-(void)_processDeletedMessagesFromDeltaData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_deleteMessagesWithMessageIds:(id)arg1 threadKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_findMessageWithMessageId:(id)arg1 inThread:(id)arg2 ;
-(void)handleDelta:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)deltasWithMetadataFromDeltaWrapper:(id)arg1 ;
@end

