/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextInjecting.h>

@protocol FBMSPPayloadHandling;
@class FBProviderMapData, FBMSPPayloadListeningAnnouncer, FBMSyncProtocolMQTTBackgroundPolicy, NSString;

@interface FBMMQTTSPMessageSyncTopicHandlerInjector : NSObject <FBViewerContextInjecting> {

	FBProviderMapData* _mapData;
	id<FBMSPPayloadHandling> _syncProtocolPayloadHandler;
	FBMSPPayloadListeningAnnouncer* _syncProtocolPayloadListeningAnnouncer;
	FBMSyncProtocolMQTTBackgroundPolicy* _syncProtocolBackgroundConnectionPolicy;

}

@property (nonatomic,readonly) id<FBMSPPayloadHandling> syncProtocolPayloadHandler;                                       //@synthesize syncProtocolPayloadHandler=_syncProtocolPayloadHandler - In the implementation block
@property (nonatomic,readonly) FBMSPPayloadListeningAnnouncer * syncProtocolPayloadListeningAnnouncer;                    //@synthesize syncProtocolPayloadListeningAnnouncer=_syncProtocolPayloadListeningAnnouncer - In the implementation block
@property (nonatomic,readonly) FBMSyncProtocolMQTTBackgroundPolicy * syncProtocolBackgroundConnectionPolicy;              //@synthesize syncProtocolBackgroundConnectionPolicy=_syncProtocolBackgroundConnectionPolicy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(FBMSyncProtocolMQTTBackgroundPolicy *)syncProtocolBackgroundConnectionPolicy;
-(FBMSPPayloadListeningAnnouncer *)syncProtocolPayloadListeningAnnouncer;
-(id<FBMSPPayloadHandling>)syncProtocolPayloadHandler;
@end

