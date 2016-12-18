/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextInjecting.h>

@protocol FBMSPLocalPayloadHandling;
@class FBProviderMapData, MNCrossProcessDiskCommunicationAdapterService, MNSPDataStore, FBAnalytics, NSString;

@interface MNNotificationServiceSerializedDeltaProcessingServiceInjector : NSObject <FBViewerContextInjecting> {

	FBProviderMapData* _mapData;
	MNCrossProcessDiskCommunicationAdapterService* _diskCommunicationService;
	MNSPDataStore* _spDataStore;
	FBAnalytics* _analytics;
	id<FBMSPLocalPayloadHandling> _payloadLocalHandler;

}

@property (nonatomic,readonly) MNCrossProcessDiskCommunicationAdapterService * diskCommunicationService;              //@synthesize diskCommunicationService=_diskCommunicationService - In the implementation block
@property (nonatomic,readonly) MNSPDataStore * spDataStore;                                                           //@synthesize spDataStore=_spDataStore - In the implementation block
@property (nonatomic,readonly) FBAnalytics * analytics;                                                               //@synthesize analytics=_analytics - In the implementation block
@property (nonatomic,readonly) id<FBMSPLocalPayloadHandling> payloadLocalHandler;                                     //@synthesize payloadLocalHandler=_payloadLocalHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(MNSPDataStore *)spDataStore;
-(FBAnalytics *)analytics;
-(MNCrossProcessDiskCommunicationAdapterService *)diskCommunicationService;
-(id<FBMSPLocalPayloadHandling>)payloadLocalHandler;
@end
