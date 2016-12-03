/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <Messenger/FBLocationUpdate.h>

@class NSDate, CLLocation, FBCLWifiNetwork, FBBluetoothDataList;

@interface FBCLLocation : NSObject <NSCoding, FBLocationUpdate> {

	CLLocation* _location;
	FBCLWifiNetwork* _connectedWifi;
	FBBluetoothDataList* _bluetoothDataList;

}

@property (nonatomic,readonly) CLLocation * location;                                //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) FBCLWifiNetwork * connectedWifi;                      //@synthesize connectedWifi=_connectedWifi - In the implementation block
@property (nonatomic,readonly) FBBluetoothDataList * bluetoothDataList;              //@synthesize bluetoothDataList=_bluetoothDataList - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,readonly) double horizontalAccuracy; 
@property (nonatomic,readonly) double altitude; 
@property (nonatomic,readonly) double verticalAccuracy; 
@property (nonatomic,readonly) double speed; 
@property (nonatomic,readonly) double course; 
@property (nonatomic,copy,readonly) NSDate * timestamp; 
+(id)createWithLocation:(id)arg1 connectedWifi:(id)arg2 bluetoothDataList:(id)arg3 ;
+(id)createWithLatitude:(double)arg1 longitude:(double)arg2 accuracy:(double)arg3 timestamp:(id)arg4 ;
-(id)initWithLocation:(id)arg1 connectedWifi:(id)arg2 bluetoothDataList:(id)arg3 ;
-(FBCLWifiNetwork *)connectedWifi;
-(FBBluetoothDataList *)bluetoothDataList;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)timestamp;
-(double)speed;
-(CLLocation *)location;
-(id)dictionaryRepresentation;
-(double)altitude;
-(double)course;
-(CLLocationCoordinate2D)coordinate;
-(double)distanceFromLocation:(id)arg1 ;
-(double)verticalAccuracy;
-(double)horizontalAccuracy;
@end

