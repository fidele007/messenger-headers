/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>
#import <Messenger/MNServiceControllable.h>
#import <Messenger/MNSPDataStoreListening.h>
#import <Messenger/MNSyncProtocolConfigurationSequenceIdOverridding.h>

@class MNNotificationServiceSerializedDeltaProcessingServiceInjector, FBPair, NSString;

@interface MNNotificationServiceSerializedDeltaProcessingService : NSObject <FBClassInjectable, MNServiceControllable, MNSPDataStoreListening, MNSyncProtocolConfigurationSequenceIdOverridding> {

	MNNotificationServiceSerializedDeltaProcessingServiceInjector* _injector;
	BOOL _isStopped;
	FBPair* _clientPayloadInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) BOOL isStopped;                                  //@synthesize isStopped=_isStopped - In the implementation block
@property (retain) FBPair * clientPayloadInfo;                      //@synthesize clientPayloadInfo=_clientPayloadInfo - In the implementation block
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(void)didUpdateSequenceId:(long long)arg1 withToken:(id)arg2 ;
-(void)didInvalidateStore;
-(void)setIsStopped:(BOOL)arg1 ;
-(void)setClientPayloadInfo:(FBPair *)arg1 ;
-(void)_processSavedResults:(id)arg1 purgeToken:(id)arg2 purger:(id)arg3 ;
-(FBPair *)clientPayloadInfo;
-(void)_clearDiskStorage;
-(long long)sequenceIdToUseForConnectionWithToken:(id)arg1 currentSequenceId:(long long)arg2 ;
-(BOOL)isStopped;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
@end

