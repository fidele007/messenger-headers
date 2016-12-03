/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBVideoTagFaceAnalysisDelegate.h>

@class FBUserSession, FBVideoTagConfiguration, NSMutableDictionary, NSMutableArray, NSString;

@interface FBVideoTagDatabase : NSObject <FBVideoTagFaceAnalysisDelegate> {

	FBUserSession* _session;
	FBVideoTagConfiguration* _config;
	NSMutableDictionary* _analysesCallbacks;
	NSMutableDictionary* _cachedResults;
	NSMutableArray* _analysesQueue;
	unsigned long long _maxConcurrentAnalysesCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 configuration:(id)arg2 ;
-(id)detectFacesForVideoAssetID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_cancelCompletionBlock:(/*^block*/id)arg1 forVideoAssetID:(id)arg2 ;
-(void)_addCompletionBlock:(/*^block*/id)arg1 forVideoAssetID:(id)arg2 ;
-(void)_enqueueAnalysisIfRequiredForVideoAssetID:(id)arg1 ;
-(void)_removeAnalysisForVideoAssetID:(id)arg1 cancel:(BOOL)arg2 ;
-(void)_processAnalysisQueue;
-(void)_processCallbacksForAssetID:(id)arg1 ;
-(void)videoTagFaceAnalysisDidComplete:(id)arg1 ;
@end

