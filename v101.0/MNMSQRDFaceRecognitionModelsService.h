/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBReachabilityListener.h>
#import <Messenger/MNServiceControllable.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@protocol OS_dispatch_queue, MNMediaFiltersQuerying, MNMediaFilterAssetDownloaderProviding, MNMediaFilterAssetManagerProviding, MNMediaFilterDescribing;
@class NSObject, FBReachabilityAnnouncer, MNMediaFiltersConfiguration, NSString;

@interface MNMSQRDFaceRecognitionModelsService : NSObject <FBReachabilityListener, MNServiceControllable, FBViewerContextClassProvidable> {

	NSObject*<OS_dispatch_queue> _executionQueue;
	id<MNMediaFiltersQuerying> _mediaFiltersQuerier;
	id<MNMediaFilterAssetDownloaderProviding> _assetDownloaderProvider;
	id<MNMediaFilterAssetManagerProviding> _assetManagerProvider;
	id<MNMediaFilterDescribing> _msqrdFilterDescriptor;
	FBReachabilityAnnouncer* _reachabilityAnnouncer;
	unsigned long long _reachabilityState;
	unsigned long long _downloadEligibleReachabilityState;
	BOOL _serviceRunning;
	BOOL _graphQLFetchInProgress;
	BOOL _faceRecognitionMasksDownloadInProgress;
	MNMediaFiltersConfiguration* _configuration;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_onDidChangeReachabilityState;
-(void)_onReachabilityStateChangedToState:(unsigned long long)arg1 ;
-(void)reachabilityStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2 ;
-(id)initWithMSQRDMediaFilterQuerier:(id)arg1 assetDownloaderProvider:(id)arg2 assetManagerProvider:(id)arg3 configuration:(id)arg4 reachabilityAnnouncer:(id)arg5 executionQueue:(id)arg6 ;
-(BOOL)_isMSQRDFaceRecognitionModelsPreloadEnabled;
-(void)_serviceStartWithCallback:(id)arg1 ;
-(void)_serviceStop;
-(void)_fetchFaceRecognitionModelsIfNeeded;
-(BOOL)_isMSQRDFilterFetchNeeded;
-(BOOL)_isFaceRecognitionModelsFetchNeeded;
-(BOOL)_isFacerRecognitionModelsFetchPossibleAndNeeded;
-(void)_didFetchMSQRDFilterDescriptor:(id)arg1 ;
-(void)_didFailToFetchMSQRDFilterDescriptorWithError:(id)arg1 ;
-(void)_fetchFaceRecognitionModels;
-(void)_didFetchFilterAssetDependencies;
-(void)_didFailToFetchFilterAssetDependenciesWithError:(id)arg1 ;
-(void)dealloc;
-(void)stop;
-(void)start:(id)arg1 ;
-(BOOL)_isNetworkReachable;
-(void)handleIdle;
@end

