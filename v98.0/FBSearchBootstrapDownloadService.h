/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAppService.h>

@class FBSearchBootstrapFileManager, FBReachabilityAnnouncer, NSArray, NSOrderedSet, FBUserSession, NSString;

@interface FBSearchBootstrapDownloadService : NSObject <FBAppService> {

	FBSearchBootstrapFileManager* _bootstrapFileManager;
	FBReachabilityAnnouncer* _reachabilityAnnouncer;
	NSArray* _fileMetadatas;
	NSOrderedSet* _bootstrapConfigs;
	FBUserSession* _session;

}

@property (nonatomic,readonly) FBUserSession * session;              //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startAppService;
-(void)stopAppService;
-(void)_prepareBootstrapFileManager;
-(id)_bootstrapDiskStoreForType:(unsigned long long)arg1 ;
-(void)_deleteFilesNotForStoreType:(unsigned long long)arg1 ;
-(void)_deleteFilesForStoreType:(unsigned long long)arg1 ;
-(id)loadMetadataForConfig:(Class)arg1 ;
-(BOOL)_shouldRequestBootstrapForFileMetadata:(id)arg1 ;
-(void)_logNetworkLatency:(id)arg1 status:(id)arg2 resultCount:(unsigned long long)arg3 ;
-(void)_logPostProcessingLatency:(id)arg1 latency:(double)arg2 resultCount:(unsigned long long)arg3 ;
-(void)_logFileSaveLatency:(id)arg1 latency:(double)arg2 resultCount:(unsigned long long)arg3 fileSize:(id)arg4 ;
-(void)_setBootstrapConfigs:(id)arg1 ;
-(void)_requestBootstrapForFileMetadata:(id)arg1 ;
-(void)forceImmediateInvalidation;
-(id)bootstrapFileManager;
-(void)dealloc;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(FBUserSession *)session;
@end

