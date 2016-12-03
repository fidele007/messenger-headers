/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:06 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMStickerTrayConfigSyncPolicy.h>
#import <Messenger/FBMStickerTrayConfigSyncListener.h>

@class FBMStickerTrayConfigSyncListenerAnnouncer, FBMStickerTrayConfigSyncOperation, FBMStickerTrayConfigSyncPolicy, NSString;

@interface FBMStickerTrayConfigSyncCoordinator : NSObject <FBMStickerTrayConfigSyncPolicy, FBMStickerTrayConfigSyncListener> {

	FBMStickerTrayConfigSyncListenerAnnouncer* _syncAnnouncer;
	FBMStickerTrayConfigSyncOperation* _syncOperation;
	FBMStickerTrayConfigSyncPolicy* _syncPolicy;
	/*^block*/id _syncOperationProvider;
	BOOL _syncEnabled;
	BOOL _isNewSyncOperationScheduled;
	unsigned long long _scheduledSyncOperationType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addSyncListener:(id)arg1 ;
-(void)removeSyncListener:(id)arg1 ;
-(void)_startNewFullSyncOperation;
-(void)_scheduleNewOperationWithType:(unsigned long long)arg1 ;
-(void)_startNewPartialSyncOperation;
-(void)stickerSyncOperationWillStart;
-(void)stickerSyncOperationDidFinish:(id)arg1 ;
-(void)_startNewOperationIfScheduled;
-(void)stickerSyncOperationDidFail:(id)arg1 ;
-(void)_cancelSyncOperation;
-(void)syncRequired;
-(void)partialSyncRequired;
-(id)initWithStickerTrayConfigSyncPolicy:(id)arg1 syncOperationProvider:(/*^block*/id)arg2 ;
-(void)stop;
-(void)start;
@end

