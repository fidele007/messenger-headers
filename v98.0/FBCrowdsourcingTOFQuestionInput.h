/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class FBPulsarScan, FBViewerCoordinates, FBLocationTriggerWifiData;

@interface FBCrowdsourcingTOFQuestionInput : FBGraphQLInput {

	FBPulsarScan* _bluetoothScan;
	FBViewerCoordinates* _viewerCoordinates;
	FBLocationTriggerWifiData* _wifiData;

}

@property (nonatomic,copy) FBPulsarScan * bluetoothScan;                         //@synthesize bluetoothScan=_bluetoothScan - In the implementation block
@property (nonatomic,copy) FBViewerCoordinates * viewerCoordinates;              //@synthesize viewerCoordinates=_viewerCoordinates - In the implementation block
@property (nonatomic,copy) FBLocationTriggerWifiData * wifiData;                 //@synthesize wifiData=_wifiData - In the implementation block
-(void)setViewerCoordinates:(FBViewerCoordinates *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(FBViewerCoordinates *)viewerCoordinates;
-(FBPulsarScan *)bluetoothScan;
-(void)setBluetoothScan:(FBPulsarScan *)arg1 ;
-(FBLocationTriggerWifiData *)wifiData;
-(void)setWifiData:(FBLocationTriggerWifiData *)arg1 ;
@end

