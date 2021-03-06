/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:55 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBViewerContextClassProvidable.h>
#import <Messenger/MNMessagesSyncIrisDeltaProcessing.h>

@protocol MNAuthenticationManager;
@class MNThreadSummaryCacheThreadListFilterer, MNThreadUpdateService, NSString;

@interface FBMSPMarkReadDeltaHandler : NSObject <FBViewerContextClassProvidable, MNMessagesSyncIrisDeltaProcessing> {

	MNThreadSummaryCacheThreadListFilterer* _threadListFilterer;
	MNThreadUpdateService* _threadUpdateService;
	id<MNAuthenticationManager> _authenticationManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithThreadListFilterer:(id)arg1 threadUpdateService:(id)arg2 authenticationManager:(id)arg3 ;
-(id)_incrementalPersistenceJobDescriptionsForDelta:(id)arg1 ;
-(id)_metadatasToMarkInboxAsReadWithTimestamp:(long long)arg1 ;
-(void)_processThreadKeysFromDeltaData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processFoldersFromDeltaData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_markReadThreadsFromThreadsProviderBlock:(/*^block*/id)arg1 timestamp:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)deltasWithMetadataFromDeltaWrapper:(id)arg1 ;
-(void)handleDelta:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithProviderMapData:(id)arg1 ;
@end

