/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPlatformActionOperation.h>
#import <Messenger/FBMediaUploadFlowCoordinatorListener.h>
#import <Messenger/FBPlatformActionPublisherOperating.h>

@protocol FBKeyValueObjectStore, FBNetworkDispatch;
@class FBComposerLogger, FBPersistentKeyValueStore, FBExperimentManager, FBUserPreferences, FBUserSession, FBMediaUploadFlowCoordinatorWrapper, FBComposerPublisherData, NSString;

@interface FBPlatformActionPublishMessageAttachmentMediaOperation : FBPlatformActionOperation <FBMediaUploadFlowCoordinatorListener, FBPlatformActionPublisherOperating> {

	FBComposerLogger* _logger;
	FBPersistentKeyValueStore* _persistentKeyValueStore;
	id<FBKeyValueObjectStore> _coreComposerObjectStore;
	FBExperimentManager* _experimentManager;
	id<FBNetworkDispatch> _networkDispatcher;
	FBUserPreferences* _userPreferences;
	FBUserSession* _userSession;
	FBMediaUploadFlowCoordinatorWrapper* _actionMediaUploadManager;
	FBComposerPublisherData* _publisherDataForUploadManager;

}

@property (nonatomic,retain) FBMediaUploadFlowCoordinatorWrapper * actionMediaUploadManager;              //@synthesize actionMediaUploadManager=_actionMediaUploadManager - In the implementation block
@property (nonatomic,retain) FBComposerPublisherData * publisherDataForUploadManager;                     //@synthesize publisherDataForUploadManager=_publisherDataForUploadManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPublisherDataForUploadManager:(FBComposerPublisherData *)arg1 ;
-(id)defaultErrorMessage;
-(void)_cancelActionMediaUploadManager;
-(FBMediaUploadFlowCoordinatorWrapper *)actionMediaUploadManager;
-(void)setActionMediaUploadManager:(FBMediaUploadFlowCoordinatorWrapper *)arg1 ;
-(void)completedUploadAllMedia:(id)arg1 ;
-(void)uploadManager:(id)arg1 didStartMediaUploadItem:(id)arg2 ;
-(void)uploadManager:(id)arg1 didFinishMediaUploadItem:(id)arg2 mediaFBID:(id)arg3 ;
-(void)uploadManager:(id)arg1 didUpdateTotalProgress:(double)arg2 ;
-(void)uploadManager:(id)arg1 didUploadMediaItem:(id)arg2 failWithError:(id)arg3 ;
-(void)uploadManager:(id)arg1 didStartTranscodingForMediaItem:(id)arg2 ;
-(id)initWithAction:(id)arg1 userSession:(id)arg2 logger:(id)arg3 persistentKeyValueStore:(id)arg4 coreComposerObjectStore:(id)arg5 experimentManager:(id)arg6 networkDispatcher:(id)arg7 userPreferences:(id)arg8 ;
-(FBComposerPublisherData *)publisherDataForUploadManager;
-(void)cancel;
-(void)cleanup;
-(void)process;
@end

