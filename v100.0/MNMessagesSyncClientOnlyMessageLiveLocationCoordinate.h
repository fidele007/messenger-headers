/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface MNMessagesSyncClientOnlyMessageLiveLocationCoordinate : NSObject <TBase, NSCoding> {

	long long __latitude;
	long long __longitude;
	long long __timestampMilliseconds;
	long long __accuracyMillimeters;
	long long __speedMillimetersPerSecond;
	long long __altitudeMillimeters;
	long long __altitudeAccuracyMillimeters;
	long long __bearingDegrees;
	BOOL __latitude_isset;
	BOOL __longitude_isset;
	BOOL __timestampMilliseconds_isset;
	BOOL __accuracyMillimeters_isset;
	BOOL __speedMillimetersPerSecond_isset;
	BOOL __altitudeMillimeters_isset;
	BOOL __altitudeAccuracyMillimeters_isset;
	BOOL __bearingDegrees_isset;

}

@property (assign,setter=setLatitude:,getter=latitude,nonatomic) long long latitude; 
@property (assign,setter=setLongitude:,getter=longitude,nonatomic) long long longitude; 
@property (assign,setter=setTimestampMilliseconds:,getter=timestampMilliseconds,nonatomic) long long timestampMilliseconds; 
@property (assign,setter=setAccuracyMillimeters:,getter=accuracyMillimeters,nonatomic) long long accuracyMillimeters; 
@property (assign,setter=setSpeedMillimetersPerSecond:,getter=speedMillimetersPerSecond,nonatomic) long long speedMillimetersPerSecond; 
@property (assign,setter=setAltitudeMillimeters:,getter=altitudeMillimeters,nonatomic) long long altitudeMillimeters; 
@property (assign,setter=setAltitudeAccuracyMillimeters:,getter=altitudeAccuracyMillimeters,nonatomic) long long altitudeAccuracyMillimeters; 
@property (assign,setter=setBearingDegrees:,getter=bearingDegrees,nonatomic) long long bearingDegrees; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(BOOL)latitudeIsSet;
-(BOOL)longitudeIsSet;
-(BOOL)timestampMillisecondsIsSet;
-(long long)timestampMilliseconds;
-(long long)bearingDegrees;
-(void)setTimestampMilliseconds:(long long)arg1 ;
-(void)setBearingDegrees:(long long)arg1 ;
-(void)unsetLatitude;
-(void)unsetLongitude;
-(void)setAccuracyMillimeters:(long long)arg1 ;
-(void)setSpeedMillimetersPerSecond:(long long)arg1 ;
-(void)setAltitudeMillimeters:(long long)arg1 ;
-(void)setAltitudeAccuracyMillimeters:(long long)arg1 ;
-(id)initWithLatitude:(long long)arg1 longitude:(long long)arg2 timestampMilliseconds:(long long)arg3 accuracyMillimeters:(long long)arg4 speedMillimetersPerSecond:(long long)arg5 altitudeMillimeters:(long long)arg6 altitudeAccuracyMillimeters:(long long)arg7 bearingDegrees:(long long)arg8 ;
-(void)unsetTimestampMilliseconds;
-(long long)accuracyMillimeters;
-(BOOL)accuracyMillimetersIsSet;
-(void)unsetAccuracyMillimeters;
-(long long)speedMillimetersPerSecond;
-(BOOL)speedMillimetersPerSecondIsSet;
-(void)unsetSpeedMillimetersPerSecond;
-(long long)altitudeMillimeters;
-(BOOL)altitudeMillimetersIsSet;
-(void)unsetAltitudeMillimeters;
-(long long)altitudeAccuracyMillimeters;
-(BOOL)altitudeAccuracyMillimetersIsSet;
-(void)unsetAltitudeAccuracyMillimeters;
-(BOOL)bearingDegreesIsSet;
-(void)unsetBearingDegrees;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)validate;
-(void)setLatitude:(long long)arg1 ;
-(void)setLongitude:(long long)arg1 ;
-(long long)latitude;
-(long long)longitude;
-(void)write:(id)arg1 ;
@end

