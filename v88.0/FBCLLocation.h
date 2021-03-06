/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class CLLocation, FBCLWifiNetwork, FBBluetoothDataList, NSDate;

@interface FBCLLocation : NSObject <NSCoding> {

	CLLocation* _location;
	FBCLWifiNetwork* _connectedWifi;
	FBBluetoothDataList* _bluetoothDataList;

}

@property (nonatomic,readonly) CLLocation * location;                                //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) FBCLWifiNetwork * connectedWifi;                      //@synthesize connectedWifi=_connectedWifi - In the implementation block
@property (nonatomic,readonly) FBBluetoothDataList * bluetoothDataList;              //@synthesize bluetoothDataList=_bluetoothDataList - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,readonly) double horizontalAccuracy; 
@property (nonatomic,copy,readonly) NSDate * timestamp; 
+(id)createWithLatitude:(double)arg1 longitude:(double)arg2 accuracy:(double)arg3 timestamp:(id)arg4 ;
+(id)createWithLocation:(id)arg1 connectedWifi:(id)arg2 bluetoothDataList:(id)arg3 ;
-(id)initWithLocation:(id)arg1 connectedWifi:(id)arg2 bluetoothDataList:(id)arg3 ;
-(FBCLWifiNetwork *)connectedWifi;
-(FBBluetoothDataList *)bluetoothDataList;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)timestamp;
-(CLLocation *)location;
-(id)dictionaryRepresentation;
-(CLLocationCoordinate2D)coordinate;
-(double)distanceFromLocation:(id)arg1 ;
-(double)horizontalAccuracy;
@end

