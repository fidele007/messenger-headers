/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, NSDate;

@interface FBGravityIBeacon : NSObject {

	long long _state;
	BOOL _monitoring;
	NSString* _uuid;
	NSNumber* _major;
	NSNumber* _minor;
	NSDate* _enterDate;
	NSDate* _exitDate;
	NSDate* _lastSeenDate;
	long long _rssi;

}

@property (copy,readonly) NSString * uuid;                        //@synthesize uuid=_uuid - In the implementation block
@property (copy,readonly) NSNumber * major;                       //@synthesize major=_major - In the implementation block
@property (copy,readonly) NSNumber * minor;                       //@synthesize minor=_minor - In the implementation block
@property (copy) NSDate * enterDate;                              //@synthesize enterDate=_enterDate - In the implementation block
@property (copy) NSDate * exitDate;                               //@synthesize exitDate=_exitDate - In the implementation block
@property (copy) NSDate * lastSeenDate;                           //@synthesize lastSeenDate=_lastSeenDate - In the implementation block
@property (copy,readonly) NSDate * lastBoundaryDate; 
@property (assign) long long rssi;                                //@synthesize rssi=_rssi - In the implementation block
@property (assign) long long state; 
@property (getter=isMonitoring) BOOL monitoring;                  //@synthesize monitoring=_monitoring - In the implementation block
-(NSDate *)enterDate;
-(NSDate *)exitDate;
-(NSDate *)lastSeenDate;
-(NSDate *)lastBoundaryDate;
-(id)logExtras;
-(void)setEnterDate:(NSDate *)arg1 ;
-(void)setExitDate:(NSDate *)arg1 ;
-(id)initWithUUID:(id)arg1 major:(id)arg2 minor:(id)arg3 ;
-(void)setLastSeenDate:(NSDate *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(NSString *)uuid;
-(void)setMonitoring:(BOOL)arg1 ;
-(void)setRssi:(long long)arg1 ;
-(long long)rssi;
-(NSNumber *)major;
-(NSNumber *)minor;
-(BOOL)isMonitoring;
@end

