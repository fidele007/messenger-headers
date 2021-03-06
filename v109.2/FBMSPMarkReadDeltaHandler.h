/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:37 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
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
-(id)deltasWithMetadataFromDeltaWrapper:(id)arg1 ;
-(void)handleDelta:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithThreadListFilterer:(id)arg1 threadUpdateService:(id)arg2 authenticationManager:(id)arg3 ;
-(id)_incrementalPersistenceJobDescriptionsForDelta:(id)arg1 ;
-(id)_metadatasToMarkInboxAsReadWithTimestamp:(long long)arg1 ;
-(void)_processThreadKeysFromDeltaData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processFoldersFromDeltaData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_markReadThreadsFromThreadsProviderBlock:(/*^block*/id)arg1 timestamp:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithProviderMapData:(id)arg1 ;
@end

