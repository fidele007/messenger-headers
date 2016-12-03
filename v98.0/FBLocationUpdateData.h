/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, FBLocationManagerInfo, FBLocationManagerBluetoothInfo, FBLocationManagerWifiInfo, FBLocationManagerCellInfo;

@interface FBLocationUpdateData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _appUseState;
	NSString* _deviceId;
	FBLocationManagerInfo* _locationManagerInfo;
	FBLocationManagerBluetoothInfo* _bluetoothInfo;
	FBLocationManagerWifiInfo* _wifiInfo;
	FBLocationManagerCellInfo* _cellInfo;

}

@property (nonatomic,copy) NSString * clientMutationId;                                 //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                                          //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * appUseState;                                      //@synthesize appUseState=_appUseState - In the implementation block
@property (nonatomic,copy) NSString * deviceId;                                         //@synthesize deviceId=_deviceId - In the implementation block
@property (nonatomic,copy) FBLocationManagerInfo * locationManagerInfo;                 //@synthesize locationManagerInfo=_locationManagerInfo - In the implementation block
@property (nonatomic,copy) FBLocationManagerBluetoothInfo * bluetoothInfo;              //@synthesize bluetoothInfo=_bluetoothInfo - In the implementation block
@property (nonatomic,copy) FBLocationManagerWifiInfo * wifiInfo;                        //@synthesize wifiInfo=_wifiInfo - In the implementation block
@property (nonatomic,copy) FBLocationManagerCellInfo * cellInfo;                        //@synthesize cellInfo=_cellInfo - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(NSString *)actorId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)appUseState;
-(void)setAppUseState:(NSString *)arg1 ;
-(FBLocationManagerInfo *)locationManagerInfo;
-(void)setLocationManagerInfo:(FBLocationManagerInfo *)arg1 ;
-(FBLocationManagerBluetoothInfo *)bluetoothInfo;
-(void)setBluetoothInfo:(FBLocationManagerBluetoothInfo *)arg1 ;
-(FBLocationManagerWifiInfo *)wifiInfo;
-(void)setWifiInfo:(FBLocationManagerWifiInfo *)arg1 ;
-(FBLocationManagerCellInfo *)cellInfo;
-(void)setCellInfo:(FBLocationManagerCellInfo *)arg1 ;
-(void)setDeviceId:(NSString *)arg1 ;
-(NSString *)deviceId;
@end

