/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBCreativeEditingToolsLogger.h>

@protocol FBCreativeEditingToolsLoggerAggregatorDelegate;
@class NSMutableDictionary, NSString, FBUserSession;

@interface FBImageFilterLogger : NSObject <FBCreativeEditingToolsLogger> {

	NSMutableDictionary* _assetIDsToLogs;
	NSString* _compositionID;
	FBUserSession* _session;
	unsigned long long _source;
	id<FBCreativeEditingToolsLoggerAggregatorDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<FBCreativeEditingToolsLoggerAggregatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 compositionID:(id)arg2 source:(unsigned long long)arg3 delegate:(id)arg4 ;
-(void)didSelectFilterForAssetID:(id)arg1 filterName:(id)arg2 ;
-(void)didShowPhotoInComposerWithAssetID:(id)arg1 ;
-(void)didSwipePhotoWithAssetID:(id)arg1 filterName:(id)arg2 ;
-(void)didShowSwipingNuxForAssetID:(id)arg1 ;
-(id)_logForAssetID:(id)arg1 ;
-(void)logEventsAndAggregateWithExtraData:(id)arg1 published:(BOOL)arg2 ;
-(void)_aggregateWithExtraData:(id)arg1 ;
-(void)logEventsAndAggregateWithExtraData:(id)arg1 finalSelectedPhotosAssetIDs:(id)arg2 published:(BOOL)arg3 ;
-(void)didRemovePhotoWithAssetID:(id)arg1 ;
-(id)_extraDataForPhotoWithAssetID:(id)arg1 ;
-(void)_updateTrackedActionsForNuxPolicyWithPhotoCount:(unsigned long long)arg1 swiped:(BOOL)arg2 ;
-(void)_logEvent:(id)arg1 forAssetID:(id)arg2 ;
-(void)didAddPhotoWithAssetID:(id)arg1 filterName:(id)arg2 ;
-(id<FBCreativeEditingToolsLoggerAggregatorDelegate>)delegate;
@end

